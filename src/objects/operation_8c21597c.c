typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
typedef struct S_vv1 S_vv1;
typedef struct S_vv10 S_vv10;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x10];
    Arg0_30 *f30;
    char unknown34[0x30];
    int f64;
    int f68;
    Block8 f6c;
    Block8 f74;
};
struct Arg1 {
    Block8 f00;
};
struct Arg2 {
    Block8 f00;
};
struct Arg0_30 {
    Arg0_30_0 *f00;
};
struct S_vv1 {
    char unknown0[0x8];
    float f08;
    float f0c;
};
struct S_vv10 {
    char unknown0[0x24];
    int f24;
};
extern void initialize_base_8c0db1d0(void *, int);
extern void call_8c0e2278(S_vv1 *, int, int);
extern void call_8c0e2328(S_vv1 *, float);
extern void initialize_fields_8c0e24e8(void *);
Object *operation_8c21597c(Object *o, Arg1 *a1, Arg2 *a2, int a3, int a4)
{
    Object **home = &o;
    S_vv1 *v1;
    S_vv10 *v10;
    (void)home;
    initialize_base_8c0db1d0((void *)o, (int)((void *)0x8c336004));
    o->dispatch = (void *)0x8c278278;
    o->tag = (int)(*(int *)0x8c336024);
    o->size = 0x7c;
    *(Block8 *)&o->f6c = *(Block8 *)&a1->f00;
    *(Block8 *)&o->f74 = *(Block8 *)&a2->f00;
    o->f68 = a4;
    v10 = (S_vv10 *)o->f30->f00;
    if (o->f30->f00 != 0) {
        v1 = (S_vv1 *)o->f30->f00;
        call_8c0e2278(v1, a3, 0x80);
        v1->f08 = 0.0f;
        v1->f0c = 0.0f;
        call_8c0e2328(v1, 1000000.0f);
        initialize_fields_8c0e24e8((void *)v1);
        v10 = (S_vv10 *)v1;
    }
    if (o->f68 != 1 && o->f68 != 3) {
    } else {
        v10->f24 = (int)(*(int *)0x8c2e16f4);
    }
    o->f64 = 0x1000000;
    return o;
}
