typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db4e0 S_g8c4db4e0;
typedef struct S_g8c4db4e4 S_g8c4db4e4;
typedef struct S_vv10 S_vv10;
typedef struct S_vv8 S_vv8;
typedef struct S_vv9 S_vv9;
struct S_vv8 {
    char f00;
};
struct S_vv9 {
    char f00;
};
struct S_g8c4db4e0 {
    char f00;
};
struct S_vv10 {
    char f00;
};
extern S_g8c4db4e0 *g_8c4db4e0;
extern S_g8c4db4e4 *g_8c4db4e4;
extern void call_8c1729a4(void);
int operation_8c172b64(int a0, int a1)
{
    int v4;
    S_vv8 *v8;
    char v5;
    S_vv9 *v9;
    S_vv10 *v10;
    v4 = (int)a0;
    g_8c4db4e0 = (S_g8c4db4e0 *)(int)(v4);
    g_8c4db4e4 = (S_g8c4db4e4 *)a1;
    goto L_8c172ba8;
L_8c172b74:;
    v8 = (S_vv8 *)g_8c4db4e0;
    g_8c4db4e0 = (S_g8c4db4e0 *)(int)v8 + 1;
    v5 = (char)v8->f00;
    if (v5 != 0x3c) {
        if (v5 == 0x3e) {
            goto L_8c172b98;
        }
        goto L_8c172b9c;
    }
    call_8c1729a4();
    goto L_8c172ba8;
L_8c172b98:;
    for (;;) {
    }
L_8c172b9c:;
    v9 = (S_vv9 *)g_8c4db4e4;
    g_8c4db4e4 = (S_g8c4db4e4 *)((int)v9 + 1);
    v9->f00 = v5;
L_8c172ba8:;
    if (g_8c4db4e0->f00 != 0) {
        goto L_8c172b74;
    }
    v10 = (S_vv10 *)g_8c4db4e4;
    g_8c4db4e4 = (S_g8c4db4e4 *)((int)v10 + 1);
    v10->f00 = 0;
    return (int)(a1);
}
