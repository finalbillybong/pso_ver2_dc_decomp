typedef struct Point {float x,y;} Point;
typedef struct Child {char unknown0[104];unsigned short flags;char unknown106[10];int current;} Child;
typedef struct Object {char unknown0[32];int index;void *widgets[24];Child *child;char unknown136[48];int phase;char unknown188[8];short option;char unknown198[18];int current;} Object;
typedef char check_layout[sizeof(Point)==8 && sizeof(Child)==120 && sizeof(Object)==220 && (unsigned long)&((Child *)0)->flags==104 && (unsigned long)&((Child *)0)->current==116 && (unsigned long)&((Object *)0)->index==32 && (unsigned long)&((Object *)0)->widgets==36 && (unsigned long)&((Object *)0)->child==132 && (unsigned long)&((Object *)0)->phase==184 && (unsigned long)&((Object *)0)->option==196 && (unsigned long)&((Object *)0)->current==216 ? 1:-1];
extern short code(void *);extern int classify(short),valid(Child *);extern float origin_x,origin_y,scale;extern int resources[];extern void *heap;
extern void *allocate(void *,int);extern Child *construct(Child *,Point *,int,int,int);extern void set_scale(Child *,float),activate(void *),deactivate(void *),update(Object *,short *),close(Child *);
static inline short selected_code(Object *o) {void *widget=*(void **)((char *)o->widgets+((unsigned int)o->index<<2));if(widget) return code(widget);return -1;}
int poll_resource_selection(Object *o) {
 int status=0;
 if(!o->child) {
  int kind=classify(selected_code(o));
  if(kind!=7) {
   int current=o->current;int resource=*(int *)((char *)resources+((unsigned int)kind<<2));Point position;Child *child;
   position.x=origin_x+60.0f;position.y=origin_y+10.0f;
   child=(Child *)allocate(heap,124);if(child)construct(child,&position,0,resource,current);
   o->child=child;
   if(o->child) {set_scale(o->child,scale);o->child->flags|=16;activate(*(void **)((char *)o->widgets+((unsigned int)o->index<<2)));}
   return 0;
  } else return 1;
 }
 update(o,&o->option);
 if(o->child || valid(o->child)) {
  unsigned short flags;o->current=o->child->current;flags=o->child->flags;
  if(flags&4) {o->current=0;status=2;close(o->child);}
  else if(flags&2) {status=1;close(o->child);}
 } else status=2;
 if(status) {deactivate(*(void **)((char *)o->widgets+((unsigned int)o->index<<2)));o->child=0;o->phase=0;}
 return status==1;
}
