typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4671a4 S_g8c4671a4;
typedef struct S_g8c4671d8 S_g8c4671d8;
typedef struct S_g8c4671dc S_g8c4671dc;
typedef struct S_g8c4671e0 S_g8c4671e0;
extern void call_8c18de08(void *);
extern void destroy_vector_grid(void *, int);
extern void call_8c03dc40(void *, int);
void operation_8c04cc9c(void)
{
    if (*(int *)0x8c4671a4 != 0) {
        call_8c18de08((void *)(*(S_g8c4671a4 **)0x8c4671a4));
    }
    if (*(int *)0x8c4671e0 != 0) {
        destroy_vector_grid((void *)(*(S_g8c4671e0 **)0x8c4671e0), 1);
    }
    if (*(int *)0x8c4671dc != 0) {
        destroy_vector_grid((void *)(*(S_g8c4671dc **)0x8c4671dc), 1);
    }
    if (*(int *)0x8c4671d8 != 0) {
        call_8c03dc40((void *)(*(S_g8c4671d8 **)0x8c4671d8), 1);
    }
}
