typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c46ed0c S_g8c46ed0c;
typedef struct S_vv13 S_vv13;
class S_vv24;
struct S_vv13 {
    short f00;
    short f02;
    short f04;
    char unknown6[0x4];
    short f0a;
    short f0c;
    char unknowne[0x32];
    S_vv24 *f40;
};
struct Frame {
    char unknown0[0x4];
    int f04;
    char unknown8[0x8];
};
class S_vv24 {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5(void *, int);
};
typedef struct S_vv24Data {
    char unknown0[0x2c];
    short f2c;
    short f2e;
    short f30;
    char unknown32[0x52];
    S_vv13 *f84;
} S_vv24Data;
extern int g_8c44be04;
extern int g_8c46ec50;
extern S_g8c46ed0c *g_8c46ed0c;
extern "C" int call_8c09de44(S_vv13 *, Frame *);
extern "C" int operation_8c09e188(int a0, int a1, int a2)
{
    Frame frame;
    int v2;
    int v4;
    int v3;
    int v5;
    int v1;
    char *v15;
    int v14;
    int v6;
    int v11;
    S_vv13 *v13;
    int v12;
    short v16;
    S_vv24 *v24;
    short v30;
    short v29;
    short fl;
    int t1;
    int t2;
    v1 = (int)(a0 == g_8c44be04);
    v2 = (int)0;
    if (a0 > 0x11) {
        v11 = (int)v2;
    } else {
        v3 = (int)0;
        v4 = (int)0;
        while (a0 > v4) {
            v5 = (int)(v3 + *(int *)((char *)0x8c46ec58 + (v4 << 2)));
            v3 = (int)v5;
            v4 = (int)(v4 + 1);
        }
        v6 = (int)(g_8c46ec50 + v3 * 0x44);
        v11 = (int)v6;
    }
    v12 = (int)*(int *)((char *)0x8c46ec58 + (a0 << 2));
    v13 = (S_vv13 *)v11;
    v14 = (int)0;
    v15 = (char *)v1;
    while (v12 > v14) {
        fl = v13->f02;
        if (((fl & 8)) == 0 && ((fl & 2)) == 0 && ((fl & 1)) == 0 && v13->f0c == (short)a1 && v13->f0a == (short)a2) {
            if (v15 != 0) {
                v16 = (short)-1;
                if (v13->f00 != v16) {
                    t1 = call_8c09de44(v13, (Frame *)((&frame)));
                    if (t1 >= 0) {
                        t2 = ((int (*)(void *))((&frame)->f04))((void *)((int)v13 + 4));
                        v24 = (S_vv24 *)t2;
                        goto L_8c09e23a;
                    }
                }
                v24 = (S_vv24 *)0;
L_8c09e23a:;
                if (v24 != 0) {
                    v13->f40 = (S_vv24 *)v24;
                    v13->f02 |= 0x12;
                    ((S_vv24Data *)v24)->f2c = v13->f0c;
                    ((S_vv24Data *)v24)->f2e = v13->f0a;
                    ((S_vv24Data *)v24)->f30 = v13->f04;
                    ((S_vv24Data *)v24)->f84 = (S_vv13 *)v13;
                    v30 = (short)((S_vv24Data *)v24)->f30;
                    if (v30 != v16) {
                        v24->v5(&*(int *)((char *)((char *)g_8c46ed0c + 0x0) + (v30 << 2)), 0);
                    }
                    v2 = (int)(v2 + 1);
                    goto L_8c09e29c;
                }
                v13->f40 = (S_vv24 *)0;
            } else {
                v13->f02 |= 1;
                v2 = (int)(v2 + 1);
            }
        }
L_8c09e29c:;
        v14 = (int)(v14 + 1);
        v13 = (S_vv13 *)((char *)v13 + 68);
    }
    return (int)(v2);
}
