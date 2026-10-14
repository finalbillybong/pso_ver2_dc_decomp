typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db140 S_g8c4db140;
typedef struct S_g8c4db144 S_g8c4db144;
typedef struct S_g8c4db144_0 S_g8c4db144_0;
typedef struct S_g8c4db144_8 S_g8c4db144_8;
typedef struct S_g8c4db144_c S_g8c4db144_c;
struct S_g8c4db144 {
    S_g8c4db144_0 *f00;
    char unknown4[0x4];
    S_g8c4db144_8 *f08;
    S_g8c4db144_c *f0c;
};
extern void call_8c37d534(void *);
extern void call_8c011ec0(void *);
extern void call_8c18de08(S_g8c4db144 *);
extern void call_8c03dc40(void *, int);
void operation_8c15cdf0(void)
{
    call_8c37d534((void *)((*(S_g8c4db144 **)0x8c4db144)->f00));
    call_8c37d534((void *)((*(S_g8c4db144 **)0x8c4db144)->f0c));
    call_8c37d534((void *)((*(S_g8c4db144 **)0x8c4db144)->f08));
    call_8c011ec0((void *)((*(S_g8c4db144 **)0x8c4db144)->f00));
    call_8c011ec0((void *)((*(S_g8c4db144 **)0x8c4db144)->f0c));
    call_8c011ec0((void *)((*(S_g8c4db144 **)0x8c4db144)->f08));
    if (*(int *)0x8c4db144 != 0) {
        call_8c18de08((S_g8c4db144 *)(*(S_g8c4db144 **)0x8c4db144));
    }
    if (*(int *)0x8c4db140 != 0) {
        call_8c03dc40((void *)(*(S_g8c4db140 **)0x8c4db140), 1);
    }
}
