typedef struct Parameters { char unknown0[12]; unsigned int count; } Parameters;
typedef struct Manager { char unknown0[24]; void *dispatch; char unknown28[4]; void *records, *slots; int unknown40; Parameters *parameters; } Manager;
typedef char check_layout[sizeof(Manager)==48 && (unsigned long)&((Manager *)0)->dispatch==24 && (unsigned long)&((Manager *)0)->records==32 && (unsigned long)&((Manager *)0)->slots==36 && (unsigned long)&((Manager *)0)->parameters==44 && (unsigned long)&((Parameters *)0)->count==12 ? 1:-1];
extern void TObject_ctor_8c0330e4(Manager *, void *), finish_at(Manager *);
extern void *operator_new_8c18de4c(unsigned int);
Manager *initialize_manager_storage(Manager *o, void *parent, Parameters *parameters) {
    unsigned int count;
    Manager **home = &o;
    TObject_ctor_8c0330e4(o, parent);
    o->dispatch = (void *)0x8c261bd4;
    o->parameters = parameters;
    count = o->parameters->count;
    o->records = operator_new_8c18de4c(count * 44);
    o->slots = operator_new_8c18de4c(count << 2);
    finish_at(o);
    return o;
}
