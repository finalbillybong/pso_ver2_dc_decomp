/* Provisional accessed prefix; not a complete original class. */
typedef struct View { char unknown0[36]; void * dispatch; } View;
typedef char check_field[(unsigned long)&((View *)0)->dispatch==36?1:-1];
typedef char check_prefix[sizeof(View)==40?1:-1];
View *destroy_field_8c0b403c(View *o,short release) { if(o) { o->dispatch=(void *)0x8c266054; if(release>0) ((void (*)(void *))0x8c011ed8)(o); } return o; }
