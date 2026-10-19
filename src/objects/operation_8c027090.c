typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv2 S_vv2;
typedef struct S_vv2_0 S_vv2_0;
typedef struct S_vv5 S_vv5;
typedef struct S_vv5_0 S_vv5_0;
typedef struct S_vv9 S_vv9;
struct S_vv2 {
    S_vv2_0 *f00;
};
struct S_vv5 {
    char unknown0[0x308];
    short f308;
};
struct S_vv9 {
    char unknown0[0x40];
    int f40;
};
extern void call_8c0da20c(void *, int, S_vv5 *, int);
void operation_8c027090(int a0)
{
    int v10;
    int v7;
    int v3;
    int v6;
    S_vv5 *v5;
    S_vv2 *v2;
    S_vv9 *v9;
    int v1;
    if (a0 != 0) {
        v2 = (S_vv2 *)(void *)0x8c41ce2c;
        v3 = (int)0;
        v1 = (int)0x3b8;
        while (4 > v3) {
            v5 = (S_vv5 *)(v2++)->f00;
            if (v5 != 0) {
                v6 = (int)(v5->f308 == 2);
                if (v6 == 0 && *(int *)((char *)((char *)v5 + 0x0) + (v1)) != 0) {
                    v7 = (int)0;
                    while (4 > v7) {
                        v9 = (S_vv9 *)*(S_vv5_0 **)((char *)((char *)v5 + 0x0) + (v1));
                        v9 = (S_vv9 *)((int)v9 + v7 * 0xfc);
                        v10 = (int)(((v9->f40 & 1)) != 0);
                        if (v10 != 0) {
                            call_8c0da20c((void *)((int)v9 + 0x40), a0, v5, (int)(*(int *)((char *)((char *)v5 + 0x0) + (v1)) + 0x458));
                        }
                        v7 = (int)(v7 + 1);
                    }
                }
            }
            v3 = (int)(v3 + 1);
        }
    }
}
