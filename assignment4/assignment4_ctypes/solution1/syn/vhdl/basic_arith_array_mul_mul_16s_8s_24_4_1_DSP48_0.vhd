
library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity basic_arith_array_mul_mul_16s_8s_24_4_1_DSP48_0 is
port (
    clk: in std_logic;
    rst: in std_logic;
    ce: in std_logic;
    a: in std_logic_vector(16 - 1 downto 0);
    b: in std_logic_vector(8 - 1 downto 0);
    p: out std_logic_vector(24 - 1 downto 0));

end entity;

architecture behav of basic_arith_array_mul_mul_16s_8s_24_4_1_DSP48_0 is
    signal a_cvt: signed(16 - 1 downto 0);
    signal b_cvt: signed(8 - 1 downto 0);
    signal p_cvt: signed(24 - 1 downto 0);

    signal p_reg: signed(24 - 1 downto 0);

    signal a_reg: signed(16 - 1 downto 0) ; 
    signal b_reg: signed(8 - 1 downto 0) ; 
    signal p_reg_tmp: signed(24 - 1 downto 0);
begin

    a_cvt <= signed(a);
    b_cvt <= signed(b);

    process(clk)
    begin
        if (clk'event and clk = '1') then
            if (ce = '1') then
                a_reg <= a_cvt;
                b_reg <= b_cvt;
                p_reg_tmp <= p_cvt;
                p_reg <= p_reg_tmp;
            end if;
        end if;
    end process;

    p_cvt <= signed (resize(unsigned (a_reg * b_reg), 24));
    p <= std_logic_vector(p_reg);

end architecture;
