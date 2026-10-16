typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c3032d8 S_L8c3032d8;
typedef struct S_L8c3032d8_8 S_L8c3032d8_8;
typedef struct S_L8c46efc8 S_L8c46efc8;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c3032d8 S_g8c3032d8;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c46ee80 S_g8c46ee80;
typedef struct S_vv1 S_vv1;
class S_vv11;
class S_vv18;
struct S_L8c46efc8 {
    unsigned char f00;
    char unknown1[0x7];
    int f08;
};
struct S_L8c3032d8 {
    S_g8c3032d8 *f00;
    char unknown4[0x4];
    S_L8c3032d8_8 *f08;
};
struct S_vv1 {
    char unknown0[0x58];
    int f58;
};
struct S_g8c46ee80 {
    char unknown0[0xe0];
    S_c8c021ef8 *fe0;
};
class S_vv11 {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7(S_c8c021ef8 *);
};
typedef struct S_vv11Data {
    char unknown0[0x20];
    S_c8c021ef8 *f20;
    short f24;
} S_vv11Data;
struct S_c8c021ef8 {
    char unknown0[0x20];
    short f20;
};
class S_vv18 {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7(S_c8c021ef8 *);
};
typedef struct S_vv18Data {
    char unknown0[0x20];
    S_c8c021ef8 *f20;
    short f24;
} S_vv18Data;
extern S_g8c418248 *g_8c418248;
extern S_g8c46ee80 *g_8c46ee80;
extern int g_8c46f0c0;
extern S_L8c3032d8 g_8c3032d8;
extern S_L8c46efc8 g_8c46efc8;
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" int operation_8c0a21a4(void)
{
    S_vv1 *v1;
    S_vv11 *v11;
    S_vv18 *v18;
    S_c8c021ef8 *t1;
    if ((((&g_8c46efc8)->f08 & 4)) != 0) {
        (&g_8c46efc8)->f08 = (&g_8c46efc8)->f08 & -5;
        if ((unsigned short)(&g_8c46efc8)->f00 == 2) {
            v1 = (S_vv1 *)(&g_8c3032d8)->f08;
            if (v1 != 0 && g_8c46f0c0 != 0) {
                v1->f58 = (int)(g_8c46f0c0);
            }
        }
        (&g_8c46efc8)->f08 = (&g_8c46efc8)->f08 | 0x20;
    }
    t1 = lookup_low_id((int)g_8c418248);
    if (t1 != 0) {
        v11 = (S_vv11 *)*(S_g8c3032d8 **)((char *)&g_8c3032d8 + ((&g_8c46efc8)->f00 << 2));
        if (v11 != 0) {
            if (g_8c46ee80 != 0) {
                g_8c46ee80->fe0 = (S_c8c021ef8 *)t1;
            }
            ((S_vv11Data *)v11)->f20 = (S_c8c021ef8 *)t1;
            if (t1 != 0) {
                ((S_vv11Data *)v11)->f24 = t1->f20;
            }
            v11->v7(t1);
            (&g_8c46efc8)->f08 = (&g_8c46efc8)->f08 | 0x800;
        }
        v18 = (S_vv18 *)(&g_8c3032d8)->f00;
        if (v18 != 0) {
            ((S_vv18Data *)v18)->f20 = (S_c8c021ef8 *)t1;
            if (t1 != 0) {
                ((S_vv18Data *)v18)->f24 = t1->f20;
            }
            v18->v7(t1);
        }
    }
    return 0;
}
