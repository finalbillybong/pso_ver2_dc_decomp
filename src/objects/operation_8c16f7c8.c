typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_g8c46fe20_4c S_g8c46fe20_4c;
struct S_g8c46fe20 {
    char unknown0[0x4c];
    S_g8c46fe20_4c *f4c;
};
extern void request_resource_release(void *);
void operation_8c16f7c8(void)
{
    if (*(int *)0x8c46fe20 != 0 && (*(S_g8c46fe20 **)0x8c46fe20)->f4c != 0) {
        request_resource_release((void *)((*(S_g8c46fe20 **)0x8c46fe20)->f4c));
        (*(S_g8c46fe20 **)0x8c46fe20)->f4c = (S_g8c46fe20_4c *)0;
    }
}
