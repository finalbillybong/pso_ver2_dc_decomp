typedef struct View {char unknown0[24];void *dispatch;char unknown28[856];char embedded[28];} View;
typedef char check_dispatch[(unsigned long)&((View *)0)->dispatch==24?1:-1];
typedef char check_embedded[(unsigned long)&((View *)0)->embedded==884?1:-1];
extern void finish_at(View *),detach_at(View *),embedded_at(void *,int),TOTrap_dtor_8c140b8c(View *,int),free_at(void *,void *);extern void *heap;
View *TOTrapAncient01_dtor_8c1414c4(View *o,int release) {if(o) {o->dispatch=(void *)0x8c26ddc0;finish_at(o);detach_at(o);embedded_at(o->embedded,-1);TOTrap_dtor_8c140b8c(o,0);if((short)release>0) free_at(heap,o);}return o;}
