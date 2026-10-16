typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c510b80 S_L8c510b80;
typedef struct S_L8c510b80_c S_L8c510b80_c;
typedef struct Object Object;
struct S_L8c510b80 {
    float f00;
    float f04;
    float f08;
    S_L8c510b80_c *f0c;
    char unknown10[0x2];
    short f12;
    int f14;
};
struct Object {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x328];
    int f370;
};
extern S_L8c510b80 g_8c510b80;
extern void call_8c235a20(Object *, void *);
void operation_8c235fd0(Object *o)
{
    if ((&g_8c510b80)->f12 == 0 && (&g_8c510b80)->f14 >= o->f370) {
        o->f370 = (int)((&g_8c510b80)->f14);
        o->f3c = (&g_8c510b80)->f00;
        o->f40 = (&g_8c510b80)->f04;
        o->f44 = (&g_8c510b80)->f08;
        call_8c235a20(o, (void *)((&g_8c510b80)->f0c));
    }
    (&g_8c510b80)->f12 = 1;
}
