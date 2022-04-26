-----------------------------------------------------------------
-- Circuito desplazador sobre entradas de 4 bit
-- Entity y Architecture


library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

-- Entity
entity desplazador is port( 
   salida   : out std_logic_vector(3 downto 0);
   op       : in std_logic_vector(1 downto 0);
   entrada  : in std_logic_vector(3 downto 0));
end entity desplazador;

-- Architecture
architecture comp_desplazador of desplazador is

begin   
  process(op) is
   begin
      if(op = "00") then    -- Desplaza 1 bit a la izquierda rellenando con ?0?         
         salida <= std_logic_vector(shift_left(unsigned(entrada), 1));        
      elsif(op = "01") then -- Desplaza 1 bit a la derecha rellenando con ?1?
         salida <= '1' & entrada(3 downto 1);
      elsif(op = "10") then -- Rota 1 bit a la izquierda
         salida <= entrada(2 downto 0) & entrada(3);
      elsif(op = "11") then -- Rota 1 bit a la derecha
         salida <= entrada(0) & entrada(3 downto 1);
      end if;         
  end process;
end architecture comp_desplazador;