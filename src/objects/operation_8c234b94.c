typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Object Object;
struct Object {
    char unknown0[0x3c];
    char f3c;
};
struct S_L8c41cba0 {
    char unknown0[0xa0];
    int fa0;
};
extern S_L8c41cba0 g_8c41cba0;
void operation_8c234b94(Object *o)
{
    int v3;
    char v2;
    char v1;
    int idx;
    idx = o->f3c;
    v1 = *(char *)((char *)((char *)o + 0x4d) + idx);
    v2 = *(char *)((char *)((char *)o + 0x3e) + idx);
    v3 = (&g_8c41cba0)->fa0;
    if ((v3 & 0x40) != 0) {
        v2 -= 1;
        if (v2 < 0) {
            v2 = v1 - 1;
        }
    } else if ((v3 & 0x80) != 0) {
        v2 += 1;
        if (v2 >= v1) {
            v2 = 0;
        }
    }
    *(char *)((char *)((char *)o + 0x3e) + idx) = v2;
}
