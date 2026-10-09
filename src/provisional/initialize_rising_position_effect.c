typedef struct Vector { float x,y,z; } Vector;
typedef struct Effect { void *name; char unknown4[20]; void *vtable; unsigned short unknown28,size; char unknown32[12]; Vector position; float height,speed; int duration,frames,state,mode,parameter; } Effect;
typedef char check_layout[sizeof(Vector)==12 && sizeof(Effect)==84 && (unsigned long)&((Effect *)0)->vtable==24 && (unsigned long)&((Effect *)0)->size==30 && (unsigned long)&((Effect *)0)->position==44 && (unsigned long)&((Effect *)0)->height==56 && (unsigned long)&((Effect *)0)->speed==60 && (unsigned long)&((Effect *)0)->duration==64 && (unsigned long)&((Effect *)0)->frames==68 && (unsigned long)&((Effect *)0)->state==72 && (unsigned long)&((Effect *)0)->mode==76 && (unsigned long)&((Effect *)0)->parameter==80 ? 1:-1];
extern char effect_vtable[];
extern void *object_name;
extern void base_at(Effect *,void *);
extern Vector *position_at(Effect *);
extern int random_at(void),special_mode_at(void);
static inline float random_fraction(void) { return (float)random_at()/32768.0f; }
Effect *initialize_rising_position_effect(Effect *o,void *parent,int parameter) {
    Effect **home=&o;
    base_at(o,parent);
    o->vtable=effect_vtable;
    o->name=object_name;
    o->size=84;
    o->position=*position_at(o);
    o->height=-32.0f;
    o->speed=-(random_fraction()*8.0f+2.0f);
    o->duration=(int)(random_fraction()*20.0f+20.0f);
    o->frames=0;
    o->state=0;
    if(special_mode_at()) o->mode=1;
    else o->mode=0;
    o->parameter=parameter;
    return o;
}
