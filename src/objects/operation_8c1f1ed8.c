typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_24_s58c Arg0_24_s58c;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    Arg0_20 *f20;
    Arg0_24 *f24;
    char unknown28[0x4];
    int f2c;
    char unknown30[0x38];
    int f68;
    char unknown6c[0x18];
    float f84;
    float f88;
    char unknown8c[0x30];
    float fbc;
};
struct Arg0_20 {
    char unknown0[0x1d8];
    int f1d8;
};
struct Arg0_24 {
    char unknown0[0x308];
    short f308;
};
struct Arg0_24_s58c {
    char unknown0[0x1c];
    float f1c;
};
extern int call_8c07f914(Arg0_20 *);
extern void call_8c1f226c(Object *);
extern void call_8c1f21e8(Object *);
extern void call_8c1f1fac(Object *);
void operation_8c1f1ed8(Object *o)
{
    int v1;
    int t1;
    if (((o->f68 & 0x80)) != 0) {
        o->f04 |= 1;
        return;
    }
    t1 = call_8c07f914((Arg0_20 *)(o->f20));
    if (t1 != 0 || ((o->f20->f1d8 & 0x20)) != 0) {
        return;
    }
    v1 = (int)(o->f24->f308 == 7);
    if (v1 != 0) {
        call_8c1f226c(o);
        return;
    }
    o->fbc = ((Arg0_24_s58c *)((char *)o->f24 + 0x58c))->f1c;
    if (((o->f68 & 8)) != 0) {
        call_8c1f21e8(o);
    } else {
        call_8c1f1fac(o);
    }
    if (o->f2c != 0) {
        o->f84 += 1.0f;
        if (!(o->f88 > o->f84)) {
            o->f84 = 0.0f;
        }
    }
}
