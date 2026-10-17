typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block5884 {
    int words[1471];
} Block5884;
typedef struct S_c8c011ecc S_c8c011ecc;
typedef struct S_g8c4db9ec S_g8c4db9ec;
typedef struct S_vv2 S_vv2;
typedef struct Block_c8c011ecc_0 {
    int f00;
    char unknown4[0x16f8];
} Block_c8c011ecc_0;
typedef struct Block_vv2_0 {
    char unknown0[0x420];
    int f420;
    char unknown424[0x4];
    int f428;
    char unknown42c[0x12d0];
} Block_vv2_0;
struct S_vv2 {
    Block_vv2_0 f00;
};
struct S_c8c011ecc {
    Block_c8c011ecc_0 f00;
};
extern S_c8c011ecc *call_8c011ecc(int);
extern void operation_8c181aa4(void *);
extern void operation_8c02db24(int);
extern int call_8c17e620(S_c8c011ecc *);
extern void call_8c011ed8(S_c8c011ecc *);
int operation_8c1819e8(void)
{
    S_c8c011ecc *t1;
    char *v5;
    S_vv2 *v2;
    int t2;
    v2 = (S_vv2 *)*(S_g8c4db9ec **)0x8c4db9ec;
    if (v2 == 0) {
        return 0;
    }
    if (v2->f00.f428 != -0x5dfa4f9c || ((v2->f00.f420 & 0x10)) != 0) {
        return 5;
    }
    t1 = call_8c011ecc(0x16fc);
    if (t1 != 0) {
        operation_8c181aa4((void *)(((char *)t1 + 0x4)));
        operation_8c02db24((int)(((char *)t1 + 0xc0c)));
    }
    *(Block5884 *)&t1->f00 = *(Block5884 *)&v2->f00;
    v5 = (char *)t1->f00.f00;
    t1->f00.f00 = 0;
    t2 = call_8c17e620(t1);
    call_8c011ed8(t1);
    if ((int)(v5) != t2) {
        return 1;
    }
    return 6;
}
