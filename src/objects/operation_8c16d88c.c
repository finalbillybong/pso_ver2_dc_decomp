typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_g8c46fe20_54 S_g8c46fe20_54;
typedef struct S_g8c4db40c S_g8c4db40c;
struct S_g8c46fe20 {
    char unknown0[0x20];
    short f20;
    char unknown22[0x32];
    S_g8c46fe20_54 *f54;
};
struct S_g8c46fe20_54 {
    char unknown0[0x22];
    short f22;
};
extern void request_resource_release(void *);
void operation_8c16d88c(void)
{
    if (*(int *)0x8c4db40c != 0) {
        request_resource_release((void *)(*(S_g8c4db40c **)0x8c4db40c));
        *(int *)0x8c4db40c = 0;
    }
    if (*(int *)0x8c46fe20 != 0) {
        (*(S_g8c46fe20 **)0x8c46fe20)->f20 &= -0x81;
    }
    if (*(int *)0x8c46fe20 != 0) {
        (*(S_g8c46fe20 **)0x8c46fe20)->f20 &= -3;
    }
    if (*(int *)0x8c46fe20 != 0 && (*(S_g8c46fe20 **)0x8c46fe20)->f54 != 0) {
        (*(S_g8c46fe20 **)0x8c46fe20)->f54->f22 &= -9;
    }
    if (*(int *)0x8c46fe20 != 0) {
        (*(S_g8c46fe20 **)0x8c46fe20)->f20 &= -0x11;
    }
}
