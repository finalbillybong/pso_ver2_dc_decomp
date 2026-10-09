typedef struct Resource { char unknown0[12]; void *data; } Resource;
typedef struct Context { char unknown0[1068]; Resource *resource; } Context;
typedef char check_layout[sizeof(Resource)==16 && sizeof(Context)==1072 && (unsigned long)&((Resource *)0)->data==12 && (unsigned long)&((Context *)0)->resource==1068 ? 1:-1];
extern void *heap,*parent;
extern Context *context;
extern void *allocate(void *,unsigned int);
extern void construct(void *,void *,void *,void *,float,int,int);
void create_resource_effect_8c108238(void *position,int parameter) {
    void *object=allocate(heap,204);
    if(object) construct(object,parent,position,context->resource->data,2.5f,1,parameter);
}
