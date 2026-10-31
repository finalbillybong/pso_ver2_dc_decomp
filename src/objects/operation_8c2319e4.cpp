class Unit;
class Unit {
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
    virtual int v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual int v17();
};
typedef struct Info {
    char unknown0[0x33];
    signed char f33;
} Info;
extern char g_8c338bc8[];
typedef struct Rec {
    char unknown0[0x4];
    char f04[0xa0];
    unsigned short fa4;
    char unknowna6[0x6];
    unsigned short fac;
    char unknownae[0xe];
} Rec;
extern Rec g_8c41bd34[];
extern "C" int operation_8c20985c(void);
extern "C" Unit *lookup_low_id(int);
extern "C" int operation_8c02c338(Unit *);
extern "C" void reset_text_cursor_8c18ea38(void);
extern "C" void operation_8c18ea4c(int);
extern "C" void operation_8c18ecb8(void);
extern "C" void operation_8c18ec00(int, int);
extern "C" void operation_8c18eb44(int);
extern "C" int operation_8c247d1c(int);
extern "C" void *operation_8c2319e4(int a0)
{
    Unit *u;
    int kind;
    int slot;
    int name;
    int level;
    Info *q;
    kind = operation_8c20985c();
    u = lookup_low_id(a0);
    if (u == 0) {
        return 0;
    }
    q = (Info *)((char *)u + 0x7e4);
    if (q == 0) {
        return 0;
    }
    name = u->v13();
    slot = operation_8c02c338(u);
    level = u->v17();
    reset_text_cursor_8c18ea38();
    switch (kind) {
    case 0:
        operation_8c18ea4c(name);
        break;
    case 1:
        operation_8c18ea4c(name);
        operation_8c18ecb8();
        operation_8c18ea4c(*(int *)((char *)0x8c338bb4 + (slot << 2)));
        operation_8c18ec00(level + 1, 3);
        break;
    case 2:
        if (2 > q->f33) {
            return 0;
        }
        operation_8c18ea4c((int)(g_8c338bc8 + 0x1a));
        a0 *= 0xbc;
        operation_8c18eb44(*(unsigned short *)((char *)&g_8c41bd34[0].fa4 + a0) & 0xffff);
        operation_8c18ea4c((int)(g_8c338bc8 + 0x1d));
        operation_8c18eb44(*(unsigned short *)((char *)&g_8c41bd34[0].fac + a0) & 0xffff);
        break;
    case 3:
        if (2 > q->f33) {
            return 0;
        }
        operation_8c18ea4c(operation_8c247d1c((int)g_8c41bd34[a0].f04));
        break;
    case 4:
        return 0;
    }
    return (void *)0x8c4dbe40;
}
