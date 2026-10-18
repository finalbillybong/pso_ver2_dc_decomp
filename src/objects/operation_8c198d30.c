typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct S_vv3 S_vv3;
typedef struct S_x95760 S_x95760;
struct S_vv3 {
    char unknown0[0xdc];
    int fdc;
    int fe0;
};
struct S_x95760 {
    int f00;
};
void operation_8c198d30(Object *o)
{
    int v2;
    S_vv3 *v3;
    int v4;
    int v1;
    v1 = (int)-2;
    v2 = (int)0;
    while (3 > v2) {
        v3 = (S_vv3 *)*(Arg0_20 **)((char *)((char *)o + 0x20) + (v2 << 2));
        v4 = (int)0;
        while (v3->fe0 > v4) {
            ((S_x95760 *)(v3->fdc + 0x18 + v4 * 0x2c))->f00 &= v1;
            v4 = (int)(v4 + 1);
        }
        v2 = (int)(v2 + 1);
    }
}
