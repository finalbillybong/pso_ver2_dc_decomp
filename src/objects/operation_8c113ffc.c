typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d8240 S_g8c4d8240;
typedef struct S_g8c4d8248 S_g8c4d8248;
typedef struct S_g8c4d8248_4 S_g8c4d8248_4;
struct S_g8c4d8248 {
    char unknown0[0x4];
    S_g8c4d8248_4 *f04;
};
extern void call_8c37d534(void *);
extern void call_8c011ec0(void *);
extern void call_8c18de08(S_g8c4d8248 *);
extern void call_8c03dc40(void *, int);
void operation_8c113ffc(void)
{
    call_8c37d534((void *)((*(S_g8c4d8248 **)0x8c4d8248)->f04));
    call_8c011ec0((void *)((*(S_g8c4d8248 **)0x8c4d8248)->f04));
    if (*(int *)0x8c4d8248 != 0) {
        call_8c18de08((S_g8c4d8248 *)(*(S_g8c4d8248 **)0x8c4d8248));
    }
    if (*(int *)0x8c4d8240 != 0) {
        call_8c03dc40((void *)(*(S_g8c4d8240 **)0x8c4d8240), 1);
    }
    *(int *)0x8c4d8244 = 0;
}
