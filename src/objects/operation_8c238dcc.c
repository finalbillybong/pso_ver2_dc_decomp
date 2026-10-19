typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv10 S_vv10;
typedef struct S_vv11 S_vv11;
struct S_vv11 {
    int f00;
    int f04;
};
struct S_vv10 {
    int f00;
};
extern int call_8c238eec(void);
extern char g_8c339ca0[];
int operation_8c238dcc(int a0)
{
    S_vv10 *v10;
    S_vv11 *v11;
    int v8;
    int v9;
    int v2;
    int v3;
    int v16;
    int t1;
    if (*(int *)0x8c4db9e4 == 0) {
        return -4;
    }
    v2 = (int)0xa8c;
    v3 = (int)0x4f197;
    if (*(int *)g_8c339ca0 == 9) {
        t1 = call_8c238eec();
        v3 = (int)0x8c9f;
        v2 = (int)t1;
    }
    if (v2 > a0 || a0 > v3) {
        return -4;
    }
    v10 = (S_vv10 *)((int)(*(int *)0x8c4db9e4 + 0x11c4) + 0x10);
    v11 = (S_vv11 *)(g_8c339ca0 + 0x258);
    v8 = (int)0xa8c;
    v9 = (int)0x4f197;
    for (v16 = 2; v16 >= 0; v16--, v11 = (S_vv11 *)((char *)v11 + -28)) {
        if (v11->f00 != 0 && !(a0 > v11->f00)) {
            if (v8 > v11->f00 || v11->f00 > v9) {
                return -4;
            }
            if (((v10->f00 & v11->f04)) == 0) {
                break;
            }
        }
    }
    if (!(v16 >= 0)) {
        v16 = -2;
    }
    return v16;
}
