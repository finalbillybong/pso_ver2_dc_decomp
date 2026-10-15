typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
struct Object {
    int tag;
    char unknown4[0x1a];
    short size;
    char unknown20[0x10];
    Arg0_30 *f30;
    char unknown34[0x1c];
    float f50;
    float f54;
    char unknown58[0x10];
    float f68;
    float f6c;
    char unknown70[0x10];
    short f80;
    short f82;
    short f84;
    short f86;
    short f88;
    char unknown8a[0x2];
    int f8c;
    int f90;
    int f94;
};
struct Arg0_30_0 {
    char unknown0[0xc];
    float f0c;
};
void operation_8c1cd0bc(Object *o, unsigned int a1)
{
    unsigned int v1;
    o->tag = (int)(*(int *)0x8c3292a8);
    o->size = 0x98;
    o->f68 = o->f50 * 0.5f;
    o->f6c = o->f54 * 0.5f;
    o->f82 = 0;
    o->f84 = 0;
    o->f86 = a1;
    o->f88 = 0;
    o->f8c = 0;
    o->f80 = 0;
    o->f90 = 0;
    o->f94 = 0;
    v1 = (unsigned int)0;
    while (a1 > v1) {
        (*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (v1 << 2)))->f0c = (float)(unsigned int)(v1 * 0x14);
        v1 = (unsigned int)(v1 + 1);
    }
}
