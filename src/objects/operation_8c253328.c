typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_g8c46fe20_50 S_g8c46fe20_50;
struct S_g8c46fe20 {
    char unknown0[0x50];
    S_g8c46fe20_50 *f50;
};
extern void request_resource_release(void *);
void operation_8c253328(void)
{
    if (*(int *)0x8c46fe20 != 0) {
        if ((*(S_g8c46fe20 **)0x8c46fe20)->f50 != 0) {
            request_resource_release((*(S_g8c46fe20 **)0x8c46fe20)->f50);
            (*(S_g8c46fe20 **)0x8c46fe20)->f50 = 0;
        }
    }
}
