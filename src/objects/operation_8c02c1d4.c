typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv16 S_vv16;
typedef struct S_vv28 S_vv28;
typedef struct S_vv38 S_vv38;
struct S_vv16 {
    char unknown0[0x350];
    int f350;
};
struct S_vv28 {
    char unknown0[0x350];
    int f350;
};
struct S_vv38 {
    char unknown0[0x350];
    int f350;
};
extern int g_8c2e2ad8;
extern int g_8c418248;
extern int g_8c510ba0;
extern int operation_2391f4(void *);
extern int current_effect_mode(void);
int operation_8c02c1d4(void)
{
    int v7;
    int v1;
    int v10;
    int v13;
    S_vv16 *v16;
    int v22;
    int v25;
    S_vv28 *v28;
    int v32;
    int v35;
    S_vv38 *v38;
    int t1;
    int t2;
    v1 = (int)0;
    if (g_8c2e2ad8 != 0) {
        t1 = operation_2391f4((void *)((void *)0x8c41ce5c));
        if ((char)t1 == 1) {
            v1 = (int)1;
        }
    }
    if (v1 == 0) {
        v7 = (int)(g_8c510ba0 != 0);
        if (v7 == 0) {
            goto L_8c02c236;
        }
    }
    if (g_8c418248 == 0xffff) {
        v16 = (S_vv16 *)0;
    } else {
        if (g_8c418248 >= 0xc) {
            v13 = (int)0;
        } else {
            v10 = (int)*(int *)((g_8c418248 << 2) + 0x8c41ce2c);
            v13 = (int)v10;
        }
        v16 = (S_vv16 *)v13;
    }
    if (v16 != 0) {
        v16->f350 |= 0x8000;
    }
    return 0;
L_8c02c236:;
    t2 = current_effect_mode();
    if (!(t2 > 0)) {
        if (t2 == 0) {
            goto L_8c02c278;
        }
    } else {
        switch (t2) {
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
L_8c02c278:;
            if (g_8c418248 == 0xffff) {
                v28 = (S_vv28 *)0;
            } else {
                if (g_8c418248 >= 0xc) {
                    v25 = (int)0;
                } else {
                    v22 = (int)*(int *)((g_8c418248 << 2) + 0x8c41ce2c);
                    v25 = (int)v22;
                }
                v28 = (S_vv28 *)v25;
            }
            if (v28 != 0) {
                v28->f350 |= 0x8000;
            }
            return 0;
        }
    }
    if (g_8c418248 == 0xffff) {
        v38 = (S_vv38 *)0;
    } else {
        if (g_8c418248 >= 0xc) {
            v35 = (int)0;
        } else {
            v32 = (int)*(int *)((g_8c418248 << 2) + 0x8c41ce2c);
            v35 = (int)v32;
        }
        v38 = (S_vv38 *)v35;
    }
    if (v38 != 0) {
        v38->f350 &= -0x8001;
    }
    return 1;
}
