typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46f3b4 S_g8c46f3b4;
typedef struct Object Object;
typedef struct Arg0_184 Arg0_184;
typedef struct Arg0_334 Arg0_334;
typedef struct Block_p0_324 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_324;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    Vector3 f3c;
    char unknown48[0x30];
    Vector3 f78;
    char unknown84[0xfc];
    float f180;
    Arg0_184 *f184;
    char unknown188[0x182];
    short f30a;
    char unknown30c[0x18];
    Block_p0_324 f324;
    char unknown330[0x4];
    Arg0_334 *f334;
    char unknown338[0x58];
    int f390;
    char unknown394[0x6];
    short f39a;
};
struct Arg0_334 {
    char unknown0[0x34];
    int f34;
};
struct Arg0_184 {
    char unknown0[0x10];
    float f10;
};
extern int g_8c418244;
extern S_g8c46f3b4 *g_8c46f3b4;
extern int g_8c46f3b8;
extern void call_8c0344f0(void *, int, int, int);
extern int operation_8c03d338(void);
extern void operation_8c0bf850(Object *);
extern void initialize_link_node_8c0bd6c8(void *);
extern void call_8c0bda08(Object *);
extern void call_8c0bdabc(Object *);
extern void call_8c0bdbc4(Object *);
extern void call_8c0be124(Object *);
extern void call_8c0be6a4(Object *);
extern void call_8c0be9bc(Object *);
extern void call_8c0bef68(Object *);
extern void operation_8c0bf250(void *);
extern void call_8c0bf3a4(Object *);
extern void call_8c0bf544(Object *);
extern void call_8c0bd718(Object *);
extern void call_8c0bf6b8(Object *);
void operation_8c0bccc0(Object *o)
{
    int v2;
    int v1;
    int t1;
    v1 = (int)g_8c418244;
    v2 = (int)g_8c46f3b8;
    if (v2 != v1) {
        g_8c46f3b8 = (int)(v1);
        call_8c0344f0(g_8c46f3b4, 0xe, 0, 0);
    }
    t1 = operation_8c03d338();
    if (t1 == 1) {
        operation_8c0bf850(o);
        return;
    }
    switch (o->f30a) {
    case 0:
        initialize_link_node_8c0bd6c8((void *)o);
        break;
    case 1:
        call_8c0bda08(o);
        break;
    case 2:
        call_8c0bdabc(o);
        break;
    case 3:
        call_8c0bdbc4(o);
        break;
    case 4:
        call_8c0be124(o);
        break;
    case 5:
        call_8c0be6a4(o);
        break;
    case 6:
        call_8c0be9bc(o);
        break;
    case 7:
        call_8c0bef68(o);
        break;
    case 8:
        operation_8c0bf250((void *)o);
        break;
    case 9:
        call_8c0bf3a4(o);
        break;
    case 10:
        call_8c0bf544(o);
        break;
    case 11:
        call_8c0bd718(o);
    }
    if (o->f334 != 0 && ((o->f334->f34 & 0x2000800)) != 0) {
        o->f39a = 0;
        o->f34 &= -0x200001;
        {
            int *pf1 = (int *)((char *)o + 0x390);
            *pf1 = (unsigned int)*pf1 >> 0x10 << 0x10;
        }
        o->f390 |= 0x40;
        o->f334 = (Arg0_334 *)0;
    }
    *(Vector3 *)&o->f324 = *(Vector3 *)&o->f3c;
    if (o->f184 != 0) {
        o->f324.f04 += o->f184->f10 * 0.5f;
    }
    *(Vector3 *)&o->f78 = *(Vector3 *)&o->f324;
    call_8c0bf6b8(o);
    o->f180 += 1.0f;
}
