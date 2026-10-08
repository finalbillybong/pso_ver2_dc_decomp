/* Provisional address-based name; preserve chunk addressing, allocation lifetimes, state transitions and cleanup order. */
#include "src/include/resource_chunks.h"
extern ResourceChunks *first,*second;
extern void *buffer;
#define free_buffer_at ((void (*)(void *))0x8c18de08)
void operation_193cc8(void){
    ResourceChunks *o;
    free_buffer_at(buffer);
    o=second;
    if(o)((void (*)(ResourceChunks *,short))((void **)o->dispatch)[2])(o,1);
    o=first;
    if(o)((void (*)(ResourceChunks *,short))((void **)o->dispatch)[2])(o,1);
    first=0;
    second=0;
    buffer=0;
}
