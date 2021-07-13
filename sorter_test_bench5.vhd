--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   21:14:16 07/13/2021
-- Design Name:   
-- Module Name:   D:/UNI/term_4/CA/CAProject - Copy/sorter_test_bench5.vhd
-- Project Name:  CAProject_Naserizade_Mostafavi_Ikani
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Sorter
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
library IEEE;

use IEEE.STD_LOGIC_1164.ALL;

use ieee.std_logic_unsigned.all;

use ieee.std_logic_arith.all;

use work.types.all;

ENTITY sorter_test_bench5 IS
END sorter_test_bench5;
 
ARCHITECTURE behavior OF sorter_test_bench5 IS 
 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Sorter
    PORT(
         input_data : IN  number;
         output_data : OUT  cell
        );
    END COMPONENT;
    

   --Inputs
   signal input_data : number ;

 	--Outputs
   signal output_data : cell;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Sorter PORT MAP (
          input_data => input_data,
          output_data => output_data
        );

   -- Clock process definitions

 

   -- Stimulus process
   stim_proc: process
			variable temp : number := (others => "0000");
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	
			for i in 0 to 63 loop
				temp(i) := "0001";
				input_data <= temp;
				wait for 100 ns;	
			end loop;
		
      wait;
   end process;

END;
