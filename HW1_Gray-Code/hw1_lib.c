/*
 * File: hw1_lib.c
 * gcc -c hw1_lib.c -o hw1_lib.o
 * gcc -S hw1_lib.c -o hw1_lib.s
 * objdump -D hw1_lib.o
 */
#include "hw1_lib.h"

uint16_t gray_to_binary(uint16_t gray)
{
    uint16_t mask;
    for (mask = gray >> 1; mask != 0; mask = mask >> 1)
    {
        gray = gray ^ mask;
    }

   return gray;
}
uint16_t binary_to_gray(uint16_t binary)
{
   return (binary >> 1) ^ binary;
}
