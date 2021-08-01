# Street_light_control_using_stm32_project
c code to program stm32 to function as a street light control based on detection of vehicles
Connect the input pins specified in the code to ir receiver diode(ir detection can be made better by use of opamps like ic324). 
Connect the outputs to an LED (directly if the power is sufficient, else use a transistor like bc547 to control it).
The code was written in KEIL ide and programmed on a STM32F103C8C6 board (also called bluepill).

