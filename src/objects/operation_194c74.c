/* Provisional names; preserve allocation, counter and release behavior. */
#include "src/include/widget_counter_buffers.h"
#define allocate_at ((void *(*)(unsigned int))0x8c18de4c)
#define initialize_at ((void (*)(void))0x8c194d14)
void *operation_194c74(void *o){
    first_buffer=allocate_at(48);
    second_buffer=allocate_at(48);
    initialize_at();
    first_state=0;
    second_state=0;
    return o;
}
