typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4627e0 S_g8c4627e0;
typedef struct S_g8c4627e4 S_g8c4627e4;
typedef struct S_g8c4627e8 S_g8c4627e8;
typedef struct S_g8c4627ec S_g8c4627ec;
typedef struct S_g8c4627f0 S_g8c4627f0;
typedef struct S_g8c4627f4 S_g8c4627f4;
typedef struct S_g8c4627f8 S_g8c4627f8;
extern void call_8c18de08(void *);
extern void destroy_vector_grid(void *, int);
extern void call_8c03dc40(void *, int);
void operation_8c037574(void)
{
    if (*(int *)0x8c4627e0 != 0) {
        call_8c18de08((void *)(*(S_g8c4627e0 **)0x8c4627e0));
    }
    if (*(int *)0x8c4627e4 != 0) {
        call_8c18de08((void *)(*(S_g8c4627e4 **)0x8c4627e4));
    }
    if (*(int *)0x8c4627e8 != 0) {
        call_8c18de08((void *)(*(S_g8c4627e8 **)0x8c4627e8));
    }
    if (*(int *)0x8c4627ec != 0) {
        call_8c18de08((void *)(*(S_g8c4627ec **)0x8c4627ec));
    }
    if (*(int *)0x8c4627f8 != 0) {
        destroy_vector_grid((void *)(*(S_g8c4627f8 **)0x8c4627f8), 1);
    }
    if (*(int *)0x8c4627f4 != 0) {
        destroy_vector_grid((void *)(*(S_g8c4627f4 **)0x8c4627f4), 1);
    }
    if (*(int *)0x8c4627f0 != 0) {
        call_8c03dc40((void *)(*(S_g8c4627f0 **)0x8c4627f0), 1);
    }
}
