typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block128 {
    int words[32];
} Block128;
typedef struct S_vv1 S_vv1;
typedef struct Block_vv1_0 {
    char unknown0[0x78];
    char f78;
    char f79;
    char f7a;
    char f7b;
    char f7c;
    char unknown7d[0x3];
} Block_vv1_0;
struct S_vv1 {
    Block_vv1_0 f00;
};
extern unsigned short g_8c46fe24;
extern Block128 g_8c4e2fa4;
extern int call_8c1dc8b4(S_vv1 *);
void operation_8c1dc9e4(int a0)
{
    S_vv1 *v1;
    int v2;
    int v3;
    int v5;
    int v7;
    int v9;
    int t1;
    v1 = (S_vv1 *)(a0 + 4);
    if (v1->f00.f78 != 0) {
        v9 = (int)1;
    } else {
        if (v1->f00.f79 != 1) {
            v7 = (int)1;
        } else {
            if (!(v1->f00.f7a >= 0)) {
                v5 = (int)1;
            } else {
                if (!(v1->f00.f7b >= 0)) {
                    v3 = (int)1;
                } else {
                    if (!(v1->f00.f7c >= 0)) {
                        v2 = (int)1;
                    } else {
                        v2 = (int)0;
                    }
                    v3 = (int)v2;
                }
                v5 = (int)v3;
            }
            v7 = (int)v5;
        }
        v9 = (int)v7;
    }
    if (v9 == 0) {
        t1 = call_8c1dc8b4(v1);
        if (t1 == 0 && ((g_8c46fe24 & 2)) == 0) {
            g_8c46fe24 |= 2;
            *(Block128 *)&g_8c4e2fa4 = *(Block128 *)&v1->f00;
        }
    }
}
