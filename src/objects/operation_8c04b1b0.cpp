typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467120 S_g8c467120;
typedef struct S_g8c467124 S_g8c467124;
typedef struct S_g8c467128 S_g8c467128;
typedef struct S_g8c467130 S_g8c467130;
class S_g8c467138 {
public:
    char unknown0[0x18];
    virtual void v0(int);
};
typedef struct S_g8c467138Data {

} S_g8c467138Data;
extern "C" void call_8c37d534(void *);
extern "C" void call_8c18de08(void *);
extern "C" void call_8c011ec0(void *);
extern "C" void operation_8c04b1b0(void)
{
    if (*(int *)0x8c467138 != 0) {
        (*(S_g8c467138 **)0x8c467138)->v0(1);
    }
    call_8c37d534((void *)0x8c2f1bf0);
    call_8c18de08(*(S_g8c467130 **)0x8c467130);
    call_8c18de08(*(S_g8c467128 **)0x8c467128);
    call_8c18de08(*(S_g8c467124 **)0x8c467124);
    call_8c011ec0(*(S_g8c467120 **)0x8c467120);
}
