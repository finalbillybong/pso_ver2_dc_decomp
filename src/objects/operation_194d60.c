/* Provisional names; preserve allocation, counter and release behavior. */
#include "src/include/widget_counter_buffers.h"
#define mode_at ((int (*)(void))0x8c032b10)
unsigned int operation_194d60(unsigned short index){
    unsigned int value;
    if(mode_at()==15){
        value=(*(unsigned int *)((char *)first_buffer+(index<<2)));
        (*(unsigned int *)((char *)first_buffer+(index<<2)))++;
    }
    else{
        value=(*(unsigned int *)((char *)second_buffer+(index<<2)));
        (*(unsigned int *)((char *)second_buffer+(index<<2)))++;
    }
    return value;
}
