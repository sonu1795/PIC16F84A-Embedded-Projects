# Up/Down Counter using PIC16F84A

## Objective

To design and simulate an Up/Down Counter using the PIC16F84A microcontroller and a seven-segment display.

## Description

This project demonstrates the implementation of an Up/Down Counter using the PIC16F84A microcontroller. The counter displays numbers on a seven-segment display and can count in both ascending and descending order.

The counter operates in two modes:

* Up Counter: Counts from 0 to 9.
* Down Counter: Counts from 9 to 0.

A control input is used to select the counting direction.

## Hardware Used

* PIC16F84A Microcontroller
* Seven Segment Display
* Push Button / Switch

## Software Used

* MPLAB X IDE
* XC8 Compiler
* Proteus 8.17

## Files Included

* `up_down_counter.c`
* `up_down_counter.hex`
* `up_down_counter.pdsprj`
* `Screenshots/`

## Working Principle

The microcontroller continuously checks the control input.

* Logic HIGH selects Up Counting mode.
* Logic LOW selects Down Counting mode.

According to the selected mode, the corresponding digit patterns are sent to the seven-segment display.

## Simulation Results

### Up Counter

#### Count = 0

![Up Counter 0](Screenshots/up_0.png)

#### Count = 3

![Up Counter 3](Screenshots/up_3.png)

#### Count = 6

![Up Counter 6](Screenshots/up_6.png)

#### Count = 9

![Up Counter 9](Screenshots/up_9.png)

### Down Counter

#### Count = 9

![Down Counter 9](Screenshots/down_9.png)

#### Count = 6

![Down Counter 6](Screenshots/down_6.png)

#### Count = 3

![Down Counter 3](Screenshots/down_3.png)

#### Count = 0

![Down Counter 0](Screenshots/down_0.png)

## Learning Outcomes

* Interfacing seven-segment displays with PIC microcontrollers
* Implementing Up and Down counting logic
* Understanding digital inputs and outputs
* Embedded C programming using PIC16F84A
* Proteus simulation and verification

## Applications

* Digital Counters
* Event Counters
* Industrial Monitoring Systems
* Embedded Control Systems

## Author

**Subodh Lakra**

M.Tech
VLSI Design and Embedded Systems
