typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c46efc8 S_L8c46efc8;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_c8c36b024 S_c8c36b024;
typedef struct S_g8c3032d8 S_g8c3032d8;
typedef struct S_g8c46ee80 S_g8c46ee80;
class S_vv16;
class S_vv9;
struct S_c8c36b024 {
    char unknown0[0x8];
    int f08;
    char unknownc[0x4];
    int f10;
};
struct S_L8c46efc8 {
    unsigned char f00;
    char unknown1[0x1];
    short f02;
    char unknown4[0x4];
    int f08;
};
struct S_c8c021ef8 {
    char unknown0[0x20];
    short f20;
    char unknown22[0x12];
    int f34;
};
struct S_g8c46ee80 {
    char unknown0[0xe0];
    S_c8c021ef8 *fe0;
};
class S_vv9 {
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
typedef struct S_vv9Data {
    char unknown0[0x20];
    S_c8c021ef8 *f20;
    short f24;
} S_vv9Data;
class S_vv16 {
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
typedef struct S_vv16Data {
    char unknown0[0x20];
    S_c8c021ef8 *f20;
    short f24;
} S_vv16Data;
extern S_g8c3032d8 *g_8c3032d8;
extern S_g8c46ee80 *g_8c46ee80;
extern S_L8c46efc8 g_8c46efc8;
extern "C" S_c8c36b024 *call_8c36b024(int);
extern "C" int operation_8c02b2a4(void);
extern "C" int current_effect_mode(void);
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" void operation_8c02b1e0(int);
extern "C" void operation_8c0a1d18(void)
{
    S_c8c021ef8 *t9;
    int v5;
    short v4;
    int v1;
    int v7;
    int v8;
    int v2;
    S_vv9 *v9;
    S_vv16 *v16;
    char *v3;
    int t1;
    int v20;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    S_c8c36b024 *t2;
    S_c8c021ef8 *t10;
    t2 = call_8c36b024(6);
    t1 = operation_8c02b2a4();
    switch (t1) {
    case 0:
        if (((t2->f08 & 0x20000)) == 0) {
            return;
        }
        if (((t2->f10 & 0x10)) == 0) {
            return;
        }
        if (((t2->f08 & 0x10000)) == 0) {
            return;
        }
        v5 = 0;
        if (((&g_8c46efc8)->f00) != 0) {
            return;
        }
        t3 = current_effect_mode();
        if (t3 == 0xb) {
            return;
        }
        if (current_effect_mode() == 0xc || current_effect_mode() == 0xd || current_effect_mode() == 0xe || current_effect_mode() == 0xf || current_effect_mode() == 0) {
            return;
        }
                        v1 = (int)0x308;
                        v2 = (int)0x2000000;
                        v3 = (char *)v2;
                        v4 = (&g_8c46efc8)->f02;
                        while (3 > (char)v5) {
                            v4++;
                            v5++;
                            if ((unsigned short)v4 >= 4) {
                                v4 = 0;
                            }
                            t9 = lookup_low_id((int)((unsigned short)v4));
                            if (t9 != 0) {
                                v7 = (int)(*(short *)((char *)((char *)t9 + 0x0) + (v1)) == 3);
                                if (v7 == 0) {
                                    v8 = (int)(*(short *)((char *)((char *)t9 + 0x0) + (v1)) == 6);
                                    if (v8 == 0) {
                                        if (((t9->f34 & (int)(v3))) == 0) {
                                            (&g_8c46efc8)->f02 = v4;
                                            v9 = (S_vv9 *)*(S_g8c3032d8 **)((char *)&g_8c3032d8 + ((&g_8c46efc8)->f00 << 2));
                                            if (v9 != 0) {
                                                if (g_8c46ee80 != 0) {
                                                    g_8c46ee80->fe0 = (S_c8c021ef8 *)t9;
                                                }
                                                ((S_vv9Data *)v9)->f20 = (S_c8c021ef8 *)t9;
                                                if (t9 != 0) {
                                                    ((S_vv9Data *)v9)->f24 = t9->f20;
                                                }
                                                v9->v7(t9);
                                                (&g_8c46efc8)->f08 |= 0x800;
                                            }
                                            v16 = (S_vv16 *)g_8c3032d8;
                                            if (v16 != 0) {
                                                ((S_vv16Data *)v16)->f20 = (S_c8c021ef8 *)t9;
                                                if (t9 != 0) {
                                                    ((S_vv16Data *)v16)->f24 = t9->f20;
                                                }
                                                v16->v7(t9);
                                            }
                                            v20 = (int)0;
                                            while (4 > v20) {
                                                t10 = lookup_low_id(v20);
                                                if (t10 != 0) {
                                                    operation_8c02b1e0((int)t10);
                                                }
                                                v20 = (int)(v20 + 1);
                                            }
                                            return;
                                        }
                                    }
                                }
                            }
                        }
    }
}
