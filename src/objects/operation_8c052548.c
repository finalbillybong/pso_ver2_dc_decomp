typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467240 S_g8c467240;
typedef struct Object Object;
typedef struct Arg0_dc Arg0_dc;
typedef struct S_vv47 S_vv47;
struct Object {
    char unknown0[0xdc];
    Arg0_dc *fdc;
};
struct S_vv47 {
    char unknown0[0x18];
    int f18;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
extern int call_8c052434(Object *, void *);
void operation_8c052548(Object *o)
{
    S_vv47 *v47;
    int v2;
    int v1;
    int t1;
    v47 = (S_vv47 *)o->fdc;
    if (v47 != 0) {
        v47->f18 &= -0x100001;
        v2 = (int)0;
        v1 = (int)0x100000;
        while (*(int *)0x8c467874 > v2) {
            if (*(int *)((char *)0x8c467240 + (v2 << 2)) != 0) {
                t1 = call_8c052434(o, (void *)(*(S_g8c467240 **)((char *)0x8c467240 + (v2 << 2))));
                if (t1 != 0) {
                    o->fdc->f18 |= v1;
                }
            }
            v2 = (int)(v2 + 1);
        }
    }
}
