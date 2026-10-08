/* Provisional address-based name; preserve owner state transitions, repeated loads and signed cleanup conditions. */
#include "src/include/resource_task_owner.h"
#define base_at ((void (*)(ResourceTaskOwner *,void *))0x8c0330e4)
ResourceTaskOwner *operation_193d9c(ResourceTaskOwner *o,void *parent,int index,int argument1,int argument2){
    int i;
    base_at(o,parent);
    o->dispatch=(void *)0x8c2727c8;
    o->index=index;
    o->state=0;
    o->argument1=argument1;
    o->argument2=argument2;
    for(i=0;
    i!=4;
    i++)*(void **)((char *)o->models+(i<<2))=0;
    o->textures=0;
    o->motion=0;
    o->state=1;
    return o;
}
