typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x34];
    int f68;
};
struct Arg0_30 {
    Arg0_30_0 *f00;
};
struct Arg0_30_0 {
    char unknown0[0x8];
    float f08;
};
extern char g_8c336730[];
extern int call_8c04b8dc(void *);
void operation_8c21e090(Object *o)
{
    float v3;
    int t1;
    o->f68 = (unsigned int)o->f68 >> 1 << 1;
    t1 = call_8c04b8dc((void *)((g_8c336730 + 0x25)));
    v3 = (float)(float)(unsigned int)t1;
    o->f30->f00->f08 = 52.0f - v3 * 0.5f;
}
