typedef struct Vector { float x,y,z; } Vector;
typedef struct Object { char unknown0[60]; Vector position; char unknown72[156]; float radius; } Object;
typedef struct Actor { char unknown0[60]; Vector position; char unknown72[820]; int area; } Actor;
typedef char check_layout[sizeof(Vector)==12 && sizeof(Object)==232 && sizeof(Actor)==896 && (unsigned long)&((Object *)0)->position==60 && (unsigned long)&((Object *)0)->radius==228 && (unsigned long)&((Actor *)0)->position==60 && (unsigned long)&((Actor *)0)->area==892 ? 1:-1];
extern int local_index,current_area;
extern Actor *get_actor(int);
extern float distance_squared(Vector *,Vector *);
Actor *find_local_actor_in_radius(Object *o,float radius) {
    Actor *actor=get_actor(local_index);
    if(actor && actor->area==current_area) {
        if(distance_squared(&o->position,&actor->position)<radius*radius) return actor;
    }
    return 0;
}
