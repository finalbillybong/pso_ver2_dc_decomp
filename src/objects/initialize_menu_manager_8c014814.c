typedef struct Manager {
    char unknown0[0x18];
    void *dispatch;
} Manager;
extern Manager *menu_manager;
extern void TObject_ctor_8c0330e4(Manager *);
extern void load_manager_8c0148ac(Manager *);
extern void reset_manager_8c014874(Manager *);
extern void bind_manager_8c014894(Manager *);
extern void start_manager_8c0148cc(Manager *);
Manager *initialize_menu_manager_8c014814(Manager *o)
{
    Manager **home = &o;
    (void)home;
    {
        Manager *base = o;
        TObject_ctor_8c0330e4(base);
        base->dispatch = (void *)0x8c261240;
    }
    o->dispatch = (void *)0x8c2611ec;
    load_manager_8c0148ac(o);
    reset_manager_8c014874(o);
    bind_manager_8c014894(o);
    start_manager_8c0148cc(o);
    menu_manager = o;
    return o;
}
