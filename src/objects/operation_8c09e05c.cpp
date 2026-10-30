typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c46ed0c S_g8c46ed0c;
typedef struct S_vv14 S_vv14;
class S_vv24;
struct S_vv14 {
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
    S_vv14 *f84;
} S_vv24Data;
extern int g_8c46ec44;
extern int g_8c46ec50;
extern S_g8c46ed0c *g_8c46ed0c;
extern "C" int call_8c09de44(S_vv14 *, Frame *);
extern "C" int operation_8c09e05c(int a0, int a1)
{
    Frame frame;
    S_vv24 *v24;
    int v2;
    int v4;
    int v3;
    int v13;
    int v12;
    int v15;
    int v11;
    int t2;
    int v16;
    int v5;
    S_vv14 *v14;
    int v1;
    int v29;
    int t1;
    int pm3;
    S_vv14 *pm5;
    v1 = (int)g_8c46ec44;
    v2 = (int)0;
    if (v1 > 0x11) {
        v11 = (int)v2;
    } else {
        v3 = (int)0;
        v4 = (int)0;
        for (; v1 > v4; ) {
            pm3 = *(int *)((char *)0x8c46ec58 + (v4 << 2));
            v4 += 1;
            v5 = (int)(v3 + pm3);
            v3 = (int)v5;
        }
        v5 = v3 * 0x44;
        v11 = (int)(g_8c46ec50 + v5);
    }
    v3 = *(int *)((char *)0x8c46ec58 + (v1 << 2));
    pm5 = (S_vv14 *)v11;
    v15 = (int)0;
    v13 = (int)-1;
    v14 = pm5;
    v12 = (int)v3;
    for (; v12 > v15; ) {
        v16 = (int)v14->f02;
        if (((8 & v16)) == 0 && !(0 != ((v16 & 2))) && !((int)v14->f0c != (short)a0)) {
            if (v14->f0a == (short)a1) {
                if (v14->f00 != (short)v13) {
                    v1 = call_8c09de44(v14, (Frame *)((&frame)));
                    t1 = v1;
                    if (t1 >= 0) {
                        v5 = (&frame)->f04;
                        t2 = ((int ( *) ( void *))(v5))((void *)(4 + (int)v14));
                        v24 = (S_vv24 *)t2;
                        goto L_8c09e0fc;
                    }
                }
                v24 = (S_vv24 *)0;
            L_8c09e0fc:
                ;
                if (v24 != 0) {
                    S_vv24Data *pm6;
                    short pm4;
                    v14->f40 = v24;
                    v14->f02 |= 0x12;
                    ((S_vv24Data *)v24)->f2c = v14->f0c;
                    ((S_vv24Data *)v24)->f2e = v14->f0a;
                    pm4 = v14->f04;
                    ((S_vv24Data *)v24)->f30 = pm4;
                    pm6 = (S_vv24Data *)v24;
                    (pm6)->f84 = (S_vv14 *)v14;
                    v29 = (short)((S_vv24Data *)v24)->f30;
                    if (!(v29 == (short)v13)) {
                        v24->v5(& *(int *)((char *)((char *)g_8c46ed0c + 0x0) + (v29 << 2)), 0);
                    }
                    v2 = (int)(v2 + 1);
                } else {
                    v14->f40 = (S_vv24 *)0;
                }
            }
        }
        v15 = (int)(v15 + 1);
        v14 = (S_vv14 *)((char *)v14 + 68);
    }
    return (int)(v2);
}
