typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_28_184 Arg0_28_184;
typedef struct Arg0_30 Arg0_30;
struct Object {
    char unknown0[0x28];
    Arg0_28 *f28;
    char unknown2c[0x4];
    Arg0_30 *f30;
    char unknown34[0x1bc];
    int f1f0;
};
struct Arg0_28 {
    char unknown0[0x184];
    Arg0_28_184 *f184;
};
struct Arg0_28_184 {
    char unknown0[0x20];
    int f20;
};
struct Frame {
    int f00;
};
extern int operation_8c1cdc80(void *);
extern int item_capacity_8c022f5c(void *, void *);
extern int call_8c163428(Arg0_28 *, int, Frame *);
int operation_8c189294(Object *o)
{
    Frame frame;
    int v1;
    int t3;
    int t1;
    int t2;
    int v2;
    int lim;
    o->f1f0 = 0;
    if (o->f30 == 0) {
        return 0;
    }
    t3 = operation_8c1cdc80((void *)(o->f30));
    v1 = (int)(t3 * 0x14);
    lim = o->f28->f184->f20;
    if (lim < *(int *)((char *)((char *)o + 0x5c) + (v1))) {
        return 0;
    }
    v2 = (int)((int)o + v1 + 0x4c);
    t1 = item_capacity_8c022f5c((void *)(o->f28), (void *)v2);
    if (t1 == 0) {
        return 1;
    }
    t2 = call_8c163428((Arg0_28 *)(o->f28), v2, (Frame *)((&frame)));
    if (t2 == 0) {
        return ((((&frame)->f00 & 1)) != 0) ? 2 : 3;
    }
    if (*(unsigned char *)((char *)((char *)o + 0x4c) + (v1)) == 1 && *(unsigned char *)((char *)((char *)o + 0x4d) + (v1)) == 3) {
        o->f1f0 = 0;
    } else {
        o->f1f0 = 1;
    }
    return 4;
}
