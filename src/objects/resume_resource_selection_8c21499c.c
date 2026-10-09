typedef struct Object {char unknown0[32];int index;void *widgets[25];int mode,selection,result;unsigned int flags;char unknown152[24];int category,state,phase;} Object;
typedef char check_layout[sizeof(Object)==188 && (unsigned long)&((Object *)0)->index==32 && (unsigned long)&((Object *)0)->widgets==36 && (unsigned long)&((Object *)0)->selection==140 && (unsigned long)&((Object *)0)->result==144 && (unsigned long)&((Object *)0)->flags==148 && (unsigned long)&((Object *)0)->state==180 && (unsigned long)&((Object *)0)->phase==184 ? 1:-1];
extern int value(void *),select_value(Object *,int,int,int);extern void set_value(void *,int);
extern short code(void *);extern int classify(short),poll(Object *),input(int *,int),emit(int,void *,void *,int);extern void refresh(Object *),activate(Object *),cancel(Object *);
static inline short selected_code(Object *o) {void *widget=*(void **)((char *)o->widgets+((unsigned int)o->index<<2));if(widget) return code(widget);return -1;}
static inline int pending(Object *o,int status) {if(status!=7) {o->phase=1;return 1;}return 0;}
void resume_resource_selection_8c21499c(Object *o) {
 int done=0;
 switch(o->phase) {
 case 0: {
 int result=select_value(o,o->category,o->mode,value(*(void **)((char *)o->widgets+((unsigned int)o->index<<2))));
 if(result!=o->selection) {o->selection=result;set_value(*(void **)((char *)&o->widgets[1]+((unsigned int)o->index<<2)),o->selection);}

  refresh(o);
  if(input(&o->index,4)) {
   emit(0x50001,0,0,0);
   done=!pending(o,classify(selected_code(o)));
  } else {int active=1;if(input(&o->index,2)==0 && (o->flags&2)==0) active=0;if(active) {emit(0x50016,0,0,0);cancel(o);}}
  break;}
 case 1:done=poll(o);break;
 }
 if(done) {o->state=18;activate(o);}
}
