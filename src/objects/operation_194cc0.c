/* Provisional names; preserve allocation, counter and release behavior. */
#include "src/include/widget_counter_buffers.h"
#define operator_delete_8c18de08 ((void (*)(void *))0x8c18de08)
#define release_at ((void (*)(void *))0x8c011ed8)
void *operation_194cc0(void *o,short release){
    if(o){
        operator_delete_8c18de08(second_buffer);
        second_buffer=0;
        operator_delete_8c18de08(first_buffer);
        first_buffer=0;
        if(release>0)release_at(o);
    }
    return o;
}
