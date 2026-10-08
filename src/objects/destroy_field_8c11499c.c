/* Provisional accessed prefix; not a complete original class. */
typedef struct View { char unknown0[20]; void * dispatch; } View;
typedef char check_field[(unsigned long)&((View *)0)->dispatch==20?1:-1];
typedef char check_prefix[sizeof(View)==24?1:-1];
View *destroy_field_8c11499c(View *o,short release) { if(o) { o->dispatch=(void *)0x8c269e24; if(release>0) ((void (*)(void *))0x8c011ed8)(o); } return o; }
