typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db9e8 S_g8c4db9e8;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char unknown0[0x31fd];
    char f31fd;
};
extern void call_8c388984(int, int, int);
typedef struct Sub9 { char pad[0x31f9]; char f; } Sub9;
void operation_8c1dc638(int a0)
{
    S_vv1 *v1;
    int v7;
    v1 = (S_vv1 *)*(S_g8c4db9e8 **)0x8c4db9e8;
    if (0x63 > a0) {
        v7 = (int)((int)v1 + 4 + (a0 << 7));
        call_8c388984(v7, (int)(v7 + 0x80), (int)((unsigned int)0x63 - a0 << 7 >> 2));
    }
    ((Sub9 *)((char *)v1 + 4))->f = (unsigned int)((Sub9 *)((char *)v1 + 4))->f >> 1 << 1;
}
