typedef struct Child { char unknown0[0x18]; void *dispatch; char unknown1c[4]; short id; char unknown22[2]; void *callback; } Child;
typedef struct Parent { char unknown0[0x20]; short id; } Parent;
extern void *allocate_block(void *, int);
extern void *initialize_hierarchy_node(void *, void *);
void create_child_8c02c6c0(Parent *o)
{
    Child *child = allocate_block(*(void **)0x8c4d97e0, 0x28);
    if (child) {
        short id = o->id;
        initialize_hierarchy_node(child, o);
        child->dispatch = (void *)0x8c261928;
        child->id = id;
        child->callback = (void *)0x8c02c714;
    }
}
