------------------------------------------------------------
-- Desplazador sobre entradas de 4 bit
-- Banco de pruebas

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

-- Entity 
entity bp_desplazador is  
end entity bp_desplazador;


-- Architecture
architecture bp_desplazador of bp_desplazador is

   -- Señales para conectar el UUT          
   signal salida   :  std_logic_vector(3 downto 0);
   signal op       :  std_logic_vector(1 downto 0);
   signal entrada  :  std_logic_vector(3 downto 0);                
   
   -- Componente que se va a probar
   component desplazador is port( 
      salida   : out std_logic_vector(3 downto 0);
      op       : in std_logic_vector(1 downto 0);
      entrada  : in std_logic_vector(3 downto 0));
   end component desplazador;

-- Unidad de pruebas 
begin  
   --Instanciar y conectar UUT
   uut : component desplazador port map
         (salida, op, entrada);   

   -- Crear vector de test y comprobar salidas del UUT
   vec_test : process is
           
   begin
     -- Se generan los posibles valores de entrada 
     for en in 0 to 2**4-1 loop
       for p in 0 to 2**2-1 loop

           -- Se asignan valores de entrada a la UUT
           entrada <= std_logic_vector(to_unsigned(en,4));
           op      <= std_logic_vector(to_unsigned(p,2));
              
           wait for 1 ns;
    
        end loop;
      end loop;  
      wait;    
   end process vec_test;
end architecture bp_desplazador;
-------------------------------------------------------------