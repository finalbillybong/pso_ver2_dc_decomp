typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db200 S_g8c4db200;
typedef struct S_g8c4db204 S_g8c4db204;
typedef struct S_g8c4db204_0 S_g8c4db204_0;
struct S_g8c4db204 {
    S_g8c4db204_0 *f00;
};
extern void call_8c37d534(void *);
extern void call_8c011ec0(void *);
extern void call_8c03dc40(void *, int);
extern void call_8c18de08(S_g8c4db204 *);
void operation_8c161f88(void)
{
    call_8c37d534((void *)((*(S_g8c4db204 **)0x8c4db204)->f00));
    call_8c011ec0((void *)((*(S_g8c4db204 **)0x8c4db204)->f00));
    if (*(int *)0x8c4db200 != 0) {
        call_8c03dc40((void *)(*(S_g8c4db200 **)0x8c4db200), 1);
    }
    if (*(int *)0x8c4db204 != 0) {
        call_8c18de08((S_g8c4db204 *)(*(S_g8c4db204 **)0x8c4db204));
    }
}
