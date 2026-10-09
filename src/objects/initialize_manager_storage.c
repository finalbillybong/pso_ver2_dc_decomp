typedef struct Parameters { char unknown0[12]; unsigned int count; } Parameters;
typedef struct Manager { char unknown0[24]; void *dispatch; char unknown28[4]; void *records, *slots; int unknown40; Parameters *parameters; } Manager;
typedef char check_layout[sizeof(Manager)==48 && (unsigned long)&((Manager *)0)->dispatch==24 && (unsigned long)&((Manager *)0)->records==32 && (unsigned long)&((Manager *)0)->slots==36 && (unsigned long)&((Manager *)0)->parameters==44 && (unsigned long)&((Parameters *)0)->count==12 ? 1:-1];
extern void base_at(Manager *, void *), finish_at(Manager *);
extern void *allocate_at(unsigned int);
Manager *initialize_manager_storage(Manager *o, void *parent, Parameters *parameters) {
    unsigned int count;
    Manager **home = &o;
    base_at(o, parent);
    o->dispatch = (void *)0x8c261bd4;
    o->parameters = parameters;
    count = o->parameters->count;
    o->records = allocate_at(count * 44);
    o->slots = allocate_at(count << 2);
    finish_at(o);
    return o;
}
