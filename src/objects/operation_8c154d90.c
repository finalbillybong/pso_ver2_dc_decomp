typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Object Object;
typedef struct Arg0_dc Arg0_dc;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0xdc];
    Arg0_dc *fdc;
};
struct S_vv1 {
    int f00;
};
extern void call_8c047b24(Object *, int, int, int, Block8);
void operation_8c154d90(Object *o, int a1, int a2, Block8 sp)
{
    int v2;
    int v3;
    int m;
    char *t1;
    v2 = 0x800000;
    m = 0x8000000;
    for (v3 = 0; v3 < 4; v3++) {
        t1 = (char *)o->fdc + 0x18;
        if ((m & *(int *)(t1 + v3 * 0x2c)) != 0) {
            *(int *)((char *)o + 0x3a4) |= v2;
        }
        v2 <<= 1;
    }
    call_8c047b24(o, a1, a2, v3, sp);
}
