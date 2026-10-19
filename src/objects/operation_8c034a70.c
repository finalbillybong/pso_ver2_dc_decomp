typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c2f574c S_L8c2f574c;
typedef struct S_g8c284750 S_g8c284750;
typedef struct S_g8c2ebff8 S_g8c2ebff8;
typedef struct S_g8c2f574c S_g8c2f574c;
typedef struct S_g8c2f5754 S_g8c2f5754;
struct S_L8c2f574c {
    char unknown0[0x8];
    S_g8c2f5754 *f08;
};
extern S_L8c2f574c g_8c2f574c;
extern char g_8c2ec0a0[];
extern int operation_8c104da8(void);
extern int call_8c34ca46(void *, void *, void *, void *);
void operation_8c034a70(void)
{
    int v1;
    int v3;
    int v2;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    t1 = operation_8c104da8();
    if (t1 == 0) {
        v1 = (int)0;
        while (0xe > v1) {
            t2 = operation_8c104da8();
            if (t2 != 0) {
                return;
            }
            v2 = (int)(v1 << 2);
            v3 = (int)(v1 << 4);
            t3 = call_8c34ca46((void *)(*(S_g8c2f574c **)((char *)&g_8c2f574c + (v3))), (void *)(*(S_g8c2f5754 **)((char *)&g_8c2f574c.f08 + (v3))), (void *)(*(S_g8c2ebff8 **)((char *)0x8c2ebff8 + (v2))), (void *)(*(S_g8c284750 **)((char *)0x8c284750 + (v2))));
            if (t3 != 0) {
                t4 = operation_8c104da8();
                if (t4 == 0) {
                    return;
                }
                return;
            }
            v1 = (int)(v1 + 1);
        }
        t5 = operation_8c104da8();
        if (t5 == 0) {
            t6 = call_8c34ca46((void *)0xd6, (void *)((g_8c2ec0a0 + 0x46e)), (void *)((void *)0x8c461854), (void *)0x118);
            if (t6 != 0) {
                t7 = operation_8c104da8();
                if (t7 == 0) {
                    return;
                }
            }
        }
    }
}
