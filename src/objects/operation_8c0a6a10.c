typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c3032d8 S_g8c3032d8;
typedef struct S_vv2 S_vv2;
typedef struct S_vv2_20 S_vv2_20;
struct S_vv2 {
    char unknown0[0x20];
    S_vv2_20 *f20;
    char unknown24[0x10];
    int f34;
    char unknown38[0x5c];
    int f94;
};
struct S_vv2_20 {
    char unknown0[0x64];
    int f64;
};
extern unsigned char g_8c46efc8;
extern int angle_difference(int, int);
extern int call_8c0a6ab4(S_vv2 *, int);
void operation_8c0a6a10(void)
{
    unsigned char v1;
    S_vv2 *v2;
    int v4;
    int v8;
    int t1;
    int v3;
    int v7;
    int t2;
    int t3;
    int t4;
    int pm5;
    v1 = (unsigned char)g_8c46efc8;
    if (v1 == 0) {
        v2 = (S_vv2 *)*(S_g8c3032d8 **)((char *)0x8c3032d8 + (v1 << 2));
        v2->f94 = 1;
        if (v2->f20 != 0) {
            int t2;
            int pm6;
            v3 = (int)v2->f20->f64;
            t1 = angle_difference((int)(v2->f34), (int)(v3 + 0x6000));
            pm6 = angle_difference((v2->f34), (int)(v3 + -0x6000));
            t2 = pm6;
            if (t2 < t1) {
                v8 = (int)(v3 + -0x6000);
                v7 = (int)(v3 + 0x6000);
            } else {
                v4 = (int)(v3 + 0x6000);
                pm5 = v3 + -0x6000;
                v7 = (int)(pm5);
                v8 = (int)v4;
            }
            t3 = call_8c0a6ab4(v2, v8);
            if (t3 != 0) {
                t4 = call_8c0a6ab4(v2, v7);
                if (t4 != 0) {
                    return;
                }
                v2->f34 = (int)(v7);
                return;
            }
            v2->f34 = (int)(v8);
        }
    }
}
