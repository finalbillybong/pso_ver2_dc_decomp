typedef struct Child { char unknown0[0x18]; void *dispatch; char unknown1c[4]; short id; char unknown22[2]; void *callback; } Child;
typedef struct Parent { char unknown0[0x20]; short id; } Parent;
extern void *heap_alloc_8c122700(void *, int);
extern void *TObject_ctor_8c0330e4(void *, void *);
void create_child_8c02c6c0(Parent *o)
{
    Child *child = heap_alloc_8c122700(*(void **)0x8c4d97e0, 0x28);
    if (child) {
        short id = o->id;
        TObject_ctor_8c0330e4(child, o);
        child->dispatch = (void *)0x8c261928;
        child->id = id;
        child->callback = (void *)0x8c02c714;
    }
}
