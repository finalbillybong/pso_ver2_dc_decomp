typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4705e0 S_g8c4705e0;
typedef struct S_g8c4705e4 S_g8c4705e4;
typedef struct S_g8c4705e4_4 S_g8c4705e4_4;
typedef struct S_g8c4705e4_8 S_g8c4705e4_8;
typedef struct S_g8c4705e4_c S_g8c4705e4_c;
struct S_g8c4705e4 {
    char unknown0[0x4];
    S_g8c4705e4_4 *f04;
    S_g8c4705e4_8 *f08;
    S_g8c4705e4_c *f0c;
};
extern void call_8c37d534(void *);
extern void call_8c011ec0(void *);
extern void call_8c03dc40(void *, int);
extern void call_8c18de08(S_g8c4705e4 *);
void operation_8c0f3230(void)
{
    call_8c37d534((void *)((*(S_g8c4705e4 **)0x8c4705e4)->f04));
    call_8c37d534((void *)((*(S_g8c4705e4 **)0x8c4705e4)->f08));
    call_8c37d534((void *)((*(S_g8c4705e4 **)0x8c4705e4)->f0c));
    call_8c011ec0((void *)((*(S_g8c4705e4 **)0x8c4705e4)->f04));
    call_8c011ec0((void *)((*(S_g8c4705e4 **)0x8c4705e4)->f08));
    call_8c011ec0((void *)((*(S_g8c4705e4 **)0x8c4705e4)->f0c));
    if (*(int *)0x8c4705e0 != 0) {
        call_8c03dc40((void *)(*(S_g8c4705e0 **)0x8c4705e0), 1);
    }
    if (*(int *)0x8c4705e4 != 0) {
        call_8c18de08((S_g8c4705e4 *)(*(S_g8c4705e4 **)0x8c4705e4));
    }
}
