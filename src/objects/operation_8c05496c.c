typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4678f4 S_g8c4678f4;
typedef struct S_g8c4678f4_8 S_g8c4678f4_8;
struct S_g8c4678f4 {
    char unknown0[0x8];
    S_g8c4678f4_8 *f08;
};
struct S_g8c4678f4_8 {
    char unknown0[0x8];
    int f08;
};
void operation_8c05496c(void)
{
    if (*(int *)0x8c4678f4 != 0) {
        ((void (*)(S_g8c4678f4 *, int))((*(S_g8c4678f4 **)0x8c4678f4)->f08->f08))(*(S_g8c4678f4 **)0x8c4678f4, 1);
    }
    *(int *)0x8c4678f4 = 0;
}
