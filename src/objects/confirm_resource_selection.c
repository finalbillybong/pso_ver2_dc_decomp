#include "src/include/types/ResourceSelection.h"
typedef char check_layout[(unsigned long)&((ResourceSelection *)0)->index==32 && (unsigned long)&((ResourceSelection *)0)->widgets==36 && (unsigned long)&((ResourceSelection *)0)->selection==140 && (unsigned long)&((ResourceSelection *)0)->result==144 && (unsigned long)&((ResourceSelection *)0)->flags==148 && (unsigned long)&((ResourceSelection *)0)->state==180 && (unsigned long)&((ResourceSelection *)0)->phase_b8==184 ? 1:-1];
extern short code(void *);extern int classify(short),poll(ResourceSelection *),input(int *,int),play_se_8c05fbf8(int,void *,void *,int);extern void refresh(ResourceSelection *),activate(ResourceSelection *),cancel(ResourceSelection *);
static inline short selected_code(ResourceSelection *o) {void *widget=*(void **)((char *)o->widgets+((unsigned int)o->index<<2));if(widget) return code(widget);return -1;}
static inline int pending(ResourceSelection *o,int status) {if(status!=7) {o->phase_b8=1;return 1;}return 0;}
void confirm_resource_selection(ResourceSelection *o) {
 int done=0;
 switch(o->phase_b8) {
 case 0:
  refresh(o);
  if(input(&o->index,4)) {
   play_se_8c05fbf8(0x50001,0,0,0);
   done=!pending(o,classify(selected_code(o)));
  } else {int active=1;if(input(&o->index,2)==0 && (o->flags&2)==0) active=0;if(active) {play_se_8c05fbf8(0x50016,0,0,0);cancel(o);}}
  break;
 case 1:done=poll(o);break;
 }
 if(done) {
  short selected=code(*(void **)((char *)o->widgets+((unsigned int)o->index<<2)));
  int within=0;if(selected>=887 && selected<=964) within=1;
  if(within) o->state=10;
  else {o->state=11;o->result=-1;}
  o->selection=-50;activate(o);
 }
}
