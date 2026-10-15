typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct S_vv21 S_vv21;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x30];
    int f64;
    char unknown68[0x18];
    unsigned char f80;
    unsigned char f81;
    unsigned char f82;
    char unknown83[0x1];
    short f84;
};
struct Arg0_30 {
    Arg0_30_0 *f00;
};
struct S_vv21 {
    int f00;
    char unknown4[0x20];
    int f24;
};
extern void call_8c0df720(Object *, int);
extern void operation_8c0e1bbc(void *);
extern void call_8c0e196c(void *, void *);
extern void call_8c0e2278(S_vv21 *, int, int);
extern void call_8c0e2328(S_vv21 *, float);
extern int call_8c257e3c(int, int);
extern float operation_8c2097e4(void);
extern void call_8c05fbf8(int, int, int, int);
void operation_8c0df7d8(Object *o, int a1, int a2)
{
    S_vv21 *v21;
    int t1;
    float t2;
    call_8c0df720(o, a2);
    o->f81 &= -5;
    if ((o->f82) != 0) {
        o->f82 = 0;
        operation_8c0e1bbc((void *)(((char *)o + 0x2c)));
        call_8c0e196c((void *)(((char *)o + 0x2c)), (void *)((void *)0x8c3074b4));
    }
    v21 = (S_vv21 *)o->f30->f00;
    if (((a2 & 1)) != 0) {
        call_8c0e2278(v21, a1, 0x20);
    } else {
        call_8c0e2278(v21, a1, 0);
    }
    if (((a2 & 4)) != 0) {
        v21->f00 |= 0x40;
        call_8c0e2328(v21, 1000000.0f);
    } else {
        call_8c0e2328(v21, 200.0f);
    }
    v21->f24 = -0x1000000;
    t1 = call_8c257e3c(a1, 0x100);
    o->f84 = (int)((float)(unsigned int)t1 * 3.3f + 55.5f);
    t2 = operation_8c2097e4();
    if (t2 > 0.0f) {
        o->f64 = 0;
    }
    call_8c05fbf8(0x50005, 0, 0, 0);
    if ((o->f80) != 0) {
        o->f80 = 5;
    }
}
