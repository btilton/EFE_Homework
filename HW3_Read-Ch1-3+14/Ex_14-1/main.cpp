/*
//Program Example 14.1: Sets up a digital output pin using control registers, and flashes an LED
*/

//Prototype
void delay(void);

//Define addresses of digital i/o control registers, as pointers to volitile data
#define FIO2DIR0 (*(volatile unsigned char *)(0x2009C040))
#define FIO2PIN0 (*(volatile unsigned char *)(0x2009C054))

int main()
{
    FIO2DIR0=0xFF;
    while(1)
    {
        FIO2PIN0 |= 0x01;
        delay();
        FIO2PIN0 &= ~0x01;
        delay();
    }
}

void delay()
{
    int j;
    for(j=0;j<1000000;j++)
    {
        j++;
        j--;
    }
}