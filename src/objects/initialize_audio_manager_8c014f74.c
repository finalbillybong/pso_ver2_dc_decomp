typedef struct Manager {
    char unknown0[0x18];
    void *dispatch;
} Manager;
extern Manager *audio_manager;
extern void initialize_hierarchy_node(Manager *);
extern void load_manager_8c014fcc(Manager *);
extern void reset_manager_8c014fe4(Manager *);
extern void bind_manager_8c015004(Manager *);
Manager *initialize_audio_manager_8c014f74(Manager *o)
{
    Manager **home = &o;
    (void)home;
    {
        Manager *base = o;
        initialize_hierarchy_node(base);
        base->dispatch = (void *)0x8c261240;
    }
    o->dispatch = (void *)0x8c26117c;
    load_manager_8c014fcc(o);
    reset_manager_8c014fe4(o);
    bind_manager_8c015004(o);
    audio_manager = o;
    return o;
}
