typedef struct Manager {
    char unknown0[0x18];
    void *dispatch;
} Manager;
extern void initialize_hierarchy_node(Manager *);
extern int manager_ready;
extern Manager *manager_instance;
extern void start_manager_8c3c3fbc(int);
extern void load_manager_8c014b20(Manager *);
extern void reset_manager_8c014b00(Manager *);
extern void bind_manager_8c014b40(Manager *);
Manager *initialize_manager_8c014a7c(Manager *o)
{
    Manager **home = &o;
    int i;
    (void)home;
    {
        Manager *base = o;
        initialize_hierarchy_node(base);
        base->dispatch = (void *)0x8c261240;
    }
    o->dispatch = (void *)0x8c2611b4;
    manager_ready = 1;
    manager_instance = o;
    start_manager_8c3c3fbc(1);
    load_manager_8c014b20(o);
    reset_manager_8c014b00(o);
    bind_manager_8c014b40(o);
    for (i = 0; i < 3; i++) {
        *(int *)((char *)0x8c4182e4 + (i << 2)) = 0;
    }
    return o;
}
