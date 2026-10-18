typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467240 S_g8c467240;
typedef struct Object Object;
typedef struct Arg0_dc Arg0_dc;
typedef struct S_vv5 S_vv5;
struct Object {
    char unknown0[0xdc];
    Arg0_dc *fdc;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
struct S_vv5 {
    char unknown0[0x20];
    unsigned short f20;
};
extern int call_8c052434(Object *, S_vv5 *);
void operation_8c0525b4(Object *o)
{
    int v4;
    S_vv5 *v5;
    unsigned short v6;
    int v1;
    int v2;
    int v3;
    int t1;
    if (o->fdc != 0) {
        o->fdc->f18 &= -0x200001;
        v4 = (int)0;
        v1 = (int)0x1000;
        v2 = (int)0x4000;
        v3 = (int)0x200000;
        while (*(int *)0x8c467870 > v4) {
            v5 = (S_vv5 *)*(S_g8c467240 **)((char *)0x8c467240 + (v4 << 2));
            if (v5 == 0) {
                return;
            }
            v6 = (unsigned short)v5->f20;
            if (v6 >= (unsigned int)(unsigned short)v1 && (unsigned int)(unsigned short)v2 > v6) {
                t1 = call_8c052434(o, v5);
                if (t1 != 0) {
                    o->fdc->f18 |= v3;
                }
            }
            v4 = (int)(v4 + 1);
        }
    }
}
