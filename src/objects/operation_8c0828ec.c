typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c469c24 S_L8c469c24;
typedef struct S_L8c469c24_4 S_L8c469c24_4;
typedef struct Object Object;
typedef struct Arg0_100 Arg0_100;
struct Object {
    char unknown0[0xf0];
    float ff0;
    char unknownf4[0x8];
    float ffc;
    Arg0_100 *f100;
};
struct S_L8c469c24 {
    char unknown0[0x4];
    S_L8c469c24_4 *f04;
};
struct S_L8c469c24_4 {
    char unknown0[0x4];
    int f04;
};
extern S_L8c469c24 g_8c469c24;
extern float call_8c37eb0c(void *);
void operation_8c0828ec(Object *o)
{
    float t1;
    o->ff0 += 2.0f;
    if (o->ff0 > (float)(unsigned int)((&g_8c469c24)->f04->f04 + -1)) {
        o->ff0 = 0.0f;
    }
    *(int *)((char *)o + 0x100) += 0x300;
    t1 = call_8c37eb0c((void *)(o->f100));
    o->ffc = t1 * 0.2f + 0.4f;
}
