typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46ed0c S_g8c46ed0c;
typedef struct S_vv13 S_vv13;
class S_c8c09ddd0;
struct S_vv13 {
    short f00;
    short f02;
    short f04;
    char unknown6[0x4];
    short f0a;
    short f0c;
    char unknowne[0x32];
    S_c8c09ddd0 *f40;
};
class S_c8c09ddd0 {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5(void *, int);
};
typedef struct S_c8c09ddd0Data {
    char unknown0[0x2c];
    short f2c;
    char unknown2e[0x2];
    short f30;
    char unknown32[0x52];
    S_vv13 *f84;
} S_c8c09ddd0Data;
extern "C" S_c8c09ddd0 *operation_8c09ddd0(void *);
extern "C" void operation_8c09dcc8(int a0)
{
    int v2;
    int v1;
    int v3;
    int v11;
    int v14;
    int v4;
    int v9;
    S_vv13 *v13;
    int v12;
    int v10;
    S_c8c09ddd0 *t1;
    if (a0 > 0x11) {
        v9 = (int)0;
    } else {
        v1 = (int)0;
        v2 = (int)0;
        while (a0 > v2) {
            v3 = (int)(v1 + *(int *)((char *)0x8c46ec58 + (v2 << 2)));
            v1 = (int)v3;
            v2 = (int)(v2 + 1);
        }
        v4 = (int)(*(int *)0x8c46ec50 + v1 * 0x44);
        v9 = (int)v4;
    }
    v10 = (int)-2;
    v11 = (int)*(int *)((char *)0x8c46ec58 + (a0 << 2));
    v13 = (S_vv13 *)v9;
    v14 = (int)0;
    v12 = (int)-1;
    while (v11 > v14) {
        if (((v13->f02 & 8)) == 0 && ((v13->f02 & 2)) == 0 && v13->f00 != (short)v12) {
            if (((v13->f02 & 0x10)) == 0 && ((v13->f02 & 1)) == 0 && v13->f0a != 0) {
                goto L_8c09dda0;
            }
            t1 = operation_8c09ddd0((void *)v13);
            if (t1 != 0) {
                v13->f40 = (S_c8c09ddd0 *)t1;
                v13->f02 |= 2;
                ((S_c8c09ddd0Data *)t1)->f2c = v13->f0c;
                ((S_c8c09ddd0Data *)t1)->f30 = v13->f04;
                ((S_c8c09ddd0Data *)t1)->f84 = (S_vv13 *)v13;
                if (((S_c8c09ddd0Data *)t1)->f30 == (short)v12) {
                    goto L_8c09dd9a;
                }
                t1->v5(&*(int *)((char *)((char *)*(S_g8c46ed0c **)0x8c46ed0c + 0x0) + (((S_c8c09ddd0Data *)t1)->f30 << 2)), 0);
            } else {
                v13->f40 = (S_c8c09ddd0 *)0;
            }
L_8c09dd9a:;
            v13->f02 &= v10;
        }
L_8c09dda0:;
        v14 = (int)(v14 + 1);
        v13 = (S_vv13 *)((char *)v13 + 68);
    }
}
