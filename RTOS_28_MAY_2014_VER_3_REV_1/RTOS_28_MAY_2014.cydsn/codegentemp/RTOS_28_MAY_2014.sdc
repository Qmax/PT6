# THIS FILE IS AUTOMATICALLY GENERATED
# Project: d:\RTOS_28_MAY_2014_VER_3_REV_1\RTOS_28_MAY_2014.cydsn\RTOS_28_MAY_2014.cyprj
# Date: Thu, 26 Jun 2014 05:37:37 GMT
#set_units -time ns
create_clock -name {Clock(routed)} -period 4000000 -waveform {0 2000000} [list [get_pins {ClockBlock/dclk_5}]]
create_clock -name {CyIMO} -period 333.33333333333331 -waveform {0 166.666666666667} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyPLL_OUT} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/pllout}]]
create_clock -name {CyILO} -period 1000000 -waveform {0 500000} [list [get_pins {ClockBlock/ilo}] [get_pins {ClockBlock/clk_100k}] [get_pins {ClockBlock/clk_1k}] [get_pins {ClockBlock/clk_32k}]]
create_clock -name {CyMASTER_CLK} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/clk_sync}]]
create_generated_clock -name {U_CLOCK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 2 3} [list [get_pins {ClockBlock/dclk_glb_0}]]
create_generated_clock -name {SPIM_IntClock} -source [get_pins {ClockBlock/clk_sync}] -edges {1 13 25} [list [get_pins {ClockBlock/dclk_glb_1}]]
create_generated_clock -name {SPIS_IntClock} -source [get_pins {ClockBlock/clk_sync}] -edges {1 101 203} -nominal_period 4208.333333333333 [list [get_pins {ClockBlock/dclk_glb_2}]]
create_generated_clock -name {Clock_QD} -source [get_pins {ClockBlock/clk_sync}] -edges {1 2401 4801} [list [get_pins {ClockBlock/dclk_glb_3}]]
create_generated_clock -name {Clk_PWM} -source [get_pins {ClockBlock/clk_sync}] -edges {1 12001 24001} [list [get_pins {ClockBlock/dclk_glb_4}]]
create_generated_clock -name {Clock} -source [get_pins {ClockBlock/clk_sync}] -edges {1 96001 192001} [list [get_pins {ClockBlock/dclk_glb_5}]]
create_generated_clock -name {CyBUS_CLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 2 3} [list [get_pins {ClockBlock/clk_bus_glb}]]


# Component constraints for d:\RTOS_28_MAY_2014_VER_3_REV_1\RTOS_28_MAY_2014.cydsn\TopDesign\TopDesign.cysch
# Project: d:\RTOS_28_MAY_2014_VER_3_REV_1\RTOS_28_MAY_2014.cydsn\RTOS_28_MAY_2014.cyprj
# Date: Thu, 26 Jun 2014 05:35:34 GMT
