typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    Arg0_20 *f20;
    float f24;
    char unknown28[0x4];
    float f2c;
    float f30;
};
struct Arg0_20 {
    char unknown0[0x20];
    short f20;
    char unknown22[0x2e6];
    short f308;
    char unknown30a[0xe];
    float f318;
    char unknown31c[0x4];
    float f320;
};
extern int call_8c05b228(short);
extern int active_unflagged_8c05b2dc(void *);
void operation_8c103e9c(Object *o)
{
    int v1;
    int t1;
    int t2;
    t1 = call_8c05b228(o->f20->f20);
    if (t1 != 0) {
        o->f04 |= 1;
        return;
    }
    t2 = active_unflagged_8c05b2dc((void *)(o->f20));
    if (t2 == 0) {
        o->f04 |= 1;
        return;
    }
    v1 = (int)(o->f20->f308 == 2);
    if (v1 != 0) {
        o->f04 |= 1;
        return;
    }
    if (!(o->f30 > 0.02f)) {
        o->f04 |= 1;
        return;
    }
    o->f20->f318 = o->f24 * o->f30;
    o->f20->f320 = o->f2c * o->f30;
    o->f30 = o->f30 * 0.8f;
}
