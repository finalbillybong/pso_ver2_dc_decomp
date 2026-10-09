typedef struct Vector { float x,y,z; } Vector;
typedef struct Object { char unknown0[60]; Vector position; char unknown72[28]; int heading; char unknown104[688]; Vector velocity; char unknown804[108]; int desired; char unknown916[4]; Vector target; char unknown932[448]; float speed; char unknown1384[8]; unsigned int flags; } Object;
typedef char check_layout[sizeof(Vector)==12 && sizeof(Object)==1396 && (unsigned long)&((Object *)0)->position==60 && (unsigned long)&((Object *)0)->heading==100 && (unsigned long)&((Object *)0)->velocity==792 && (unsigned long)&((Object *)0)->desired==912 && (unsigned long)&((Object *)0)->target==920 && (unsigned long)&((Object *)0)->speed==1380 && (unsigned long)&((Object *)0)->flags==1392 ? 1:-1];
extern int direction(Vector *,Vector *),turn(int,int),halfway(int,int),advance(Object *);
extern float sine(int),cosine(int);
extern void resolve(Object *,float,float);
void advance_pursuit_vector(Object *o) {
    int heading;
    float radius,dx,dz;
    o->desired=direction(&o->position,&o->target);
    o->heading=turn(o->heading,o->desired);
    heading=halfway(o->heading,o->desired);
    { float speed=o->speed; o->velocity.x=speed*sine(heading); }
    o->velocity.y=0.0f;
    { float speed=o->speed; o->velocity.z=speed*cosine(heading); }
    radius=o->speed*2.0f;
    dx=o->target.x-o->position.x;
    dz=o->target.z-o->position.z;
    if(radius*radius>dx*dx+dz*dz)o->flags|=4;
    if(advance(o))o->flags|=4;
    resolve(o,1.0f,15.0f);
}
