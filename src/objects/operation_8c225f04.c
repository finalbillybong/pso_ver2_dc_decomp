typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c506144 S_g8c506144;
typedef struct S_g8c506144_0 S_g8c506144_0;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    int f20;
    char unknown24[0x4];
    float f28;
    char unknown2c[0x1900];
    int f192c;
    float f1930;
    float f1934;
    float f1938;
    float f193c;
    float f1940;
    float f1944;
    float f1948;
    float f194c;
    float f1950;
    float f1954;
    float f1958;
    float f195c;
    float f1960;
    float f1964;
    float f1968;
    float f196c;
    char unknown1970[0x20];
    float f1990;
};
struct S_vv1 {
    char unknown0[0x192c];
    int f192c;
};
struct S_g8c506144_0 {
    char f00;
};
extern int g_8c506140;
extern S_g8c506144 *g_8c506144;
extern void initialize_hierarchy_node(void *, void *);
extern int operation_8c01c434(void);
Object *operation_8c225f04(Object *o, int a1)
{
    Object **home = &o;
    int t1;
    int off;
    Object *v1;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c278b2c;
    o->f20 = 0;
    o->f28 = 0.0f;
    g_8c506140 = 0;
    o->f192c = 0;
    off = 0x192c;
    while ((v1 = o, (*(S_g8c506144_0 **)((char *)((char *)g_8c506144 + 0x0) + (*(int *)((char *)v1 + off) << 2)))->f00 != 0x2a)) {
        *(int *)((char *)v1 + off) += 1;
    }
    o->f1930 = 0.0f;
    o->f1934 = 0.0f;
    o->f1938 = 0.0f;
    o->f193c = 0.0f;
    o->f1940 = 0.0f;
    o->f1944 = 0.0f;
    o->f1948 = 1.0f;
    o->f194c = 1.0f;
    o->f1950 = 0.0f;
    o->f1954 = 0.0f;
    o->f1958 = 0.0f;
    o->f195c = 0.0f;
    o->f1960 = 0.0f;
    o->f1964 = 0.0f;
    o->f1968 = 1.0f;
    o->f196c = 1.0f;
    t1 = operation_8c01c434();
    switch (t1) {
    case 0:
        o->f1990 = 2.0f;
        break;
    case 1:
        o->f1990 = 2.4f;
        break;
    }
    return o;
}
