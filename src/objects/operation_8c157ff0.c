typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c011ecc S_c8c011ecc;
typedef struct S_g8c3163fc S_g8c3163fc;
struct S_c8c011ecc {
    char unknown0[0x4];
    int f04;
};
extern S_c8c011ecc *call_8c011ecc(int);
extern void call_8c193658(int, void *, int);
void operation_8c157ff0(void)
{
    S_c8c011ecc *t1;
    t1 = call_8c011ecc(8);
    if (t1 != 0) {
        call_8c193658((int)t1, *(S_g8c3163fc **)0x8c3163fc, 0x6800);
    }
    *(S_c8c011ecc **)0x8c4daaa0 = t1;
    if (t1 != 0) {
        *(int *)0x8c4daaa4 = t1->f04;
    }
}
