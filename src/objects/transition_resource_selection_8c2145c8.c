#include "src/include/types/ResourceSelection.h"
typedef char check_layout[(unsigned long)&((ResourceSelection *)0)->index==32 && (unsigned long)&((ResourceSelection *)0)->widgets==36 && (unsigned long)&((ResourceSelection *)0)->mode==136 && (unsigned long)&((ResourceSelection *)0)->selection==140 && (unsigned long)&((ResourceSelection *)0)->flags==148 && (unsigned long)&((ResourceSelection *)0)->category==176 && (unsigned long)&((ResourceSelection *)0)->state==180 ? 1:-1];
typedef char check_extended[(unsigned long)&((ResourceSelection *)0)->option==196 && (unsigned long)&((ResourceSelection *)0)->limit==198 && (unsigned long)&((ResourceSelection *)0)->selected==252 ? 1:-1];
extern short code(void *);
extern int value(void *),select_value(ResourceSelection *,int,int,int),input(int *,int),emit(int,void *,void *,int);
extern void set_value(void *,int),refresh(ResourceSelection *),activate(ResourceSelection *),cancel(ResourceSelection *);
void transition_resource_selection_8c2145c8(ResourceSelection *o) {void *widget;o->state=13;o->selected=19;widget=*(void **)((char *)o->widgets+((unsigned int)o->index<<2));if(widget) {o->selected=code(widget);if(o->selected==27) {o->state=17;o->limit=5;}o->option=0;}}
