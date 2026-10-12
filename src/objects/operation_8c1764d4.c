typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db684 S_g8c4db684;
typedef struct S_g8c4db684_8 S_g8c4db684_8;
struct S_g8c4db684 {
    char unknown0[0x8];
    S_g8c4db684_8 *f08;
};
struct S_g8c4db684_8 {
    char unknown0[0x8];
    int f08;
};
void operation_8c1764d4(void)
{
    if (*(int *)0x8c4db684 != 0) {
        ((void (*)(S_g8c4db684 *, int))((*(S_g8c4db684 **)0x8c4db684)->f08->f08))(*(S_g8c4db684 **)0x8c4db684, 1);
    }
    *(int *)0x8c4db684 = 0;
}
