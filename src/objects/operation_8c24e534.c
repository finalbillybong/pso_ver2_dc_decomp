typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_0 S_g8c467180_2c_0;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct Arg0_30_4 Arg0_30_4;
typedef struct S_vv1 S_vv1;
typedef struct S_vv3 S_vv3;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
};
struct Arg0_30 {
    int f00;
    Arg0_30_4 *f04;
    char unknown8[0x34];
    int f3c;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x2b0];
    int f2b0;
    char unknown2b4[0x10];
    int f2c4;
};
struct Frame {
    int f00;
    int f04;
    int f08;
    int f0c;
};
struct S_vv1 {
    char unknown0[0x8];
    float f08;
    char unknownc[0xc];
    float f18;
    char unknown1c[0xc];
    float f28;
    char unknown2c[0xc];
    float f38;
};
struct S_vv3 {
    char unknown0[0x20];
    int f20;
};
extern S_g8c418248 *g_8c418248;
extern S_g8c467180 *g_8c467180;
extern void call_8c0e196c(void *, void *);
extern void operation_8c0e226c(int, int);
extern int lookup_low_id(int);
extern void call_8c0e2278(void *, int, int);
void operation_8c24e534(Object *o)
{
    Frame frame;
    S_vv1 *v1;
    S_vv3 *v3;
    int t1;
    int v2;
    int k;
    call_8c0e196c((void *)(((char *)o + 0x2c)), (void *)((void *)0x8c33f23c));
    operation_8c0e226c((int)(o->f30->f00), (int)(g_8c467180->f2c->f2b0));
    operation_8c0e226c((int)(o->f30->f3c), (int)(g_8c467180->f2c->f2c4));
    t1 = lookup_low_id((int)g_8c418248);
    if (t1 != 0) {
        v1 = (S_vv1 *)(t1 + 0x6dc);
        call_8c0e2278((void *)(o->f30->f04), (int)(t1 + 0x7e4), 0x20);
        (&frame)->f00 = (int)v1->f08;
        v2 = (int)0;
        (&frame)->f04 = (int)v1->f18;
        (&frame)->f08 = (int)v1->f38;
        (&frame)->f0c = (int)v1->f28;
        while (4 > v2) {
            k = v2 * 3;
            t1 = (int)(*(Arg0_30_0 **)((char *)&o->f30->f00 + (k + 2 << 2)));
            v3 = (S_vv3 *)*(Arg0_30_0 **)((char *)&o->f30->f00 + (k + 4 << 2));
            operation_8c0e226c(t1, (int)(*(S_g8c467180_2c_0 **)((char *)((char *)g_8c467180->f2c + 0x0) + (v2 + 0xad << 2))));
            v3->f20 = (int)(*(int *)((char *)&(&frame)->f00 + (v2 << 2)));
            v2 = (int)(v2 + 1);
        }
    }
}
