typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
typedef struct Arg1_24 Arg1_24;
typedef struct S_vv3 S_vv3;
typedef struct S_vv3_0 S_vv3_0;
struct Arg1 {
    char unknown0[0x24];
    Arg1_24 *f24;
    char unknown28[0x8];
    int f30;
};
struct S_vv3 {
    S_vv3_0 *f00;
    char unknown4[0x4];
    int f08;
};
extern void call_8c3c14a0(void);
extern void call_8c3c1f82(void *);
void operation_8c0319fc(int a0, Arg1 *a1, int a2)
{
    S_vv3 *v3;
    int v4;
    int v1;
    int v2;
    call_8c3c14a0();
    v2 = (int)a2;
    v3 = (S_vv3 *)a1->f24;
    v4 = (int)0;
    v1 = (int)0x1000;
    while (a1->f30 > v4) {
        if (v2 != 0) {
            if (((v3->f08 & v1)) == 0) {
                goto L_8c031a42;
            }
            if (v3->f00 == 0) {
                goto L_8c031a42;
            }
            call_8c3c1f82((void *)(v3->f00));
        } else {
            if (v3->f00 != 0) {
                call_8c3c1f82((void *)(v3->f00));
            }
        }
L_8c031a42:;
        v4 = (int)(v4 + 1);
        v3 = (S_vv3 *)((char *)v3 + 12);
    }
}
