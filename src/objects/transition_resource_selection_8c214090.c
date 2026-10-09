typedef struct Object {char unknown0[32];int index;void *widgets[25];int mode,selection;char unknown144[4];unsigned int flags;char unknown152[24];int category,state;} Object;
typedef char check_layout[sizeof(Object)==184 && (unsigned long)&((Object *)0)->index==32 && (unsigned long)&((Object *)0)->widgets==36 && (unsigned long)&((Object *)0)->mode==136 && (unsigned long)&((Object *)0)->selection==140 && (unsigned long)&((Object *)0)->flags==148 && (unsigned long)&((Object *)0)->category==176 && (unsigned long)&((Object *)0)->state==180 ? 1:-1];
extern int value(void *),select_value(Object *,int,int,int),input(int *,int),emit(int,void *,void *,int);
extern void set_value(void *,int),refresh(Object *),activate(Object *),cancel(Object *);
void transition_resource_selection_8c214090(Object *o) {
 refresh(o);
 if(input(&o->index,4)) {emit(0x50001,0,0,0);o->state=20;o->selection=-60;activate(o);}
 else {int active=1;if(input(&o->index,2)==0 && (o->flags&2)==0) active=0;if(active) {emit(0x50016,0,0,0);cancel(o);}}
}
