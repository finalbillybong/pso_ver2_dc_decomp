typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46f3a4 S_g8c46f3a4;
typedef struct S_g8c46f3b0 S_g8c46f3b0;
typedef struct S_g8c46f3d0 S_g8c46f3d0;
typedef struct S_g8c46f3d4 S_g8c46f3d4;
typedef struct S_g8c46f3d8 S_g8c46f3d8;
extern void call_8c18de08(void *);
extern void destroy_vector_grid(void *, int);
extern void call_8c03dc40(void *, int);
void operation_8c0bcbec(void)
{
    if (*(int *)0x8c46f3a4 != 0) {
        call_8c18de08((void *)(*(S_g8c46f3a4 **)0x8c46f3a4));
    }
    if (*(int *)0x8c46f3d0 != 0) {
        destroy_vector_grid((void *)(*(S_g8c46f3d0 **)0x8c46f3d0), 1);
    }
    if (*(int *)0x8c46f3d4 != 0) {
        destroy_vector_grid((void *)(*(S_g8c46f3d4 **)0x8c46f3d4), 1);
    }
    if (*(int *)0x8c46f3d8 != 0) {
        destroy_vector_grid((void *)(*(S_g8c46f3d8 **)0x8c46f3d8), 1);
    }
    if (*(int *)0x8c46f3b0 != 0) {
        call_8c03dc40((void *)(*(S_g8c46f3b0 **)0x8c46f3b0), 1);
    }
}
