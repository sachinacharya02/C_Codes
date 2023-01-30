#define RW_FLAG 0x1FFF7800

volatile uint32_t *flagAddress = NULL;
uint32_t readData = 0;
flagAddress = (volatile uint32_t *)RW_FLAG;
readData = *flagAddress ; 
