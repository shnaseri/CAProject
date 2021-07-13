----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    21:42:22 07/12/2021 
-- Design Name: 
-- Module Name:    Sorter - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

package types is
        type number_bus is array(0 to 63) of std_logic_vector(3 downto 0);
		  type number is array(0 to 15) of std_logic_vector(3 downto 0);
		  type cell is array(0 to 63) of number;
end package;

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
use work.types.all;

entity Mem is
	Port(
		input_index : in std_logic_vector(3 downto 0) := (others => '0');
		input_data : in number_bus;
		input_compelte_mem : std_logic;
		out_control, write_control : in std_logic_vector(1 downto 0);
		output : out number_bus;
		output_compelte_mem : std_logic
	);
end Mem;

architecture Behavioral of Mem is
shared variable input_cell : cell  := (others => (others => "1011"));
shared variable output_cell : cell  := (others => (others => "0000"));
shared variable temp : number_bus;
shared variable  input_wb_changed : std_logic_vector(63 downto 0);
begin
	process(input_index, input_data,out_control , write_control)
		begin
			if out_control(0) = '1' then
				if out_control(1) = '1' then
					for i in 0 to 63 loop
						temp(i) := input_cell(i)(to_integer(unsigned(input_index)));
					end loop;
				else
					for i in 0 to 63 loop
						temp(i) := output_cell(i)(to_integer(unsigned(input_index)));
					end loop;
				end if;
			end if;
			if write_control(0) = '1' then
				if write_control(1) = '1' then
					for i in 0  to 63 loop
						input_cell(i)(to_integer(unsigned(input_index))) := input_data(i);
					end loop;
				else
					for i in 0  to 63 loop
						output_cell(i)(to_integer(unsigned(input_index))) := input_data(i);
					end loop;
				end if;
			end if;
			output <= temp;
		end process;
end Behavioral;

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use work.types.all;

entity ALU is
	Port(
			input : in number_bus;
			input_wb_index : in std_logic_vector(3 downto 0);
			input_wb_changed : in std_logic_vector(63 downto 0);
			input_complete :  in std_logic_vector(63 downto 0);
			control : in std_logic;
			output_mem : out number_bus;
			output_wb_index : out std_logic_vector(3 downto 0);
			output_wb_changed : out std_logic_vector(63 downto 0);
			output_complete :  out std_logic_vector(63 downto 0);
	);
end ALU;

architecture Behavioral of ALU is
shared variable minimum : std_logic_vector(3 downto 0) := "1111";
shared variable output_temp : number_bus;
shared variable index : std_logic_vector(3 downto 0) := "0000";
begin
	process(input, control, input_wb_changed, input_wb_index)
		begin
			output_temp := input;
			if control = '1' then
				minimum  := "1111";
				for i in 0 to 63 loop
					if input(i) < minimum and input_wb_changed(i) = '1' and input_complete(i) = '0' then
						minimum := input(i);
					end if;
				end loop;
				for i in 0 to 63 loop
					if input_complete(i) = '1' then
						next;
					end if;
					if input_wb_changed(i) = '1'  then
						output_temp(i) := input(i) - minimum;
						end if;
					if output_temp(i) /= "0000" then
						input_wb_changed(i) := '0';
						end if;
				end loop;
			else
				for i in 0 to 63 loop
					if input_complete(i) = '1' then
						next;
					end if;
					output_temp(i) := output_temp(i) + minimum;
				end loop;
			end if;
			
			
			if index = "0000" then 
				for i in 0 to 63 loop 
					if input_wb_changed(i) = '1' then 
						output_complete(i) = '1';
					end if;
				end loop;
				index := "1111";
			else 
						index := input_wb_index - 1;
			end if;
		
			output_mem <= output_temp;
			output_wb_index <= index;
			output_wb_changed <= input_wb_changed;
		end process;
end Behavioral;

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
use work.types.all;

entity Controller is
	Port(
			clock : in std_logic := '1';
			output_ALU : out std_logic := '1';
			output_write : out std_logic_vector(1 downto 0) := "00";
			output_out : out std_logic := '1'
	);
end Controller;

architecture Behavioral of Controller is
begin
	process(clock)
		begin
			output_ALU <= clock;
			output_write <= clock;
			output_out <= clock;
		end process;
end Behavioral;

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
use work.types.all;

entity WB_Sub is
	Port(
			input : in std_logic_vector(3 downto 0);
			changed : in std_logic_vector(63 downto 0);
			output_index_mem : out std_logic_vector(3 downto 0);
			output_index_ALU : out std_logic_vector(3 downto 0);
			output_changed : out std_logic_vector(63 downto 0)
			
	);
end WB_Sub;

architecture Behavioral of WB_Sub is
shared variable changed_data : std_logic_vector(63 downto 0) := (others => '1');
shared variable index : std_logic_vector(3 downto 0) := "0000";
begin

end Behavioral;

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
use work.types.all;

entity clock is
	Port(
	
		clock : out std_logic := '1'
	);
end clock;

architecture Behavioral of Clock is
shared variable clock_value : std_logic := '1';
begin
	process
		begin
			wait for 0.99 us;
			clock_value := not clock_value;
			clock <= clock_value;
	end process;
end Behavioral;


library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
use work.types.all;

entity Sorter is

	Port(
		input_data : in number;
		output_data : out cell;
	);
end Sorter;

architecture Behavioral of Sorter is
signal output_signal, input_signal : number_bus;
signal WB_ALU_changed, ALU_WB_changed : std_logic_vector(63 downto 0) := (others => '1');
signal Mem_out_signal, ALU_Controller_signal, Mem_write_signal, clock_signal : std_logic;
signal index, WB_ALU, ALU_WB : std_logic_vector(3 downto 0) := "0000";
begin

	
	M1: entity work.Mem port map(
		input_index =>  index,
		input_data => input_signal,
		write_control => Mem_write_signal,
		out_control => Mem_out_signal,
		output => output_signal,
		
	);
	
	C1: entity work.Controller port map(
			output_ALU => ALU_Controller_signal,
			output_write => Mem_write_signal,
			output_out => Mem_out_signal,
			clock => clock_signal
	);
	
	A1: entity work.ALU port map(
			input => output_signal,
			control => ALU_Controller_signal,
			output_mem => input_signal,
			output_wb_index => ALU_WB,
			output_wb_changed => ALU_WB_changed,
			input_wb_index => WB_ALU,
			input_wb_changed => WB_ALU_changed
	);
	
	clock: entity work.clock port map(
			clock => clock_signal
	);
	
	W1: entity work.WB_Sub port map(
			input => ALU_WB,
			changed => ALU_WB_changed,
			output_index_mem => index,
			output_index_ALU => WB_ALU,
			output_changed => WB_ALU_changed
	);
end Behavioral;

