typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dbba0 S_g8c4dbba0;
typedef struct S_vv3 S_vv3;
typedef struct S_vv6 S_vv6;
typedef struct S_vv7 S_vv7;
struct S_vv3 {
    char unknown0[0x8];
    int f08;
};
struct S_vv6 {
    char unknown0[0x4];
    short f04;
};
struct S_vv7 {
    short f00;
};
extern int operation_8c186fd4(void);
void operation_8c186f7c(int a0, int a1)
{
    int v1;
    S_vv3 *v3;
    int v2;
    int v4;
    S_vv7 *v7;
    S_vv6 *v6;
    int v5;
    int t1;
    t1 = operation_8c186fd4();
    if (t1 == a1) {
        v1 = (int)0;
        v2 = (int)a0;
        while (0x12 > v1) {
            v3 = (S_vv3 *)*(S_g8c4dbba0 **)((char *)0x8c4dbba0 + (v1 << 2));
            if (v3 != 0) {
                v4 = (int)v3->f08;
                v5 = (int)0;
                v6 = (S_vv6 *)((int)v3 + 0x10);
                v7 = (S_vv7 *)v2;
                while (v4 > v5) {
                    v6->f04 = v7->f00;
                    v5 = (int)(v5 + 1);
                    v7 = (S_vv7 *)((char *)v7 + 2);
                    v6 = (S_vv6 *)((char *)v6 + 20);
                }
                v2 = (int)v7;
            }
            v1 = (int)(v1 + 1);
        }
    }
}
