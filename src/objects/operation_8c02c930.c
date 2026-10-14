typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_358 Arg0_358;
struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0x336];
    Arg0_358 *f358;
};
struct Arg0_358 {
    char unknown0[0x20];
    char f20;
};
extern int current_effect_mode(void);
extern int operation_8c03b0d8(short, int);
Arg0_358 *operation_8c02c930(Object *o, int a1)
{
    int v1;
    int t1;
    int t2;
    t2 = current_effect_mode();
    v1 = (int)(t2 == 0xf);
    if (v1 == 0) {
        return 0;
    }
    if (o->f358 == 0) {
        t1 = operation_8c03b0d8(o->f20, a1);
        o->f358 = (Arg0_358 *)t1;
    } else {
        o->f358->f20 = a1;
    }
    return o->f358;
}
