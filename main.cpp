/*  USNA SY202 ICE01 - Part C
    10 Feb 2023 - CDR Brien Croteau
    mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

/* 
Instructions:  Read through the pseudo-code prompt below and write code to implement its functions.
  Test and troubleshoot your code, consider malicious users who will try to enter invalid inputs.
  Add comments to your code, and show your instructor it working on your mbed (or take a video if completing outside of class)
*/

/* 
Pseudo-Code for Part C
1. Include the required header files for the mbed board
2. Declare the required objects to:
     a. communicate with the computer over a serial port
     b. turn on and off all four LEDs on the bottom of the board
3. Declare required variables
4. Within the main function, print a message that tells the users instructions 
5. Create a loop that will constantly repeat without end
6. Read in a string from the serial port and save it as an integer variable
7. Verify that the entered number is between [1-50]
8. If the number is evenly divisible by 4, then blink LED #4 that many times, i.e. if the user enters 20, LED4 should blink 5 times
9. Else if, the number is evenly divisible by 3, then blink LED #3 the other factor times,  i.e. if the user enters 9, LED3 should blink 3 times
10. Else if, the number is evenly divisible by 2, then blink LED #2 the other factor times,  i.e. if the user enters 14, LED2 should blink 7 times
11. Else, then the number is not divisible by 2, 3, or 4, then blink LED #1 the entered number times,  i.e. if the user enters 13, LED1 should blink 13 times
12. Loop back up and ask the user for a new number
*/


// Make sure you have also added comments to your code, then cut and paste your entire main.cpp file into the lab submission.