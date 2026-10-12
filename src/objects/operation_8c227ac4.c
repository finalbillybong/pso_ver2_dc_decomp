typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c011ecc S_c8c011ecc;
struct S_c8c011ecc {
    char unknown0[0x4];
    int f04;
};
extern S_c8c011ecc *call_8c011ecc(int);
extern void call_8c193658(int, void *, int);
void operation_8c227ac4(void)
{
    S_c8c011ecc *t1;
    t1 = call_8c011ecc(8);
    if (t1 != 0) {
        call_8c193658((int)t1, (void *)0x8c2e19f0, 0x3000);
    }
    *(S_c8c011ecc **)0x8c506164 = t1;
    if (t1 != 0) {
        *(int *)0x8c506160 = t1->f04;
    }
}
