typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Object Object;
typedef struct Arg0_3a0 Arg0_3a0;
typedef struct Block_p0_3a8 {
    float f00;
    float f04;
    float f08;
} Block_p0_3a8;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    unsigned short f20;
    char unknown22[0x1e];
    float f40;
    char unknown44[0x34c];
    int f390;
    char unknown394[0x4];
    int f398;
    char unknown39c[0x4];
    Arg0_3a0 *f3a0;
    char unknown3a4[0x4];
    Block_p0_3a8 f3a8;
    float f3b4;
    char unknown3b8[0x4];
    float f3bc;
};
struct S_c8c021ef8 {
    char unknown0[0x3c];
    Vector3 f3c;
};
struct Arg0_3a0 {
    char unknown0[0x18];
    int f18;
};
extern float g_8c327e24[];
extern void call_8c1bb138(Object *, int, int);
extern int call_8c04a52c(Object *, int, float);
extern S_c8c021ef8 *lookup_low_id(int);
extern void call_8c37f6f0(void *, void *);
extern float call_8c37e480(void *);
extern void call_8c37b630(void *);
Object *operation_8c1bc800(Object *o, int a1, int a2)
{
    Object **home = &o;
    int t1;
    S_c8c021ef8 *t2;
    float t3;
    int idx;
    int off;
    (void)home;
    call_8c1bb138(o, a1, a2);
    o->dispatch = (void *)0x8c275098;
    o->tag = (int)(*(int *)0x8c327e20);
    o->size = 0x3e0;
    t1 = call_8c04a52c(o, 0, 100.0f);
    if ((unsigned short)t1 != 0xffff) {
        t2 = lookup_low_id((int)((unsigned short)t1));
        if (t2 != 0) {
            goto L_8c1bc852;
        }
    }
    o->f3a8.f08 = 0.0f;
    o->f3a8.f00 = 0.0f;
    goto L_8c1bc898;
L_8c1bc852:;
    off = 0x3a8;
    *(Vector3 *)((char *)o + off) = *(Vector3 *)&t2->f3c;
    idx = (o->f20 & 3) << 3;
    *(float *)((char *)o + off) += *(float *)((char *)g_8c327e24 + idx);
    o->f3a8.f08 = *(float *)((char *)(g_8c327e24 + 1) + idx) + o->f3a8.f08;
L_8c1bc898:;
    call_8c37f6f0((void *)(&o->f3a8), (void *)(((char *)o + 0x3c)));
    o->f3a8.f04 = 0.0f;
    t3 = call_8c37e480((void *)(&o->f3a8));
    if (t3 == 0.0f) {
        o->f3a8.f00 = 1.0f;
        o->f3a8.f08 = 0.0f;
    } else {
        call_8c37b630((void *)(&o->f3a8));
    }
    o->f3b4 = o->f3bc;
    o->f3a8.f00 *= o->f3b4;
    o->f3a8.f08 *= o->f3b4;
    o->f40 = -13.0f;
    o->f398 = 0x96;
    o->f390 = 0;
    o->f3a0->f18 |= 1;
    return o;
}
