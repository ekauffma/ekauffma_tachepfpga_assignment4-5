-- ==============================================================
-- Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2021.1 (64-bit)
-- Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity arr_mult_2d_mac_muladd_10s_10s_10ns_10_4_1_DSP48_1 is
port (
    clk: in  std_logic;
    rst: in  std_logic;
    ce:  in  std_logic;
    in0:  in  std_logic_vector(10 - 1 downto 0);
    in1:  in  std_logic_vector(10 - 1 downto 0);
    in2:  in  std_logic_vector(10 - 1 downto 0);
    dout: out std_logic_vector(10 - 1 downto 0));

    attribute use_dsp : string;
    attribute use_dsp of arr_mult_2d_mac_muladd_10s_10s_10ns_10_4_1_DSP48_1 : entity is "yes";

end entity;

architecture behav of arr_mult_2d_mac_muladd_10s_10s_10ns_10_4_1_DSP48_1 is
    signal a       : signed(25-1 downto 0);
    signal b       : signed(18-1 downto 0);
    signal c       : signed(48-1 downto 0);
    signal m       : signed(43-1 downto 0);
    signal p       : signed(48-1 downto 0);
    signal m_reg   : signed(43-1 downto 0);
    signal a_reg   : signed(25-1 downto 0);
    signal b_reg   : signed(18-1 downto 0);
    signal p_reg   : signed(48-1 downto 0);
begin
a  <= signed(resize(signed(in0), 25));
b  <= signed(resize(signed(in1), 18));
c  <= signed(resize(unsigned(in2), 48));

m  <= a_reg * b_reg;
p  <= m_reg + c;

process (clk) begin
    if (clk'event and clk = '1') then
        if (ce = '1') then
            m_reg  <= m;
            a_reg  <= a;
            b_reg  <= b;
            p_reg  <= p;
        end if;
    end if;
end process;

dout <= std_logic_vector(resize(unsigned(p_reg), 10));

end architecture;
