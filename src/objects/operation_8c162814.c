typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db220 S_g8c4db220;
typedef struct S_g8c4db224 S_g8c4db224;
typedef struct S_g8c4db224_0 S_g8c4db224_0;
struct S_g8c4db224 {
    S_g8c4db224_0 *f00;
};
extern void call_8c37d534(void *);
extern void call_8c011ec0(void *);
extern void call_8c18de08(S_g8c4db224 *);
extern void call_8c03dc40(void *, int);
void operation_8c162814(void)
{
    call_8c37d534((void *)((*(S_g8c4db224 **)0x8c4db224)->f00));
    call_8c011ec0((void *)((*(S_g8c4db224 **)0x8c4db224)->f00));
    if (*(int *)0x8c4db224 != 0) {
        call_8c18de08((S_g8c4db224 *)(*(S_g8c4db224 **)0x8c4db224));
    }
    if (*(int *)0x8c4db220 != 0) {
        call_8c03dc40((void *)(*(S_g8c4db220 **)0x8c4db220), 1);
    }
}
