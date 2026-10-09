typedef struct Context { char unknown0[12]; void *item; } Context;
typedef struct Control { void *name; char unknown4[20]; void *vtable; unsigned short unknown28,size; int state; char unknown36[16]; int first,second,limit,last; } Control;
typedef char check_layout[sizeof(Context)==16 && sizeof(Control)==68 && (unsigned long)&((Context *)0)->item==12 && (unsigned long)&((Control *)0)->vtable==24 && (unsigned long)&((Control *)0)->size==30 && (unsigned long)&((Control *)0)->state==32 && (unsigned long)&((Control *)0)->first==52 && (unsigned long)&((Control *)0)->second==56 && (unsigned long)&((Control *)0)->limit==60 && (unsigned long)&((Control *)0)->last==64 ? 1:-1];
extern char control_vtable[];
extern void *object_name,*heap;
extern unsigned char control_flag;
extern int active;
extern Context *context;
extern void base_at(Control *,void *),base_destroy_at(Control *,int),release_at(void *,void *),reset_at(Control *),prepare_at(Control *);
Control *initialize_context_control(Control *o,void *parent) {
    Control **home=&o;
    base_at(o,parent);
    o->vtable=control_vtable;
    o->name=object_name;
    o->size=68;
    o->state=0;
    o->first=0;
    o->second=0;
    control_flag=0;
    o->limit=50;
    o->last=0;
    reset_at(o);
    if(active && context && context->item) prepare_at(o);
    return o;
}
