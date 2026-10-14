typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e2300 S_g8c4e2300;
typedef struct S_g8c4e2304 S_g8c4e2304;
typedef struct S_g8c4e2304_0 S_g8c4e2304_0;
struct S_g8c4e2304 {
    S_g8c4e2304_0 *f00;
};
extern void call_8c37d534(void *);
extern void call_8c011ec0(void *);
extern void call_8c03dc40(void *, int);
extern void call_8c18de08(S_g8c4e2304 *);
void operation_8c1af0fc(void)
{
    call_8c37d534((void *)((*(S_g8c4e2304 **)0x8c4e2304)->f00));
    call_8c011ec0((void *)((*(S_g8c4e2304 **)0x8c4e2304)->f00));
    if (*(int *)0x8c4e2300 != 0) {
        call_8c03dc40((void *)(*(S_g8c4e2300 **)0x8c4e2300), 1);
    }
    if (*(int *)0x8c4e2304 != 0) {
        call_8c18de08((S_g8c4e2304 *)(*(S_g8c4e2304 **)0x8c4e2304));
    }
}
