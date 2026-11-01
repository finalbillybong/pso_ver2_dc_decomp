typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct Object Object;
typedef struct Arg0_s24 Arg0_s24;
class S_c8c021ef8;
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x294];
    int f294;
    char unknown298[0x108];
    int f3a0;
    int f3a4;
    int f3a8;
    int f3ac;
    int f3b0;
};
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    char f20;
    char unknown21[0x1];
    short f22;
    short f24[5];
    char unknown2e[0xc];
    short f3a;
    short f3c;
};
class S_c8c021ef8 {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual int v17();
};
typedef struct S_c8c021ef8Data {
    char unknown0[0x184];
    int f184;
} S_c8c021ef8Data;
struct Arg0_s24 {
    char unknown0[0x2];
    short f02;
    short f04;
    short f06;
    short f08;
};
extern S_g8c418248 *g_8c418248;
extern S_g8c467180 *g_8c467180;
extern "C" char g_8c3376fc[];
extern "C" void reset_text_cursor_8c18ea38(void);
extern "C" void operation_8c18ea4c(int);
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" void operation_8c18eb44(int);
extern "C" void operation_8c0ddb5c(int);
extern "C" void operation_8c2269a8(Object *o)
{
    short *s;
    S_c8c021ef8 *t;
    s = o->f24;
    reset_text_cursor_8c18ea38();
    operation_8c18ea4c(g_8c467180->f2c->f294);
    switch (o->f20) {
    case 0:
    case 1:
        t = lookup_low_id((int)g_8c418248);
        if (t == 0 || ((S_c8c021ef8Data *)t)->f184 == 0) {
            break;
        }
        operation_8c18ea4c((int)(g_8c3376fc + 0x12));
        operation_8c18eb44(t->v17() + 1);
        operation_8c0ddb5c(0x8c4dbe40);
        o->f20 = 2;
        break;
    case 2:
        if (o->f3a > 0) {
            operation_8c18ea4c((int)(g_8c3376fc + 0x19));
            operation_8c18eb44(o->f3a);
            operation_8c0ddb5c(0x8c4dbe40);
            o->f20 = 3;
            break;
        }
    case 3:
        if (o->f3c > 0) {
            operation_8c18ea4c((int)(g_8c3376fc + 0x1e));
            operation_8c18eb44(o->f3c);
            operation_8c0ddb5c(0x8c4dbe40);
            o->f20 = 4;
            break;
        }
    case 4:
        if (s[0] > 0) {
            operation_8c18ea4c(g_8c467180->f2c->f3a0);
            operation_8c18ea4c((int)(g_8c3376fc + 0x23));
            operation_8c18eb44(s[0]);
            operation_8c0ddb5c(0x8c4dbe40);
            o->f20 = 5;
            break;
        }
    case 5:
        if (s[1] > 0) {
            operation_8c18ea4c(g_8c467180->f2c->f3a4);
            operation_8c18ea4c((int)(g_8c3376fc + 0x23));
            operation_8c18eb44(s[1]);
            operation_8c0ddb5c(0x8c4dbe40);
            o->f20 = 6;
            break;
        }
    case 6:
        if (s[2] > 0) {
            operation_8c18ea4c(g_8c467180->f2c->f3a8);
            operation_8c18ea4c((int)(g_8c3376fc + 0x23));
            operation_8c18eb44(s[2]);
            operation_8c0ddb5c(0x8c4dbe40);
            o->f20 = 7;
            break;
        }
    case 7:
        if (s[3] > 0) {
            operation_8c18ea4c(g_8c467180->f2c->f3ac);
            operation_8c18ea4c((int)(g_8c3376fc + 0x23));
            operation_8c18eb44(s[3]);
            operation_8c0ddb5c(0x8c4dbe40);
            o->f20 = 8;
            break;
        }
    case 8:
        if (s[4] > 0) {
            operation_8c18ea4c(g_8c467180->f2c->f3b0);
            operation_8c18ea4c((int)(g_8c3376fc + 0x23));
            operation_8c18eb44(s[4]);
            operation_8c0ddb5c(0x8c4dbe40);
            o->f20 = 9;
            break;
        }
    case 9:
        o->f04 |= 1;
    }
    o->f22 = 0x16;
}
