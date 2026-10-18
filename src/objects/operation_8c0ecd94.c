typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_3c S_g8c467180_3c;
typedef struct Object Object;
typedef struct S_vv17_0 S_vv17_0;
struct S_g8c467180 {
    char unknown0[0x3c];
    S_g8c467180_3c *f3c;
};
struct S_g8c467180_3c {
    int f00;
    char unknown4[0x14];
    int f18;
};
struct Object {
    char unknown0[0x28];
    int f28;
    char unknown2c[0x150];
    float f17c;
    float f180;
    float f184;
    float f188;
};
extern S_g8c467180 *g_8c467180;
extern int call_8c04b8dc(int);
void operation_8c0ecd94(Object *o)
{
    char *v18;
    char *v16;
    char *v17;
    int t1;
    int t2;
    int t3;
    v18 = (char *)g_8c467180->f3c->f00;
    t1 = call_8c04b8dc((int)(v18));
    o->f17c = (640.0f - (float)(unsigned int)t1) / 2.0f;
    o->f180 = 375.0f;
    if (o->f28 == 3) {
        v16 = (char *)g_8c467180->f3c->f18;
        t2 = call_8c04b8dc((int)(v16));
        o->f184 = (640.0f - (float)(unsigned int)t2) / 2.0f;
    } else {
        v17 = (char *)g_8c467180->f3c;
        t3 = call_8c04b8dc((int)(*(S_vv17_0 **)((char *)((char *)v17 + 0x0) + ((int)o->f28 + 1 << 2))));
        o->f184 = (640.0f - (float)(unsigned int)t3) / 2.0f;
    }
    o->f188 = o->f180 + 20.0f;
}
