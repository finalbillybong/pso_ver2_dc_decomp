/* Provisional address-based name; preserve chunk addressing, allocation lifetimes, state transitions and cleanup order. */
#include "src/include/resource_chunks.h"
extern ResourceChunks *first,*second;
extern void *buffer;
#define allocate_at ((ResourceChunks *(*)(unsigned int))0x8c011ecc)
#define base_at ((ResourceChunks *(*)(ResourceChunks *,int,int,unsigned int))0x8c19336c)
extern void *buffer_allocate_at(unsigned int);
void operation_193bf8(void){
    ResourceChunks *o=allocate_at(40);
    if(o){
        base_at(o,*(int *)0x8c31a320,0xb5,0xeb);
        o->dispatch=(void *)0x8c272804;
        o->flags=0;
        o->state=0;
        o->flags=0;
        o->dispatch=(void *)0x8c2727f4;
        o->output=0;
    }
    first=o;
    {
        ResourceChunks *other=allocate_at(64);
        if(other){
            int i;
            base_at(other,*(int *)0x8c31a324,0xb4,0xe4);
            other->dispatch=(void *)0x8c272804;
            other->flags=0;
            other->state=0;
            other->flags=0;
            other->dispatch=(void *)0x8c2727e4;
            other->output=0;
            for(i=0;
            i!=4;
            i++)*(void **)((char *)other->models+(i<<2))=0;
            other->textures=0;
            other->motion=0;
        }
        second=other;
    }
    buffer=buffer_allocate_at(0x15000);
}
