typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c011ecc S_c8c011ecc;
typedef struct S_c8c011ecc_4 S_c8c011ecc_4;
typedef struct S_vv1 S_vv1;
typedef struct S_vv3 S_vv3;
struct S_vv1 {
    int f00;
};
struct S_c8c011ecc {
    char unknown0[0x4];
    S_c8c011ecc_4 *f04;
};
struct S_vv3 {
    int f00;
};
extern char g_8c2feb4c[];
extern int operation_8c105360(int);
extern S_c8c011ecc *call_8c011ecc(int);
extern void call_8c193658(S_c8c011ecc *, void *, int);
void operation_8c07cf34(void)
{
    S_vv3 *v3;
    int t1;
    S_c8c011ecc *t2;
    {
        short i;
        unsigned int *p = (unsigned int *)0x8c004000;
        unsigned int limit = 4096;
        for (i = 0; i < limit; i++) {
            if (*p++) for (;;) {
            }
        }
    }
    t1 = operation_8c105360((int)(g_8c2feb4c + 0x9));
    *(int *)0x8c469b68 = (int)(t1);
    v3 = (S_vv3 *)0;
    t2 = call_8c011ecc(8);
    if (t2 != 0) {
        call_8c193658(t2, (void *)((g_8c2feb4c + 0x1b)), 0x1000);
    }
    *(S_c8c011ecc **)0x8c469b60 = t2;
    if (t2 != 0) {
        v3 = (S_vv3 *)t2->f04;
    }
    if (v3 != 0) {
        *(int *)0x8c469b64 = (int)(v3->f00);
    }
}
