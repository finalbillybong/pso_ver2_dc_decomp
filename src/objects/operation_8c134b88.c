typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d9ac0 S_g8c4d9ac0;
typedef struct S_g8c4d9ac4 S_g8c4d9ac4;
typedef struct S_g8c4d9ac4_0 S_g8c4d9ac4_0;
struct S_g8c4d9ac4 {
    S_g8c4d9ac4_0 *f00;
};
extern void call_8c37d534(void *);
extern void call_8c011ec0(void *);
extern void call_8c03dc40(void *, int);
extern void call_8c18de08(S_g8c4d9ac4 *);
void operation_8c134b88(void)
{
    call_8c37d534((void *)((*(S_g8c4d9ac4 **)0x8c4d9ac4)->f00));
    call_8c011ec0((void *)((*(S_g8c4d9ac4 **)0x8c4d9ac4)->f00));
    if (*(int *)0x8c4d9ac0 != 0) {
        call_8c03dc40((void *)(*(S_g8c4d9ac0 **)0x8c4d9ac0), 1);
    }
    if (*(int *)0x8c4d9ac4 != 0) {
        call_8c18de08((S_g8c4d9ac4 *)(*(S_g8c4d9ac4 **)0x8c4d9ac4));
    }
}
