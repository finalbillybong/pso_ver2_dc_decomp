typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c011ecc S_c8c011ecc;
typedef struct S_g8c513420 S_g8c513420;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    int f00;
    int f04;
    int f08;
};
struct S_c8c011ecc {
    int f00;
};
extern S_g8c513420 *g_8c513420;
extern int g_8c513424;
extern int g_8c513428;
extern char g_8c3404e0[];
extern int call_8c18de4c(int);
extern void call_8c12b154(int, void *, int);
extern S_c8c011ecc *call_8c011ecc(int);
extern int operation_8c104d70(int);
extern int call_8c0787cc(int, int);
extern void call_8c3877a8(int, void *);
extern void call_8c18de08(int);
extern void call_8c011ec0(int);
void operation_8c25cb30(void)
{
    int v2;
    S_vv1 *v1;
    int t1;
    int t2;
    S_c8c011ecc *t3;
    int t4;
    int t5;
    int t6;
    t4 = (int)(g_8c3404e0 + 0x11);
    t1 = call_8c18de4c(0x1c);
    g_8c513428 = (int)(t1);
    call_8c12b154(t1, (void *)t4, 0x1b);
    t2 = call_8c18de4c(0xcc);
    g_8c513424 = (int)(t2);
    v1 = (S_vv1 *)t2;
    v2 = (int)0;
    while (v2 != 0x11) {
        v1->f00 = (int)(g_8c513428);
        v1->f04 = 0;
        v1->f08 = 0;
        v2 = (int)(v2 + 1);
        v1 = (S_vv1 *)((char *)v1 + 12);
    }
    t3 = call_8c011ecc(8);
    g_8c513420 = (S_g8c513420 *)t3;
    t3->f00 = (int)(g_8c513424);
    t4 = operation_8c104d70(t4);
    if (t4 != 0) {
        t5 = call_8c18de4c(0x200000);
        if (t5 != 0) {
            t6 = call_8c0787cc(t4, t5);
            if (t6 > 0) {
                call_8c3877a8(t5, g_8c513420);
            }
        }
        call_8c18de08(t5);
    }
    call_8c011ec0(t4);
}
