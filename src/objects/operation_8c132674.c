typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d9a80 S_g8c4d9a80;
typedef struct S_g8c4d9a84 S_g8c4d9a84;
typedef struct S_g8c4d9a84_0 S_g8c4d9a84_0;
struct S_g8c4d9a84 {
    S_g8c4d9a84_0 *f00;
};
extern void call_8c37d534(void *);
extern void call_8c011ec0(void *);
extern void call_8c03dc40(void *, int);
extern void call_8c18de08(S_g8c4d9a84 *);
void operation_8c132674(void)
{
    call_8c37d534((void *)((*(S_g8c4d9a84 **)0x8c4d9a84)->f00));
    call_8c011ec0((void *)((*(S_g8c4d9a84 **)0x8c4d9a84)->f00));
    if (*(int *)0x8c4d9a80 != 0) {
        call_8c03dc40((void *)(*(S_g8c4d9a80 **)0x8c4d9a80), 1);
    }
    if (*(int *)0x8c4d9a84 != 0) {
        call_8c18de08((S_g8c4d9a84 *)(*(S_g8c4d9a84 **)0x8c4d9a84));
    }
}
