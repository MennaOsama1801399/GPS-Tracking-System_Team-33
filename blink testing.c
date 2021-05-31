#define SYSCTL_RCGCGPIO_R (*(( volatile unsigned long *)0x400FE608)) 
#define GPIO_PORTF_DATA_R (*(( volatile unsigned long *)0x40025038)) 
#define GPIO_PORTF_DIR_R (*(( volatile unsigned long *)0x40025400)) 
#define GPIO_PORTF_DEN_R (*(( volatile unsigned long *)0x4002551C))

int main( void ){
    SYSCTL_RCGCGPIO_R |= 0x20;
    GPIO_PORTF_DEN_R = 0x0E;
    GPIO_PORTF_DIR_R = 0x0E;

    while(1){
        GPIO_PORTF_DATA_R = 0x04;
    }
}