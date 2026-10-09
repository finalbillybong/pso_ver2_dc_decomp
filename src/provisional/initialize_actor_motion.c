typedef struct Motion { char unknown0[8]; float speed; int unknown12; } Motion;
typedef struct Controller { short state,next; float factor; char unknown8[24]; } Controller;
typedef struct Object { char unknown0[232]; unsigned int flags; char unknown236[4]; short motion; char unknown242[26]; float rate; Motion *motions; char unknown276[502]; short action,counter; char unknown782[1094]; Controller controller; } Object;
typedef char check_layout[sizeof(Motion)==16 && sizeof(Controller)==32 && sizeof(Object)==1908 && (unsigned long)&((Motion *)0)->speed==8 && (unsigned long)&((Controller *)0)->factor==4 && (unsigned long)&((Object *)0)->flags==232 && (unsigned long)&((Object *)0)->motion==240 && (unsigned long)&((Object *)0)->rate==268 && (unsigned long)&((Object *)0)->motions==272 && (unsigned long)&((Object *)0)->action==778 && (unsigned long)&((Object *)0)->counter==780 && (unsigned long)&((Object *)0)->controller==1876 ? 1:-1];
extern short transitions[];
extern void set_action(Object *,short,int),start_controller(Controller *,Object *,short,int),transition(Object *,int,short),set_speed(Object *,float);
extern short next_state(Controller *),state(Controller *),mode(Controller *),index(Object *);
void initialize_actor_motion(Object *o) {
    set_action(o,o->action,6);
    o->controller.state=next_state(&o->controller);
    start_controller(&o->controller,o,1,1);
    o->counter=0;
    switch(state(&o->controller)) {
    case 0:
        if(!mode(&o->controller)) {o->rate=0.5f;o->flags|=512;}
        break;
    case 1:case 2:
        if(!mode(&o->controller)) {o->rate=0.2f;o->flags|=512;}
        break;
    }
    transition(o,6,*(short *)((char *)transitions+((unsigned int)index(o)<<1)));
    set_speed(o,*(float *)((char *)&o->motions[0].speed+((unsigned int)o->motion<<4))*o->controller.factor);
}
