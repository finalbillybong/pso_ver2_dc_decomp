typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d9ae0 S_g8c4d9ae0;
typedef struct S_g8c4d9ae4 S_g8c4d9ae4;
typedef struct S_g8c4d9ae4_0 S_g8c4d9ae4_0;
struct S_g8c4d9ae4 {
    S_g8c4d9ae4_0 *f00;
};
extern void call_8c37d534(void *);
extern void call_8c011ec0(void *);
extern void call_8c18de08(S_g8c4d9ae4 *);
extern void call_8c03dc40(void *, int);
void operation_8c135124(void)
{
    call_8c37d534((void *)((*(S_g8c4d9ae4 **)0x8c4d9ae4)->f00));
    call_8c011ec0((void *)((*(S_g8c4d9ae4 **)0x8c4d9ae4)->f00));
    if (*(int *)0x8c4d9ae4 != 0) {
        call_8c18de08((S_g8c4d9ae4 *)(*(S_g8c4d9ae4 **)0x8c4d9ae4));
    }
    if (*(int *)0x8c4d9ae0 != 0) {
        call_8c03dc40((void *)(*(S_g8c4d9ae0 **)0x8c4d9ae0), 1);
    }
}
