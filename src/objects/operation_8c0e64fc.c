typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fe80 S_g8c46fe80;
typedef struct S_g8c46fe84 S_g8c46fe84;
typedef struct S_g8c46fe88 S_g8c46fe88;
typedef struct S_g8c46fe8c S_g8c46fe8c;
typedef struct S_g8c46fe90 S_g8c46fe90;
typedef struct S_g8c46feac S_g8c46feac;
typedef struct S_g8c46feb0 S_g8c46feb0;
extern void call_8c18de08(void *);
extern void destroy_vector_grid(void *, int);
extern void call_8c03dc40(void *, int);
void operation_8c0e64fc(void)
{
    if (*(int *)0x8c46fe80 != 0) {
        call_8c18de08((void *)(*(S_g8c46fe80 **)0x8c46fe80));
    }
    if (*(int *)0x8c46fe84 != 0) {
        call_8c18de08((void *)(*(S_g8c46fe84 **)0x8c46fe84));
    }
    if (*(int *)0x8c46fe88 != 0) {
        call_8c18de08((void *)(*(S_g8c46fe88 **)0x8c46fe88));
    }
    if (*(int *)0x8c46fe8c != 0) {
        call_8c18de08((void *)(*(S_g8c46fe8c **)0x8c46fe8c));
    }
    if (*(int *)0x8c46feb0 != 0) {
        destroy_vector_grid((void *)(*(S_g8c46feb0 **)0x8c46feb0), 1);
    }
    if (*(int *)0x8c46feac != 0) {
        destroy_vector_grid((void *)(*(S_g8c46feac **)0x8c46feac), 1);
    }
    if (*(int *)0x8c46fe90 != 0) {
        call_8c03dc40((void *)(*(S_g8c46fe90 **)0x8c46fe90), 1);
    }
}
