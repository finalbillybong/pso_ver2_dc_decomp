typedef struct Manager {
    void *name;
    char unknown4[20];
    void *dispatch;
    char unknown28[2];
    unsigned short size;
    char unknown32[16];
} Manager;
typedef char check_layout[sizeof(Manager) == 48 && (unsigned long)&((Manager *)0)->dispatch == 24 && (unsigned long)&((Manager *)0)->size == 30 ? 1 : -1];
extern void *object_name;
extern void base_at(Manager *, void *parent, void *parameter);
Manager *initialize_manager_8c040d10(Manager *o, void *parent, void *parameter) {
    base_at(o, parent, parameter);
    o->dispatch = (void *)0x8c261c60;
    o->name = object_name;
    o->size = 48;
    return o;
}
