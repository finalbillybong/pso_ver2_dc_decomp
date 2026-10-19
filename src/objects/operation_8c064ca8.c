typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4688a0 S_g8c4688a0;
typedef struct S_g8c4688a0_42c S_g8c4688a0_42c;
typedef struct Object Object;
typedef struct Block_p0_324 {
    float f00;
    float f04;
    float f08;
} Block_p0_324;
struct Object {
    char unknown0[0x28];
    int f28;
    char unknown2c[0xc];
    int f38;
    float f3c;
    float f40;
    float f44;
    char unknown48[0x30];
    Vector3 f78;
    char unknown84[0x2a0];
    Block_p0_324 f324;
    char unknown330[0x40];
    float f370;
    float f374;
    char unknown378[0x7c];
    int f3f4;
    int f3f8;
    char unknown3fc[0x2c];
    float f428;
};
struct S_g8c4688a0 {
    char unknown0[0x42c];
    S_g8c4688a0_42c *f42c;
};
struct S_g8c4688a0_42c {
    char unknown0[0x8];
    int f08;
    int f0c;
    char unknown10[0x8];
    int f18;
};
extern S_g8c4688a0 *g_8c4688a0;
extern char g_8c4688dc[];
extern int call_8c05a0a8(void);
extern float call_8c12b570(float);
extern void detach_effect_node(void *, void *, void *);
extern void append_effect_node(void *, void *, void *);
void operation_8c064ca8(Object *o)
{
    int v1;
    int t1;
    float t2;
    t1 = call_8c05a0a8();
    if (t1 != 0) {
        v1 = (int)o->f3f4;
        t2 = call_8c12b570(o->f370);
        o->f3f8 = (int)t2;
        if (!(1.0f > o->f374)) {
            o->f3f4 = 1;
            o->f38 = (int)(g_8c4688a0->f42c->f18);
            o->f28 = (int)(g_8c4688a0->f42c->f0c);
        } else {
            o->f3f4 = 0;
            o->f38 = (int)(g_8c4688a0->f42c->f08);
            o->f28 = (int)(g_8c4688a0->f42c->f0c);
        }
        if (v1 != o->f3f4) {
            if (v1 != 0) {
                detach_effect_node((void *)(((char *)o + 0x3e8)), (void *)((void *)g_8c4688dc), (void *)((g_8c4688dc + 0x4)));
            } else {
                append_effect_node((void *)(((char *)o + 0x3e8)), (void *)((void *)g_8c4688dc), (void *)((g_8c4688dc + 0x4)));
            }
        }
        o->f324.f00 = o->f3c;
        o->f324.f04 = o->f428 + (o->f40 + 10.0f);
        o->f324.f08 = o->f44;
        *(Vector3 *)&o->f78 = *(Vector3 *)&o->f324;
    }
}
