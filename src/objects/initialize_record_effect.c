typedef struct Record44 { unsigned int words[11]; } Record44;
typedef struct View { void *name; unsigned short flags; char unknown6[18]; void *dispatch; char unknown28[2]; unsigned short size; Record44 record; int ticks; } View;
typedef char check_dispatch[(unsigned long)&((View *)0)->dispatch==24?1:-1];
typedef char check_size[(unsigned long)&((View *)0)->size==30?1:-1];
typedef char check_record[(unsigned long)&((View *)0)->record==32?1:-1];
typedef char check_ticks[(unsigned long)&((View *)0)->ticks==76?1:-1];
extern void base_at(View *,void *);extern void *object_name;
View *initialize_record_effect(View *o,void *parent,const Record44 *record) { base_at(o,parent);o->dispatch=(void *)0x8c274c1c;o->name=object_name;o->size=80;o->record=*record;o->ticks=0;return o; }
