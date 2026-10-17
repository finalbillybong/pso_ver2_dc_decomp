typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4d9b64 S_L8c4d9b64;
typedef struct S_g8c3131c0 S_g8c3131c0;
typedef struct S_g8c467240 S_g8c467240;
typedef struct S_vv12 S_vv12;
struct S_L8c4d9b64 {
    float f00;
    float f04;
    float f08;
};
struct S_vv12 {
    char unknown0[0x20];
    unsigned short f20;
};
extern int g_8c467874;
extern S_L8c4d9b64 g_8c4d9b64;
extern char g_8c313190[];
extern int operation_8c01c25c(void);
extern int operation_8c0c349c(void);
extern void call_8c13a344(S_vv12 *, int, void *);
extern void call_8c139fc4(int);
void operation_8c138598(int a0)
{
    float v2;
    int v11;
    int v9;
    int v5;
    S_vv12 *v12;
    int v3;
    int v10;
    int t1;
    int t2;
    (&g_8c4d9b64)->f00 = 0.0f;
    (&g_8c4d9b64)->f04 = 0.0f;
    v2 = (float)0.0f;
    if (a0 != 0) {
        v2 = (float)-5000.0f;
    }
    v3 = (int)0;
    (&g_8c4d9b64)->f08 = v2;
    t1 = operation_8c01c25c();
    if (t1 == 0x10) {
        t2 = operation_8c0c349c();
        if (t2 == 0) {
            goto L_8c1385d6;
        }
        v5 = (int)1;
    } else {
        v5 = (int)1;
    }
    v3 = (int)v5;
L_8c1385d6:;
    if (v3 != 0) {
        if (a0 != 0) {
            v9 = (int)0xc000;
            v11 = (int)0;
            v10 = (int)0x37c;
            while (g_8c467874 > v11) {
                v12 = (S_vv12 *)*(S_g8c467240 **)((char *)0x8c467240 + (v11 << 2));
                if (v12 != 0 && ((v12->f20 & v9)) == 0 && *(int *)((char *)((char *)v12 + 0x0) + (v10)) == 0xd) {
                    call_8c13a344(v12, (int)(v11 * 0xc + g_8c313190), (void *)(*(S_g8c3131c0 **)((char *)0x8c3131c0 + (v11 << 2))));
                }
                v11 = (int)(v11 + 1);
            }
            v3 = (int)v10;
        }
        call_8c139fc4(a0);
    }
}
