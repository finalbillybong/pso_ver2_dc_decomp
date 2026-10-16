typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c510c9c S_L8c510c9c;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c4db9e4 S_g8c4db9e4;
typedef struct S_vv11 S_vv11;
typedef struct S_vv14 S_vv14;
typedef struct S_vv17 S_vv17;
typedef struct S_vv25 S_vv25;
typedef struct S_vv8 S_vv8;
struct S_c8c021ef8 {
    char unknown0[0x20];
    unsigned short f20;
};
struct S_L8c510c9c {
    char unknown0[0x2];
    short f02;
};
struct S_vv8 {
    char unknown0[0x11ac];
    unsigned short f11ac;
};
struct S_vv11 {
    char unknown0[0x11ae];
    unsigned short f11ae;
};
struct S_vv14 {
    char unknown0[0x11b0];
    unsigned short f11b0;
};
struct S_vv17 {
    char unknown0[0x11b2];
    unsigned short f11b2;
};
struct S_vv25 {
    char unknown0[0x11b4];
    unsigned short f11b4;
};
extern int g_8c418248;
extern S_g8c4db9e4 *g_8c4db9e4;
extern S_L8c510c9c g_8c510c9c;
extern S_c8c021ef8 *lookup_low_id(int);
extern int call_8c244b24(void);
extern void call_8c18280c(void);
void operation_8c243ed4(void)
{
    int v3;
    int v4;
    int v1;
    int v2;
    S_vv8 *v8;
    int v9;
    int v10;
    S_vv11 *v11;
    int v12;
    int v13;
    S_vv14 *v14;
    int v15;
    int v16;
    S_vv17 *v17;
    int v18;
    int v19;
    S_vv25 *v25;
    int v26;
    int v27;
    S_c8c021ef8 *t1;
    int t2;
    v1 = (int)-1;
    v2 = (int)0;
    while (4 > v2) {
        v3 = (int)(v2 << 2);
        v4 = (int)(v3 << 1);
        t1 = lookup_low_id((int)(*(unsigned short *)((char *)((char *)v4 + 0x0) + ((int)((void *)&g_8c510c9c))) & 0xffff));
        if (t1 != 0 && g_8c418248 == t1->f20) {
            v1 = (int)*(short *)((char *)&g_8c510c9c.f02 + (v4));
            goto L_8c243f1a;
        }
        v2 = (int)(v2 + 1);
    }
L_8c243f1a:;
    t2 = call_8c244b24();
    if (t2 == 0) {
        if (v1 != 0) {
            if (v1 == 1) {
                goto L_8c243f5a;
            }
            if (v1 == 2) {
                goto L_8c243f7a;
            }
            if (v1 == 3) {
                goto L_8c243f9a;
            }
        } else {
            v8 = (S_vv8 *)g_8c4db9e4;
            v9 = (int)((v8->f11ac & 0xffff) + 1);
            if (0xffff > v9) {
                v10 = (int)v9;
            } else {
                v10 = (int)0xffff;
            }
            v8->f11ac = v10;
            goto L_8c243fb8;
L_8c243f5a:;
            v11 = (S_vv11 *)g_8c4db9e4;
            v12 = (int)((v11->f11ae & 0xffff) + 1);
            if (0xffff > v12) {
                v13 = (int)v12;
            } else {
                v13 = (int)0xffff;
            }
            v11->f11ae = v13;
            v10 = (int)v13;
            goto L_8c243fb8;
L_8c243f7a:;
            v14 = (S_vv14 *)g_8c4db9e4;
            v15 = (int)((v14->f11b0 & 0xffff) + 1);
            if (0xffff > v15) {
                v16 = (int)v15;
            } else {
                v16 = (int)0xffff;
            }
            v14->f11b0 = v16;
            v10 = (int)v16;
            goto L_8c243fb8;
L_8c243f9a:;
            v17 = (S_vv17 *)g_8c4db9e4;
            v18 = (int)((v17->f11b2 & 0xffff) + 1);
            if (0xffff > v18) {
                v19 = (int)v18;
            } else {
                v19 = (int)0xffff;
            }
            v17->f11b2 = v19;
        }
    }
    v10 = (int)/* ? clobbered */ 0;
L_8c243fb8:;
    v25 = (S_vv25 *)g_8c4db9e4;
    v26 = (int)((v25->f11b4 & 0xffff) + -1);
    if (v26 > 0) {
        v27 = (int)v26;
    } else {
        v27 = (int)0;
    }
    v25->f11b4 = v27;
    call_8c18280c();
}
