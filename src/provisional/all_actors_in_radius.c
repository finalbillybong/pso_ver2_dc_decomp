typedef struct Vector { float x,y,z; } Vector;
typedef struct Object { char unknown0[60]; Vector position; char unknown72[156]; float radius; } Object;
typedef struct Actor { char unknown0[60]; Vector position; char unknown72[820]; int area; } Actor;
typedef char check_layout[sizeof(Vector)==12 && sizeof(Object)==232 && sizeof(Actor)==896 && (unsigned long)&((Object *)0)->position==60 && (unsigned long)&((Object *)0)->radius==228 && (unsigned long)&((Actor *)0)->position==60 && (unsigned long)&((Actor *)0)->area==892 ? 1:-1];
extern int local_index,current_area;
extern Actor *get_actor(int);
extern float distance_squared(Vector *,Vector *);
int all_actors_in_radius(Object *o) {
    int result=1;
    int i;
    for(i=0;i<4;++i) {
        Actor *actor=get_actor(i);
        if(actor) {
            if(actor->area!=current_area || distance_squared(&actor->position,&o->position)>o->radius*o->radius) result=0;
        }
    }
    return result;
}
