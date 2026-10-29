typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv4 S_vv4;
struct S_vv4 {
    int f00;
};
extern int g_8c339ca0;
extern int g_8c4db9e4;
extern void call_8c238d00(void);
extern int operation_8c247e8c(int);
extern int operation_8c238e7c(int);
extern int operation_8c2382b0(void);
int operation_8c238c10(int a0)
{
    S_vv4 *v4;
    int v16;
    int v5;
    int hi;
    int mask;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int v23;
    if (g_8c339ca0 < 0 || g_8c339ca0 > 8 || g_8c4db9e4 == 0) {
        return 0;
    }
    v4 = (S_vv4 *)((char *)(g_8c4db9e4 + 0x11c4 + (g_8c339ca0 << 2)) + 0x78);
    v5 = (int)v4->f00;
    v16 = (int)0;
    if (v5 == 0) {
        call_8c238d00();
        v16 = 1;
    } else {
        if (v5 == 0) {
            v5 = 0;
        } else {
            hi = v5 >> 0x10;
            mask = 0xffff;
            hi &= mask;
            t1 = operation_8c247e8c(hi);
            if (4 > t1 || t1 > 0xc) {
                v5 = -1;
            } else {
                v5 = (unsigned short)(hi ^ v5);
            }
            t2 = operation_8c238e7c(v5);
            if (t2 != 0) {
                v5 = 0;
            }
        }
        t3 = operation_8c238e7c(v5);
        if (t3 != 0) {
            v4->f00 = 0;
            return 0;
        }
        if (v5 > a0) {
            v16 = 1;
        }
    }
    if (v16 == 0) {
        return 0;
    }
    if (a0 != 0) {
        t4 = operation_8c238e7c(a0);
        if (t4 == 0) {
            goto L_8c238cbc;
        }
    }
    v23 = 0;
    goto L_8c238ccc;
L_8c238cbc:;
    t5 = operation_8c2382b0();
    v23 = (int)(t5 ^ (unsigned short)a0 | t5 << 0x10);
L_8c238ccc:;
    v4->f00 = v23;
    return 1;
}
