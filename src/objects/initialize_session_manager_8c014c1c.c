typedef struct Manager {
    char unknown0[0x18];
    void *dispatch;
} Manager;
extern void initialize_hierarchy_node(Manager *);
extern int session_ready;
extern Manager *session_instance;
extern void start_manager_8c399810(int);
extern void load_manager_8c014cc0(Manager *);
extern void reset_manager_8c014ca0(Manager *);
extern void bind_manager_8c014ce0(Manager *);
Manager *initialize_session_manager_8c014c1c(Manager *o)
{
    Manager **home = &o;
    int i;
    (void)home;
    {
        Manager *base = o;
        initialize_hierarchy_node(base);
        base->dispatch = (void *)0x8c261240;
    }
    o->dispatch = (void *)0x8c261198;
    session_ready = 1;
    session_instance = o;
    start_manager_8c399810(1);
    load_manager_8c014cc0(o);
    reset_manager_8c014ca0(o);
    bind_manager_8c014ce0(o);
    for (i = 0; i < 3; i++) {
        *(int *)((char *)0x8c4182f0 + (i << 2)) = 0;
    }
    return o;
}
