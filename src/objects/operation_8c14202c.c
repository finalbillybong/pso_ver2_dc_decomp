typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d9ea4 S_g8c4d9ea4;
typedef struct Object Object;
typedef struct S_x95536 S_x95536;
typedef struct S_x96144 S_x96144;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    int f20;
    int f24;
    int f28;
    char unknown2c[0x4];
    int f30;
    char unknown34[0xe0];
    int f114;
    float f118;
    float f11c;
    int f120;
    int f124;
    int f128;
    int f12c;
    float f130;
    float f134;
    float f138;
    float f13c;
    float f140;
    char unknown144[0xc];
    int f150;
    char unknown154[0x4];
    int f158;
};
struct S_x95536 {
    Vector3 f00;
};
struct S_x96144 {
    Vector3 f00;
};
struct S_g8c4d9ea4 {
    char unknown0[0x4];
    int f04;
};
extern int g_8c314a38;
extern S_g8c4d9ea4 *g_8c4d9ea4;
extern char g_8c4da184[];
extern void initialize_hierarchy_node(void *, void *);
extern int call_8c12b944(void);
Object *operation_8c14202c(Object *o, int a1, int a2, int a3)
{
    Object **home = &o;
    int v1;
    int t2;
    char *t3;
    int v2;
    char *t4;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c26df40;
    v1 = 0;
    o->tag = (g_8c314a38);
    o->size = (short)0x15c;
    o->f114 = a2;
    o->f30 = a3;
    o->f20 = 0;
    o->f24 = 0;
    (void)home;
    o->f28 = 0;
    for (; v1 < 0xe; ) {
        a3 = v1 * 0xc;
        t4 = (char *)(int *)(0x34 + (char *)o) + v1 * 0xc;
        *(&((S_x95536 *)(t4))->f00) = *(&((S_x96144 *)(g_8c4da184 + a3))->f00);
        v2 = v1 << 2;
        a2 = v1 + 1;
        t3 = (char *)o + 0xdc;
        a1 = a2;
        *(int *)((v2) + (t3)) = *(int *)((char *)0x8c4da22c + (v2));
        v1 = a1;
    }
    a2 = call_8c12b944();
    a1 = a2;
    o->f118 = (float)(unsigned int)(-1 + g_8c4d9ea4->f04) * ((float)a1 / 32768.0f);
    o->f11c = 0.8f;
    o->f120 = 0;
    o->f124 = 0;
    o->f128 = 0x5ef;
    t2 = call_8c12b944();
    a1 = (int)(65536.0f * ((float)t2 / 32768.0f));
    o->f12c = a1;
    o->f13c = 0.0f;
    o->f140 = 0.0f;
    o->f150 = 0;
    o->f158 = 0x78;
    o->f130 = 0.0f;
    o->f134 = 0.0f;
    o->f138 = 0.0f;
    return o;
}
