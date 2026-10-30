typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct S_vv4 S_vv4;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    int f34;
    char unknown38[0x8];
    float f40;
    float f44;
    char unknown48[0x8];
    float f50;
    float f54;
    char unknown58[0x10];
    float f68;
    float f6c;
    char unknown70[0x16];
    short f86;
    char unknown88[0x4];
    float f8c;
};
struct S_vv4 {
    char unknown0[0x14];
    float f14;
    char unknown18[0x8];
    int f20;
};
extern void operation_8c0dc854(void *);
void operation_8c15700c(Object *o, float f0)
{
    unsigned int v3;
    float v13;
    float v5;
    int v1;
    float v14;
    float v2;
    v1 = (short)(int)o->f86;
    v3 = (unsigned int)0;
    v2 = (float)0.0f;
    while (v3 < v1) {
        S_vv4 *v4;
        v4 = (S_vv4 *)*(Arg0_30_0 **)((v3 << 2) + (char *)((char *)o->f30 + 0x0));
        if (0 != v4->f20) {
            v5 = (float)v4->f14;
            if (v5 > 0.0f) {
                v2 = (float)(v2 + (v5 + 2.0f));
            }
        }
        v3 = (unsigned int)(v3 + 1);
    }
    v14 = (float)(v2 - 2.0f);
    v13 = (float)v14;
    if (((o->f34 & 0x40)) != 0) {
        v13 = (float)(v14 + 2.0f);
    }
    o->f40 = f0;
    o->f44 = v13 + 26.0f;
    o->f8c = v13;
    operation_8c0dc854((void *)o);
    o->f68 = o->f50 * 0.5f;
    o->f6c = o->f54 * 0.5f;
}
