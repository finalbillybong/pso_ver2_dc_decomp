typedef struct Vector { float x,y,z; } Vector;
typedef struct Actor { char unknown0[32]; short id; char unknown34[26]; Vector position; } Actor;
typedef char check_layout[sizeof(Vector)==12 && sizeof(Actor)==72 && (unsigned long)&((Actor *)0)->id==32 && (unsigned long)&((Actor *)0)->position==60 ? 1:-1];
extern Actor *actors[];
extern int actor_count;
extern int eligible(short);
extern float distance(Vector *,Vector *),random_fraction(Actor *),angle(float,float),sine(int),cosine(int);
void choose_distant_actor_position(Actor *o,Vector *out) {
    Vector best_position,position;
    Actor *best=0;
    int i;
    float best_distance=0.0f;
    for(i=0;i<actor_count;++i) {
        Actor *actor=*(Actor **)((char *)actors+((unsigned int)i<<2));
        if(actor && eligible(actor->id)) {
            float d;
            position=actor->position;position.y=0.0f;
            d=distance(&position,&o->position);
            if(d>560.0f) continue;
            if(d>best_distance) { best=actor;best_position=position;best_distance=d; }
        }
    }
    if(best) *out=best_position;
    else {
        float radius=random_fraction(o)*200.625f;
        float random_angle=random_fraction(o);
        float direction=angle(-o->position.x,-o->position.z);
        int heading=(int)(random_angle*49152.0f)-24576+(int)(direction*65536.0f/6.283184051513672f);
        out->x=radius*sine(heading);out->y=0.0f;out->z=radius*cosine(heading);
    }
}
