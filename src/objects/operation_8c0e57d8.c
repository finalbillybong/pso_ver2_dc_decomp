typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fe60 S_g8c46fe60;
typedef struct S_g8c46fe64 S_g8c46fe64;
typedef struct S_g8c46fe68 S_g8c46fe68;
typedef struct S_g8c46fe6c S_g8c46fe6c;
typedef struct S_g8c46fe70 S_g8c46fe70;
typedef struct S_g8c46fe74 S_g8c46fe74;
typedef struct S_g8c46fe78 S_g8c46fe78;
extern void call_8c18de08(void *);
extern void destroy_vector_grid(void *, int);
extern void call_8c03dc40(void *, int);
void operation_8c0e57d8(void)
{
    if (*(int *)0x8c46fe60 != 0) {
        call_8c18de08((void *)(*(S_g8c46fe60 **)0x8c46fe60));
    }
    if (*(int *)0x8c46fe64 != 0) {
        call_8c18de08((void *)(*(S_g8c46fe64 **)0x8c46fe64));
    }
    if (*(int *)0x8c46fe68 != 0) {
        call_8c18de08((void *)(*(S_g8c46fe68 **)0x8c46fe68));
    }
    if (*(int *)0x8c46fe6c != 0) {
        call_8c18de08((void *)(*(S_g8c46fe6c **)0x8c46fe6c));
    }
    if (*(int *)0x8c46fe78 != 0) {
        destroy_vector_grid((void *)(*(S_g8c46fe78 **)0x8c46fe78), 1);
    }
    if (*(int *)0x8c46fe74 != 0) {
        destroy_vector_grid((void *)(*(S_g8c46fe74 **)0x8c46fe74), 1);
    }
    if (*(int *)0x8c46fe70 != 0) {
        call_8c03dc40((void *)(*(S_g8c46fe70 **)0x8c46fe70), 1);
    }
}
