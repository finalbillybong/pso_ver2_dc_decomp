typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct S_vv5 S_vv5;
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
struct S_vv5 {
    char unknown0[0x10];
    float f10;
    float f14;
    char unknown18[0x8];
    int f20;
};
extern void operation_8c0dc854(void *);
void operation_8c156f50(Object *o)
{
    float v6;
    S_vv5 *v5;
    unsigned int v4;
    int v1;
    float v2;
    float v16;
    float v3;
    float v7;
    float v15;
    v2 = 0.0f;
    v3 = (float)0.0f;
    v4 = (unsigned int)0;
    v1 = (int)o->f86;
    while (v1 > v4) {
        v5 = (S_vv5 *)*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (v4 << 2));
        if (v5->f20 != 0) {
            v6 = (float)v5->f10;
            if (v6 > v2) {
                v2 = (float)v6;
            }
            v7 = (float)v5->f14;
            if (v7 > 0.0f) {
                v3 = (float)(v3 + (v7 + 2.0f));
            }
        }
        v4 = (unsigned int)(v4 + 1);
    }
    v16 = (float)(v3 - 2.0f);
    v15 = (float)v16;
    o->f8c = v16;
    if (((o->f34 & 0x40)) != 0) {
        v15 = (float)(v16 + 2.0f);
    }
    o->f40 = v2 + 18.0f;
    o->f44 = v15 + 26.0f;
    operation_8c0dc854((void *)o);
    o->f68 = o->f50 * 0.5f;
    o->f6c = o->f54 * 0.5f;
}
