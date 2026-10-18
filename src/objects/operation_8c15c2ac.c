typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
struct Object {
    char unknown0[0x24];
    int f24;
    Arg0_28 *f28;
};
struct S_c8c122700 {
    char unknown0[0x398];
    void *f398;
    void *f39c;
};
extern S_g8c44be98 *g_8c44be98;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c4db120;
extern int g_8c4db130;
extern int g_8c4db134;
extern void call_8c220b80(int, int);
extern S_c8c122700 *allocate_block(void *, unsigned int);
extern void operation_8c19c15c(void *, int, int, int);
extern void call_8c01d9dc(void);
void operation_8c15c2ac(Object *o)
{
    S_c8c122700 *t1;
    if (g_8c4db120 > 0x3c) {
        call_8c220b80(0x3b, 1);
        g_8c4db130 = 0x45;
        g_8c4db134 = 2;
        o->f24 = 0x10;
        return;
    }
    call_8c220b80(0x37, 1);
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0x3a0);
    if (t1 != 0) {
        operation_8c19c15c((void *)t1, (int)g_8c44be98, (int)o, (int)(o->f28));
    }
    t1->f398 = (void *)0x8c15c764;
    t1->f39c = (void *)0x8c15c780;
    call_8c01d9dc();
    o->f24 = 0x11;
}
