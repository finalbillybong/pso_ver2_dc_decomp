#include "src/include/types/ResourceSelection.h"
typedef char check_layout[(unsigned long)&((ResourceSelection *)0)->index==32 && (unsigned long)&((ResourceSelection *)0)->widgets==36 && (unsigned long)&((ResourceSelection *)0)->mode==136 && (unsigned long)&((ResourceSelection *)0)->selection==140 && (unsigned long)&((ResourceSelection *)0)->flags==148 && (unsigned long)&((ResourceSelection *)0)->category==176 && (unsigned long)&((ResourceSelection *)0)->state==180 ? 1:-1];
extern int value(void *),select_value(ResourceSelection *,int,int,int),input(int *,int),play_se_8c05fbf8(int,void *,void *,int);
extern void set_value(void *,int),refresh(ResourceSelection *),activate(ResourceSelection *),cancel(ResourceSelection *);
void update_resource_selection_8c21475c(ResourceSelection *o) {
 int result=select_value(o,o->category,o->mode,value(*(void **)((char *)o->widgets+((unsigned int)o->index<<2))));
 if(result!=o->selection) {o->selection=result;set_value(*(void **)((char *)&o->widgets[1]+((unsigned int)o->index<<2)),o->selection);}
 refresh(o);
 if(input(&o->index,4)) {play_se_8c05fbf8(0x50001,0,0,0);o->state=15;activate(o);}
 else {int active=1;if(input(&o->index,2)==0 && (o->flags&2)==0) active=0;if(active) {play_se_8c05fbf8(0x50016,0,0,0);cancel(o);}}
}
