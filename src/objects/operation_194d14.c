/* Provisional names; preserve allocation, counter and release behavior. */
#include "src/include/widget_counter_buffers.h"
void operation_194d14(void){
    int i;
    register unsigned int low=0x10000,high=0x10010000;
    for(i=0;
    i<12;
    i++){
        unsigned int value=i<<21;
        (*(unsigned int *)((char *)second_buffer+(i<<2)))=value+low;
        (*(unsigned int *)((char *)first_buffer+(i<<2)))=value+high;
    }
}
