typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv12 S_vv12;
typedef struct S_vv3 S_vv3;
typedef struct S_vv5 S_vv5;
struct S_vv3 {
    short f00;
    char unknown2[0x2];
    short f04;
    short f06;
    char unknown8[0x2];
    short f0a;
};
struct S_vv5 {
    char unknown0[0x4];
    int f04;
    char unknown8[0x4];
    int f0c;
};
struct S_vv12 {
    short f00;
};
extern int g_8c46ed18;
extern int current_effect_mode(void);
extern int advance_counter_8c01d5e8(int);
int operation_8c08fd58(int a0, int a1)
{
    int v1;
    short v4;
    S_vv5 *v5;
    S_vv12 *v12;
    int v6;
    int v7;
    int v8;
    S_vv3 *v3;
    int v11;
    short v2;
    int t1;
    int t2;
    int t3;
    t3 = current_effect_mode();
    v2 = (short)-1;
    v1 = (int)*(int *)((char *)0x8c2ee8b8 + (t3 << 2));
    v11 = (int)a1;
    v12 = (S_vv12 *)v1;
    goto L_8c08fdba;
L_8c08fd78:;
    if ((short)v4 == v3->f00) {
        v6 = (int)v3->f06;
        if (v3->f06 == 0) {
            v6 = (int)v5->f0c;
        }
        t1 = advance_counter_8c01d5e8(v6);
        v3->f0a = t1;
        v7 = (int)g_8c46ed18;
        if ((v7 + (v6 + 1)) > 0xb4f) {
            v8 = (int)-1;
        } else {
            g_8c46ed18 = v7 + (v6 + 1);
            v8 = (int)v7;
        }
        v3->f04 = v8;
        t2 = ((int (*)(void *))(v5->f04))((void *)((int)v3 + 4));
        return (int)(t2);
    }
    v11 = (int)v3;
    v12 = (S_vv12 *)((int)v5 + 0x10);
L_8c08fdba:;
    if (v1 != 0) {
        v3 = (S_vv3 *)v11;
        v4 = (int)v12->f00;
        v5 = (S_vv5 *)v12;
        if (v12->f00 != v2) {
            goto L_8c08fd78;
        }
    }
    return 0;
}
