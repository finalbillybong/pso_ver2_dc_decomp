typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct S_vv3 S_vv3;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0xc];
    float f40;
    char unknown44[0x26];
    char f6a;
};
struct S_vv3 {
    char unknown0[0x8];
    float f08;
    char unknownc[0x4];
    float f10;
};
struct Arg0_30_0 {
    int f00;
};
extern void operation_8c0dc854(void *);
void operation_8c1bd9a4(Object *o, float f0)
{
    int v1;
    S_vv3 *v3;
    float v2;
    int v4;
    o->f40 = f0;
    operation_8c0dc854((void *)o);
    v1 = (int)0;
    v2 = (float)((o->f40 - 18.0f) * 0.5f + (float)(o->f6a * 0xc) * 0.5f - 6.0f);
    while (o->f6a > v1) {
        v3 = (S_vv3 *)*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (v1 << 2));
        v3->f08 = v2 + v3->f10 * 0.5f;
        v1 = (int)(v1 + 1);
        v2 = (float)(v2 - 12.0f);
    }
    v4 = (int)v1;
    while (6 > v4) {
        (*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (v4 << 2)))->f00 |= 2;
        v4 = (int)(v4 + 1);
    }
}
