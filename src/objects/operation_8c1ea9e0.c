typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_390 Arg0_390;
typedef struct Arg0_64 Arg0_64;
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x80];
    int fe8;
    char unknownec[0x220];
    short f30c;
    char unknown30e[0x82];
    Arg0_390 *f390;
    char unknown394[0x3dc];
    int f770;
};
extern int angle_halfway(int, int);
extern void call_8c1eb5c0(Object *);
extern int actor_animation_ready(void *);
extern void call_8c1eaab0(Object *);
extern void operation_8c1eaba4(void *);
extern void operation_8c1eac38(void *);
void operation_8c1ea9e0(Object *o)
{
    int v1;
    int t1;
    int t2;
    t1 = angle_halfway((int)(o->f64), (int)(o->f390));
    o->f64 = (Arg0_64 *)t1;
    switch (o->f30c) {
    case 0:
        call_8c1eb5c0(o);
    case 1:
        t2 = actor_animation_ready((void *)o);
        if (t2 == 0) {
            return;
        }
        o->f30c = 2;
        o->fe8 |= 0x40;
        return;
    case 2:
        v1 = (int)((int)o->f770 + -1);
        if (!(v1 >= 0)) {
            o->f30c = 3;
            o->fe8 &= -0x41;
        }
        o->f770 = (int)(v1);
        return;
    case 3:
        call_8c1eaab0(o);
        operation_8c1eaba4((void *)o);
        operation_8c1eac38((void *)o);
        return;
    case 4:
        break;
    }
}
