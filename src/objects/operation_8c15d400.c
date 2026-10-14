typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db160 S_g8c4db160;
typedef struct S_g8c4db164 S_g8c4db164;
typedef struct S_g8c4db164_0 S_g8c4db164_0;
struct S_g8c4db164 {
    S_g8c4db164_0 *f00;
};
extern void call_8c37d534(void *);
extern void call_8c011ec0(void *);
extern void call_8c18de08(S_g8c4db164 *);
extern void call_8c03dc40(void *, int);
void operation_8c15d400(void)
{
    call_8c37d534((void *)((*(S_g8c4db164 **)0x8c4db164)->f00));
    call_8c011ec0((void *)((*(S_g8c4db164 **)0x8c4db164)->f00));
    if (*(int *)0x8c4db164 != 0) {
        call_8c18de08((S_g8c4db164 *)(*(S_g8c4db164 **)0x8c4db164));
    }
    if (*(int *)0x8c4db160 != 0) {
        call_8c03dc40((void *)(*(S_g8c4db160 **)0x8c4db160), 1);
    }
}
