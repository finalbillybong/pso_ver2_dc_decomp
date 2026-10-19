typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_1f4 Arg0_1f4;
typedef struct S_vv4 S_vv4;
struct S_vv4 {
    char unknown0[0x4];
    short f04;
};
void operation_8c07f06c(Object *o, int a1)
{
    int v2;
    S_vv4 *v4;
    int v1;
    v2 = (int)0;
    v1 = (int)-5;
    o = (Object *)((char *)o + 0x1f4);
    while (v2 != 2) {
        v4 = (S_vv4 *)*(Arg0_1f4 **)((char *)o + (v2 << 2));
        if (v4 != 0) {
            if (a1 != 0) {
                v4->f04 &= v1;
            } else {
                v4->f04 |= 4;
            }
        }
        v2 = (int)(v2 + 1);
    }
}
