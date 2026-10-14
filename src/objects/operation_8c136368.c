typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d9b20 S_g8c4d9b20;
typedef struct S_g8c4d9b24 S_g8c4d9b24;
typedef struct S_g8c4d9b24_4 S_g8c4d9b24_4;
struct S_g8c4d9b24 {
    char unknown0[0x4];
    S_g8c4d9b24_4 *f04;
};
extern void call_8c37d534(void *);
extern void call_8c011ec0(void *);
extern void call_8c18de08(S_g8c4d9b24 *);
extern void call_8c03dc40(void *, int);
void operation_8c136368(void)
{
    call_8c37d534((void *)((*(S_g8c4d9b24 **)0x8c4d9b24)->f04));
    call_8c011ec0((void *)((*(S_g8c4d9b24 **)0x8c4d9b24)->f04));
    if (*(int *)0x8c4d9b24 != 0) {
        call_8c18de08((S_g8c4d9b24 *)(*(S_g8c4d9b24 **)0x8c4d9b24));
    }
    if (*(int *)0x8c4d9b20 != 0) {
        call_8c03dc40((void *)(*(S_g8c4d9b20 **)0x8c4d9b20), 1);
    }
}
