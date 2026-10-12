typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db680 S_g8c4db680;
typedef struct S_g8c4db680_8 S_g8c4db680_8;
struct S_g8c4db680 {
    char unknown0[0x8];
    S_g8c4db680_8 *f08;
};
struct S_g8c4db680_8 {
    char unknown0[0x8];
    int f08;
};
void operation_8c176048(void)
{
    if (*(int *)0x8c4db680 != 0) {
        ((void (*)(S_g8c4db680 *, int))((*(S_g8c4db680 **)0x8c4db680)->f08->f08))(*(S_g8c4db680 **)0x8c4db680, 1);
    }
    *(int *)0x8c4db680 = 0;
}
