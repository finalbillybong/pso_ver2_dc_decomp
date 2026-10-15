typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44bea0 S_g8c44bea0;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
typedef struct S_vv1 S_vv1;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x10];
    Arg0_30 *f30;
    char unknown34[0x4];
    float f38;
    float f3c;
    float f40;
    float f44;
    char unknown48[0x20];
    char f68;
    char f69;
    char unknown6a[0x2];
    int f6c;
};
struct Arg1 {
    float f00;
    float f04;
};
struct Arg2 {
    float f00;
    float f04;
};
struct Arg0_30 {
    Arg0_30_0 *f00;
};
struct S_vv1 {
    char unknown0[0x10];
    float f10;
    float f14;
};
extern void initialize_base_8c0db1d0(void *, int);
extern void call_8c0dc854(Object *);
extern int operation_8c22bec0(int);
Object *operation_8c22ca64(Object *o, Arg1 *a1, Arg2 *a2)
{
    Object **home = &o;
    S_vv1 *v1;
    int t1;
    (void)home;
    initialize_base_8c0db1d0((void *)o, (int)((void *)0x8c33846c));
    o->dispatch = (void *)0x8c278e84;
    o->tag = (int)(*(int *)0x8c338430);
    o->size = 0x74;
    o->f38 = a1->f00;
    o->f3c = a1->f04;
    o->f40 = a2->f00;
    o->f44 = a2->f04;
    call_8c0dc854(o);
    v1 = (S_vv1 *)o->f30->f00;
    v1->f10 = a2->f00;
    v1->f14 = a2->f04;
    t1 = operation_8c22bec0((int)(*(S_g8c44bea0 **)0x8c44bea0));
    o->f6c = (int)(t1);
    o->f69 = 0;
    o->f68 = 2;
    return o;
}
