/* Provisional accessed prefix; not a complete original class. */
typedef struct View { char unknown0[4]; void * dispatch; } View;
typedef char check_field[(unsigned long)&((View *)0)->dispatch==4?1:-1];
typedef char check_prefix[sizeof(View)==8?1:-1];
View *destroy_field_8c0e1cd4(View *o,short release) { if(o) { o->dispatch=(void *)0x8c267794; ((void (*)(void *,int))0x8c11a88c)(o,0); if(release>0) ((void (*)(void *))0x8c011ed8)(o); } return o; }
