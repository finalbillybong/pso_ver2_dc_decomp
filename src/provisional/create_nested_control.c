typedef struct Control { void *name; char unknown4[20]; void *vtable; unsigned short unknown28,size; int first,second; } Control;
typedef char check_layout[sizeof(Control)==40 && (unsigned long)&((Control *)0)->vtable==24 && (unsigned long)&((Control *)0)->size==30 && (unsigned long)&((Control *)0)->first==32 && (unsigned long)&((Control *)0)->second==36 ? 1:-1];
extern void *heap,*object_name,*context,*selected;
extern char control_vtable[];
extern void *allocate_at(void *,unsigned int),*select_at(Control *);
extern void base_at(Control *,void *),child_at(void *,Control *),finish_at(Control *);
static inline void initialize(Control *o,void *parent) {
    Control *initial=o;
    Control **home=&o;
    void *child;
    base_at(initial,parent);
    o->vtable=control_vtable;
    o->name=object_name;
    o->size=40;
    selected=select_at(o);
    child=allocate_at(heap,324);
    if(child) child_at(child,o);
    o->first=0x1555;
    o->second=0x9000;
    finish_at(o);
}
Control *create_nested_control(void *parent,void *parameter) {
    Control *o;
    context=parameter;
    o=allocate_at(heap,40);
    if(o) initialize(o,parent);
    return o;
}
