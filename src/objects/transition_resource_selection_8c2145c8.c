typedef struct Object {char unknown0[32];int index;void *widgets[25];int mode,selection;char unknown144[4];unsigned int flags;char unknown152[24];int category,state;char unknown184[12];short option,limit;char unknown200[52];short selected;} Object;
typedef char check_layout[sizeof(Object)==256 && (unsigned long)&((Object *)0)->index==32 && (unsigned long)&((Object *)0)->widgets==36 && (unsigned long)&((Object *)0)->mode==136 && (unsigned long)&((Object *)0)->selection==140 && (unsigned long)&((Object *)0)->flags==148 && (unsigned long)&((Object *)0)->category==176 && (unsigned long)&((Object *)0)->state==180 ? 1:-1];
typedef char check_extended[(unsigned long)&((Object *)0)->option==196 && (unsigned long)&((Object *)0)->limit==198 && (unsigned long)&((Object *)0)->selected==252 ? 1:-1];
extern short code(void *);
extern int value(void *),select_value(Object *,int,int,int),input(int *,int),emit(int,void *,void *,int);
extern void set_value(void *,int),refresh(Object *),activate(Object *),cancel(Object *);
void transition_resource_selection_8c2145c8(Object *o) {void *widget;o->state=13;o->selected=19;widget=*(void **)((char *)o->widgets+((unsigned int)o->index<<2));if(widget) {o->selected=code(widget);if(o->selected==27) {o->state=17;o->limit=5;}o->option=0;}}
