typedef struct Object { void *resource; char unknown4[20]; void *dispatch; char unknown28[2]; unsigned short size; char unknown32[448]; unsigned char kind,mode; char unknown482[82]; float first,second,third; } Object;
typedef char check_layout[sizeof(Object)==576 && (unsigned long)&((Object *)0)->resource==0 && (unsigned long)&((Object *)0)->dispatch==24 && (unsigned long)&((Object *)0)->size==30 && (unsigned long)&((Object *)0)->kind==480 && (unsigned long)&((Object *)0)->mode==481 && (unsigned long)&((Object *)0)->first==564 && (unsigned long)&((Object *)0)->second==568 && (unsigned long)&((Object *)0)->third==572 ? 1:-1];
extern void *resource;
extern char dispatch[];
extern Object *base(Object *,void *,void *);
Object *initialize_scaled_resource_actor_8c240cf4(Object *o,void *parent,void *context) {
    base(o,parent,context);
    o->dispatch=dispatch;o->resource=resource;o->size=576;
    o->kind=3;o->mode=1;
    o->third=1.0f;o->second=1.0f;o->first=1.0f;
    return o;
}
