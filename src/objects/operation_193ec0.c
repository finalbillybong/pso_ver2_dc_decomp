/* Provisional address-based name; preserve owner state transitions, repeated loads and signed cleanup conditions. */
#include "src/include/resource_task_owner.h"
static inline int done(ResourceTaskState *r){
    return (r->flags&2)!=0;
}
static inline int start(ResourceTaskState *r,int arg){
    if(r->state==0){
        r->argument=arg;
        r->flags&=~2;
        r->state=1;
        return 1;
    }
    return 0;
}
void operation_193ec0(ResourceTaskOwner *o){
    switch(o->state){
        case 1:
        if(*(ResourceTaskState **)0x8c4dc31c&&*(ResourceTaskState **)0x8c4dc318){
            {
                ResourceTaskState *r=*(ResourceTaskState **)0x8c4dc31c;
                ResourceTaskState *model_owner=r;
                int arg=o->argument1;
                void *output=*(char **)0x8c4dc320+o->index*0x1c00;
                if(output){
                    if(start(r,arg)==1){
                        int i;
                        r->output=output;
                        r->textures=0;
                        for(i=0;
                        i!=4;
                        i++)*(void **)((char *)model_owner->models+(i<<2))=0;
                        r->motion=0;
                    }
                }
            }
            o->state=2;
        }
        break;
        case 2:
        if(done(*(ResourceTaskState **)0x8c4dc31c)==1){
            int i;
            for(i=0;
            i!=4;
            i++){
                void *model=*(void **)((char *)(*(ResourceTaskState **)0x8c4dc31c)->models+(i<<2));
                *(void **)((char *)o->models+(i<<2))=model;
            }
            o->textures=(*(ResourceTaskState **)0x8c4dc31c)->textures;
            o->motion=(*(ResourceTaskState **)0x8c4dc31c)->motion;
            if(o->textures){
                o->state=3;
                {
                    void *output=o->textures;
                    int arg=o->argument2;
                    ResourceTaskState *r=*(ResourceTaskState **)0x8c4dc318;
                    if(output){
                        if(start(r,arg)==1)r->output=output;
                    }
                }
            }
            else o->state=0;
        }
        break;
        case 3:
        if(done(*(ResourceTaskState **)0x8c4dc318)==1)o->state=0;
        break;
    }
}
