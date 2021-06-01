#include “inc/tm4c123gh6pm.h”

void PortF_Init(void){
volatile unsigned long delay;
SYSCTL_RCGCGPIO_R |= 0x20;
While((SYSCTL_PRGPIO_R&0x20)  ==  0){};

GPIO_PORTF_LOCK_ R =  0x4C4F434B;
GPIO_PORTF_CR_R |= 0x1F;
GPIO_PORTF_DIR_R |= 0x0E;
GPIO_PORTF_DEN_R |=  0x1F;
GPIO_PORTF_AMSEL_R = 0x00;
GPIO_PORTF_AFSEL_R &= ~ 0x1F;
GPIO_PORTF_PCTL_R &= ~ 0x0000 FFF0;
GPIO_PORTF_DATA_R &= ~ 0x0E;
GPIO_PORTF_PUR_R|=0x11;
}
