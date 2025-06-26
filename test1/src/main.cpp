#include "mbed.h"
BufferedSerial pc(USBTX, USBRX, 115200);
DigitalIn button0(PA_0, PullUp);
 
int main(){
    printf("HelloWorld.")
    return 0;
}