typedef struct Manager {
    char unknown0[0x18];
    void *dispatch;
} Manager;
extern Manager *field_manager;
extern void TObject_ctor_8c0330e4(Manager *);
extern void load_manager_8c0149a8(Manager *);
extern void reset_manager_8c0149c8(Manager *);
extern void bind_manager_8c0149e0(Manager *);
extern void start_manager_8c014a00(Manager *);
Manager *initialize_field_manager_8c014948(Manager *o)
{
    Manager **home = &o;
    (void)home;
    {
        Manager *base = o;
        TObject_ctor_8c0330e4(base);
        base->dispatch = (void *)0x8c261240;
    }
    o->dispatch = (void *)0x8c2611d0;
    load_manager_8c0149a8(o);
    reset_manager_8c0149c8(o);
    bind_manager_8c0149e0(o);
    start_manager_8c014a00(o);
    field_manager = o;
    return o;
}
