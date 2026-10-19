typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c158520 S_c8c158520;
typedef struct S_c8c1c7658 S_c8c1c7658;
typedef struct S_c8c1c7658_0 S_c8c1c7658_0;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_204 Arg0_204;
typedef struct Arg1 Arg1;
typedef struct S_x1424_0 S_x1424_0;
struct Frame {
    char unknown0[0xc];
    short f0c;
    short f0e;
    short f10;
    short f12;
    short f14;
    short f16;
    char unknown18[0x4];
};
struct Arg1 {
    unsigned char f00;
};
struct Object {
    char unknown0[0xec];
    int fec;
    char unknownf0[0x4c];
    int f13c;
    char unknown140[0x9c];
    float f1dc;
    float f1e0;
    char unknown1e4[0x20];
    Arg0_204 *f204;
    char unknown208[0x1c];
    int f224;
};
struct S_c8c1c7658 {
    S_c8c1c7658_0 *f00;
};
struct S_c8c158520 {
    char f00;
    char f01;
    char f02;
    char f03;
    char f04;
    char f05;
};
extern void initialize_fields_8c207358(void *);
extern S_c8c1c7658 *call_8c1c7658(Arg1 *);
extern S_c8c158520 *operation_8c158520(int, int);
extern int operation_8c1f2528(void *, int);
extern void create_effect_777c(void *, int);
extern void call_8c05fbf8(int, int, int, int);
extern int operation_8c07dca8(void *, void *);
int operation_8c07def4(Object *o, Arg1 *a1)
{
    Frame frame;
    int v12;
    int v11;
    S_c8c1c7658 *t1;
    S_c8c158520 *t2;
    int t3;
    int t4;
    if (a1 == 0) {
        return 0;
    }
    initialize_fields_8c207358((void *)(&(&frame)->f0c));
    (&frame)->f0c = 0;
    (&frame)->f0e = 0;
    (&frame)->f16 = 0;
    (&frame)->f14 = 0;
    (&frame)->f12 = 0;
    (&frame)->f10 = 0;
    if (a1->f00 == 3) {
        t1 = call_8c1c7658(a1);
        if (t1 != 0) {
            t2 = operation_8c158520((int)(o->f204), (int)(t1->f00));
            if (t2 != 0) {
                (&frame)->f10 = t2->f00;
                (&frame)->f12 = t2->f01;
                (&frame)->f14 = t2->f02;
                (&frame)->f16 = t2->f03;
                (&frame)->f0c = t2->f04;
                (&frame)->f0e = t2->f05;
                o->f224 |= 0x10;
                if (o->f1dc != 0.0f) {
                    o->f1e0 += 1.0f;
                } else {
                    o->f1dc = 6300.0f;
                }
            }
        }
    }
    if (((o->fec & 0x40)) == 0) {
        v12 = (int)0;
        v11 = (int)0x1f4;
        while (v12 != 2) {
            if (*(int *)((char *)((char *)((int)o + v11) + 0x0) + (v12 << 2)) != 0) {
                t3 = operation_8c1f2528((void *)(*(S_x1424_0 **)((char *)((char *)((int)o + v11) + 0x0) + (v12 << 2))), (int)(&frame));
                if (t3 != 0) {
                    create_effect_777c((void *)(&frame), 0x9b);
                }
            }
            v12 = (int)(v12 + 1);
        }
        call_8c05fbf8(0x50011, (int)((int)o->f13c + 0x3c), 0, 0);
    }
    t4 = operation_8c07dca8((void *)o, (void *)(&(&frame)->f0c));
    return (int)(t4);
}
