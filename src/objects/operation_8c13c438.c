typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d9c38 S_g8c4d9c38;
typedef struct S_g8c4d9c38_8 S_g8c4d9c38_8;
struct S_g8c4d9c38 {
    char unknown0[0x8];
    S_g8c4d9c38_8 *f08;
};
struct S_g8c4d9c38_8 {
    char unknown0[0x8];
    int f08;
};
void operation_8c13c438(void)
{
    if (*(int *)0x8c4d9c38 != 0) {
        ((void (*)(S_g8c4d9c38 *, int))((*(S_g8c4d9c38 **)0x8c4d9c38)->f08->f08))(*(S_g8c4d9c38 **)0x8c4d9c38, 1);
    }
    *(int *)0x8c4d9c38 = 0;
}
