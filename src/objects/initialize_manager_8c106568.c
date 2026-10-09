typedef struct Manager {
    void *name;
    char unknown4[20];
    void *dispatch;
    char unknown28[2];
    unsigned short size;
    char unknown32[12];
} Manager;
typedef char check_layout[sizeof(Manager) == 44 && (unsigned long)&((Manager *)0)->dispatch == 24 && (unsigned long)&((Manager *)0)->size == 30 ? 1 : -1];
extern void *object_name;
extern void base_at(Manager *, void *parent);
Manager *initialize_manager_8c106568(Manager *o, void *parent) {
    base_at(o, parent);
    o->dispatch = (void *)0x8c2697c0;
    o->name = object_name;
    o->size = 44;
    return o;
}
