typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c462a10 S_g8c462a10;
typedef struct S_g8c462a10_42c S_g8c462a10_42c;
typedef struct Object Object;
struct Object {
    char unknown0[0x28];
    int f28;
    char unknown2c[0xc];
    int f38;
    char unknown3c[0x348];
    int f384;
    char unknown388[0x4];
    int f38c;
};
struct S_g8c462a10 {
    char unknown0[0x42c];
    S_g8c462a10_42c *f42c;
};
struct S_g8c462a10_42c {
    char unknown0[0x18];
    int f18;
    int f1c;
    char unknown20[0x8];
    int f28;
    int f2c;
};
extern S_g8c462a10 *g_8c462a10;
extern float object_random_fraction(void *);
void operation_8c03af0c(Object *o)
{
    int v22;
    float t1;
    v22 = (int)o->f384;
    if (v22 >= 1) {
        o->f384 = 1;
        o->f38c = 2;
        o->f38 = (int)(g_8c462a10->f42c->f28);
        o->f28 = (int)(g_8c462a10->f42c->f2c);
        return;
    }
    if (!(v22 > 0)) {
        t1 = object_random_fraction((void *)o);
        if (0.001f > t1) {
            o->f384 = 1;
            o->f38c = 2;
            o->f38 = (int)(g_8c462a10->f42c->f28);
            o->f28 = (int)(g_8c462a10->f42c->f2c);
            return;
        }
        o->f384 = 0;
        o->f38c = 1;
        o->f38 = (int)(g_8c462a10->f42c->f18);
        o->f28 = (int)(g_8c462a10->f42c->f1c);
    }
}
