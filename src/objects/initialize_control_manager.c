typedef struct Parameters { char unknown0[12]; int count; } Parameters;
typedef struct Record { struct Record *next; char unknown4[36]; signed char slot; char unknown41[3]; } Record;
typedef struct Manager { void *name; char unknown4[20]; void *dispatch; char unknown28[2]; unsigned short size; Record *records; Record **slots; int dirty; Parameters *parameters; } Manager;
typedef char check_layout[sizeof(Manager)==48 && sizeof(Record)==44 && (unsigned long)&((Manager *)0)->dispatch==24 && (unsigned long)&((Manager *)0)->size==30 && (unsigned long)&((Manager *)0)->records==32 && (unsigned long)&((Manager *)0)->slots==36 && (unsigned long)&((Manager *)0)->dirty==40 && (unsigned long)&((Manager *)0)->parameters==44 && (unsigned long)&((Parameters *)0)->count==12 && (unsigned long)&((Record *)0)->slot==40 ? 1:-1];
extern void base_at(Manager *,void *);extern void *object_name;
Manager *initialize_control_manager(Manager *o,void *parent) { base_at(o,parent); o->dispatch=(void *)0x8c2697e8; o->name=object_name; o->size=44; o->records=0; o->slots=0; o->dirty=0; return o; }
