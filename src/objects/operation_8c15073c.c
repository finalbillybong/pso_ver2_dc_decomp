typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4da6bc S_g8c4da6bc;
typedef struct S_g8c4da6bc_8 S_g8c4da6bc_8;
struct S_g8c4da6bc {
    char unknown0[0x8];
    S_g8c4da6bc_8 *f08;
};
struct S_g8c4da6bc_8 {
    char unknown0[0x8];
    int f08;
};
void operation_8c15073c(void)
{
    if (*(int *)0x8c4da6bc != 0) {
        ((void (*)(S_g8c4da6bc *, int))((*(S_g8c4da6bc **)0x8c4da6bc)->f08->f08))(*(S_g8c4da6bc **)0x8c4da6bc, 1);
    }
    *(int *)0x8c4da6bc = 0;
}
