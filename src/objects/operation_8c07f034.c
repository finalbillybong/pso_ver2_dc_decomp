typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469b60 S_g8c469b60;
typedef struct S_g8c469b60_4 S_g8c469b60_4;
typedef struct S_g8c469b60_4_14 S_g8c469b60_4_14;
typedef struct Object Object;
struct Object {
    char unknown0[0x136];
    unsigned char f136;
};
struct S_g8c469b60 {
    char unknown0[0x4];
    S_g8c469b60_4 *f04;
};
struct S_g8c469b60_4 {
    char unknown0[0x14];
    S_g8c469b60_4_14 *f14;
};
extern S_g8c469b60 *g_8c469b60;
int operation_8c07f034(Object *o)
{
    unsigned char v1;
    v1 = o->f136;
    if (v1 >= 0x39) {
        v1 = 0x39;
    }
    if (0x39 >= v1) {
        return *(char *)((char *)g_8c469b60->f04->f14 + v1);
    }
    return 0;
}
