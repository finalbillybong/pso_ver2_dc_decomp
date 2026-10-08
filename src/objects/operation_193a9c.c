/* Provisional address-based name; preserve chunk addressing, allocation lifetimes, state transitions and cleanup order. */
#include "src/include/resource_chunks.h"
#define close_at ((void (*)(void *))0x8c34d4e8)
static inline int has_flag(ResourceChunks *o){
    return (o->flags&4)!=0;
}
static inline void reset(ResourceChunks *o){
    if(o->handle){
        close_at(o->handle);
        o->handle=0;
        o->field_c=0;
    }
}
#define ready_at ((int (*)(void))0x8c03ed64)
#define buffer_at ((void *(*)(void *))0x8c03ed10)
#define copy_at ((unsigned int (*)(void *,void *))0x8c0787cc)
extern void *chunk_at(void *,unsigned int *,unsigned int *,void *,unsigned int *);
#define finish_at ((void (*)(void *))0x8c03ed70)
void operation_193a9c(ResourceChunks *o){
    if(ready_at()==1){
        void *buffer=buffer_at(*(void **)0x8c31a328);
        char *output=o->output;
        unsigned int length,offset,kind,size;
        int mask;
        int count;
        length=(*(void **)0x8c4dc2f4&&buffer)?copy_at(*(void **)0x8c4dc2f4,buffer):0;
        count=0;
        offset=0;
        mask=~31;
        while(offset<length){
            void *chunk=chunk_at(buffer,&offset,&kind,output,&size);
            output+=(size+32)&mask;
            switch(kind){
                case 0x4e4a434d:if(count<4){
                    *(void **)((char *)o->models+(count<<2))=chunk;
                    count++;
                }
                break;
                case 0x4e4a544c:if(!o->textures){
                    int i;
                    ResourceTextureList *list;
                    o->textures=chunk;
                    for(i=0;
                    list=o->textures,i!=list->count;
                    i++)list->entries[i].data=(void *)0x8c4dc2fc;
                }
                break;
                case 0x4e4d444d:o->motion=chunk;
                break;
            }
        }
        finish_at(*(void **)0x8c31a328);
        o->output=0;
        reset(o);
        o->flags|=2;
        if(has_flag(o)!=0){
            *(int *)0x8c4dc2f8=0;
            o->flags&=~4;
        }
        o->state=0;
    }
}
