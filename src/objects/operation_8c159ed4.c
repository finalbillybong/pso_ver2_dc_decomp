typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dab08 S_g8c4dab08;
typedef struct S_g8c4dab08_8 S_g8c4dab08_8;
struct S_g8c4dab08 {
    char unknown0[0x8];
    S_g8c4dab08_8 *f08;
};
struct S_g8c4dab08_8 {
    char unknown0[0x8];
    int f08;
};
void operation_8c159ed4(void)
{
    if (*(int *)0x8c4dab08 != 0) {
        ((void (*)(S_g8c4dab08 *, int))((*(S_g8c4dab08 **)0x8c4dab08)->f08->f08))(*(S_g8c4dab08 **)0x8c4dab08, 1);
    }
    *(int *)0x8c4dab08 = 0;
}
