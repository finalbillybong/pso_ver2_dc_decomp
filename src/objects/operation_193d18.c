/* Provisional address-based name; preserve chunk addressing, allocation lifetimes, state transitions and cleanup order. */
#include "src/include/resource_chunks.h"
#define start_at ((void (*)(ResourceChunks *))0x8c1937f8)
#define poll_at ((void (*)(ResourceChunks *))0x8c193888)
static inline void update(ResourceChunks *o){
    if(o){
        switch(o->state){
            case 1:
            start_at(o);
            break;
            case 2:
            poll_at(o);
            break;
            case 4:
            ((void (*)(ResourceChunks *))((void **)o->dispatch)[3])(o);
            break;
        }
    }
}
void operation_193d18(void){
    update(*(ResourceChunks **)0x8c4dc318);
    update(*(ResourceChunks **)0x8c4dc31c);
}
