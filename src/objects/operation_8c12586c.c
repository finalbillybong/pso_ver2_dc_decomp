typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct Object Object;
typedef struct Arg0_3c0 Arg0_3c0;
typedef struct Arg0_s3ac Arg0_s3ac;
typedef struct S_x11632_0 S_x11632_0;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0xea];
    short ff0;
    char unknownf2[0x6];
    float ff8;
    char unknownfc[0x220];
    float f31c;
    char unknown320[0x78];
    int f398;
    char unknown39c[0x8];
    int f3a4;
    char unknown3a8[0x28];
    float f3d0;
};
struct S_c8c053d84 {
    char unknown0[0x4];
    short f04;
};
struct Arg0_s3ac {
    char unknown0[0x14];
    Arg0_3c0 *f14;
};
struct Arg0_3c0 {
    char unknown0[0x18];
    int f18;
};
extern void refresh_follow_effect_8c0129f4(void *);
extern S_c8c053d84 *lookup_object_by_id(unsigned short);
extern void operation_8c09e6d0(void *);
extern void call_8c05fbf8(int, void *, int, int);
extern void call_8c01c5f0(Object *);
extern void operation_8c0fc020(void *);
extern void operation_8c1083f8(int);
extern void create_resource_effect_8c108300(void *, int);
void operation_8c12586c(Object *o)
{
    int v4;
    int v2;
    int v3;
    int v1;
    S_c8c053d84 *t1;
    int t2;
    switch (o->f398) {
    case 0:
        refresh_follow_effect_8c0129f4((void *)o);
        *(int *)((char *)o + 0x3a4) &= -0x20001;
        v1 = (int)(((o->f3a4 & 0x1000000)) != 0);
        if (v1 != 0) {
            o->ff0 = 4;
            o->f398 = 1;
            v2 = (int)0x3e0;
            v4 = (int)0;
            v3 = (int)0x3f4;
            while (*(short *)((char *)((char *)o + 0x0) + (v3)) > v4) {
                t1 = lookup_object_by_id((unsigned short)(*(S_x11632_0 **)((char *)((char *)((int)o + v2) + 0x0) + (v4 << 2))));
                if (t1 != 0) {
                    operation_8c09e6d0((void *)t1);
                    t1->f04 |= 1;
                }
                v4 = (int)(v4 + 1);
            }
        } else {
            o->ff0 = 9;
            o->f31c = o->f3d0 / 11.666667f;
            o->f398 = 2;
        }
        call_8c05fbf8(0x30037, (void *)(((char *)o + 0x3c)), 0, 0);
        return;
    case 1:
        call_8c01c5f0(o);
        if (20.0f > o->ff8) {
            return;
        }
        o->f398 = 3;
        return;
    case 2:
        call_8c01c5f0(o);
        if (10.0f > o->ff8) {
            return;
        }
        o->f3d0 -= o->f31c;
        if (o->f3d0 > 0.0f) {
            return;
        }
        o->f3d0 = 0.0f;
        o->f398 = 3;
        return;
    case 3:
        operation_8c0fc020((void *)(((char *)o + 0x3ac)));
        operation_8c1083f8((int)(((char *)o + 0x324)));
        o->f3a4 |= 4;
        o->f398 = 4;
    case 4:
        call_8c01c5f0(o);
        t2 = ((int (*)(void *))(((Arg0_s3ac *)((char *)o + 0x3ac))->f14->f18))((void *)(((char *)o + 0x3ac)));
        if (t2 == 1) {
            create_resource_effect_8c108300((void *)(((char *)o + 0x3c)), 0);
            operation_8c09e6d0((void *)o);
            o->f04 |= 1;
        }
        return;
    case -1:
        break;
    }
}
