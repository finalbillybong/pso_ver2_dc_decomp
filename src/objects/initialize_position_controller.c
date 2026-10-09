typedef struct Vector { float x,y,z; } Vector;
typedef struct Actor { char unknown0[60]; Vector position; } Actor;
typedef struct Controller { void *name; unsigned short flags; char unknown6[18]; void *vtable; unsigned short unknown28,size; Vector position; float first,second; int mode,state; } Controller;
typedef char check_layout[sizeof(Vector)==12 && sizeof(Actor)==72 && sizeof(Controller)==60 && (unsigned long)&((Actor *)0)->position==60 && (unsigned long)&((Controller *)0)->flags==4 && (unsigned long)&((Controller *)0)->vtable==24 && (unsigned long)&((Controller *)0)->size==30 && (unsigned long)&((Controller *)0)->position==32 && (unsigned long)&((Controller *)0)->first==44 && (unsigned long)&((Controller *)0)->second==48 && (unsigned long)&((Controller *)0)->mode==52 && (unsigned long)&((Controller *)0)->state==56 ? 1:-1];
extern void *parent,*object_name;
extern char controller_vtable[];
extern void base_at(Controller *,void *);
extern Actor *actor_at(int);
extern int prepare_at(Controller *);
Controller *initialize_position_controller(Controller *o,void *unused_parent) {
    Controller **home=&o;
    int i;
    base_at(o,parent);
    o->vtable=controller_vtable;
    o->name=object_name;
    o->size=60;
    o->position.x=0.0f;
    o->position.y=0.0f;
    o->position.z=0.0f;
    o->first=6.0f;
    o->second=10.0f;
    o->mode=2;
    o->state=0;
    for(i=0;i<12;++i) {
        Actor *actor=actor_at(i);
        if(actor) {
            o->position=actor->position;
            o->position.y+=30.0f;
            o->position.z+=30.0f;
            break;
        }
    }
    if(!prepare_at(o)) o->flags|=1;
    else o->flags|=4;
    return o;
}
