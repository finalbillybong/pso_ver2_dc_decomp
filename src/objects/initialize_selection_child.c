typedef struct Point {float x,y;} Point;
typedef struct Object {void *resource;char unknown4[20];void *dispatch;unsigned short unknown28,size;char unknown32[24];Point position;char unknown64[40];unsigned short flags;char unknown106,mode;int parameter;int entries;int current,state;} Object;
typedef char check_layout[sizeof(Object)==124 && sizeof(Point)==8 && (unsigned long)&((Object *)0)->dispatch==24 && (unsigned long)&((Object *)0)->size==30 && (unsigned long)&((Object *)0)->position==56 && (unsigned long)&((Object *)0)->flags==104 && (unsigned long)&((Object *)0)->mode==107 && (unsigned long)&((Object *)0)->parameter==108 && (unsigned long)&((Object *)0)->entries==112 && (unsigned long)&((Object *)0)->current==116 && (unsigned long)&((Object *)0)->state==120 ? 1:-1];
extern char config[],dispatch[];extern void *resource;extern Object *base(Object *,void *);extern void reset(Object *),first(Object *),second(Object *),third(Object *);
Object *initialize_selection_child(Object *o,Point *position,int parameter,int entries,int current) {
 Object **home=&o;
 base(o,config);o->dispatch=dispatch;o->resource=resource;o->size=124;
 o->position.x=position->x;o->position.y=position->y;reset(o);
 o->flags=0;o->mode=0;o->parameter=parameter;o->entries=entries;o->current=current;o->state=0;
 first(o);second(o);third(o);return o;
}
