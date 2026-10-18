typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg1 Arg1;
typedef struct Arg1_118 Arg1_118;
typedef struct Arg1_348 Arg1_348;
struct Object {
    char unknown0[0x28];
    Arg0_28 *f28;
    char unknown2c[0x8];
    int f34;
    int f38;
    char unknown3c[0xb0];
    int fec;
    char unknownf0[0x3c];
    void *f12c;
    char unknown130[0xcc];
    int f1fc;
    char unknown200[0x8];
    short f208;
    short f20a;
};
struct Arg1 {
    char unknown0[0x118];
    Arg1_118 *f118;
    char unknown11c[0x22c];
    Arg1_348 *f348;
};
extern short g_8c2fd6e4;
extern short g_8c2fd6e6;
extern int g_8c4689f0;
extern int g_8c4689f4;
extern Object *g_8c469a40;
extern int g_8c575570;
extern void call_8c38ade4(void *);
extern void apply_resource_3827d8(void *);
extern void set_fields_8c0751cc(void);
extern float operation_8c074dbc(void *);
extern void operation_8c075274(float);
extern void operation_8c074628(void *, int);
extern void operation_8c074678(void *, int);
extern void operation_8c074c98(void);
extern void operation_8c074d14(void);
extern void operation_8c075300(void);
extern void set_fields_8c075220(void);
extern void operation_8c0745dc(void *, int);
extern void call_8c38ad10(void);
int operation_8c075730(Object *o, Arg1 *a1, int a2)
{
    float t1;
    if (a1 == 0) {
        return 0;
    }
    if (o->f38 == 0) {
        return 0;
    }
    g_8c4689f0 = 0;
    call_8c38ade4((void *)(&*(int *)((char *)((char *)a1->f118 + 0x0) + (a2 << 6))));
    apply_resource_3827d8((void *)(o->f28));
    if (((o->f34 & 0x8000000)) == 0 && ((o->fec & 0x40)) == 0) {
        g_8c469a40 = o;
        g_8c2fd6e4 = o->f208;
        g_8c2fd6e6 = o->f20a;
        o->f12c = (void *)0x8c075df0;
        set_fields_8c0751cc();
        g_8c575570 &= -0x11;
        t1 = operation_8c074dbc((void *)o);
        operation_8c075274(t1);
        if (((o->f1fc & 0x40)) != 0) {
            operation_8c074628((void *)o, (int)(a1->f348));
        } else {
            operation_8c074678((void *)o, (int)(a1->f348));
        }
        operation_8c074c98();
        operation_8c074d14();
        operation_8c075300();
        set_fields_8c075220();
        g_8c469a40 = (Object *)0;
        g_8c2fd6e6 = g_8c2fd6e4 = -1;
        o->f12c = (void *)0;
        g_8c4689f4 = 0;
    } else {
        operation_8c0745dc((void *)o, (int)(a1->f348));
    }
    call_8c38ad10();
    g_8c4689f0 = 0;
    return 1;
}
