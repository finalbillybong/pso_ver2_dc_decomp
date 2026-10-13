typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c462a00 S_g8c462a00;
typedef struct S_g8c462a04 S_g8c462a04;
typedef struct S_g8c462a08 S_g8c462a08;
typedef struct S_g8c462a0c S_g8c462a0c;
typedef struct S_g8c462a10 S_g8c462a10;
typedef struct S_g8c462a14 S_g8c462a14;
extern void call_8c18de08(void *);
extern void destroy_vector_grid(void *, int);
extern void call_8c03dc40(void *, int);
void operation_8c0386b8(void)
{
    if (*(int *)0x8c462a00 != 0) {
        call_8c18de08((void *)(*(S_g8c462a00 **)0x8c462a00));
    }
    if (*(int *)0x8c462a04 != 0) {
        call_8c18de08((void *)(*(S_g8c462a04 **)0x8c462a04));
    }
    if (*(int *)0x8c462a08 != 0) {
        call_8c18de08((void *)(*(S_g8c462a08 **)0x8c462a08));
    }
    if (*(int *)0x8c462a0c != 0) {
        call_8c18de08((void *)(*(S_g8c462a0c **)0x8c462a0c));
    }
    if (*(int *)0x8c462a14 != 0) {
        destroy_vector_grid((void *)(*(S_g8c462a14 **)0x8c462a14), 1);
    }
    if (*(int *)0x8c462a10 != 0) {
        call_8c03dc40((void *)(*(S_g8c462a10 **)0x8c462a10), 1);
    }
}
