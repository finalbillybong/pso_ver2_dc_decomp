/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c168980
 * function: operation_8c168980
 * language: c++
 * reference size: 1264 bytes
 * compiled size: 1252 bytes (-0.9%)
 * differing lines: 685 of 541 reference instruction lines
 * differing bytes: 993
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, constant loading; review found and fixed behaviour defects of the
 *   generator draft; not proven equivalent to the original; compiled size differs from the
 *   reference by -12 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Msg {
    int kind;
    float f04;
} Msg;
typedef struct Rec {
    int id;
    float f04;
    unsigned int f08;
} Rec;
typedef struct Object {
    char unknown0[0x2c];
    int f2c;
    char unknown30[0xc];
    void *f3c;
    char unknown40[0x4];
    int f44;
    char unknown48[0x3c];
    int f84[4];
} Object;
class Target {
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
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25(void *, int, Msg);
    char unknown1c[0x4];
    unsigned short f20;
    char unknown22[0x12];
    int f34;
};
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
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25(void *, int, Msg);
    char unknown1c[0x4];
    short f20;
    char unknown22[0x12];
    int f34;
};
extern int g_8c418248;
extern int g_8c4d9dec;
extern Rec g_8c4d9c6c[];
extern "C" Target *lookup_object_by_id(unsigned short);
extern "C" float operation_8c169320(Object *, unsigned int, float);
extern "C" Unit *lookup_low_id(int);
extern "C" void *create_effect(void *, int, int);
extern "C" void bind_id(void *, unsigned short);
extern "C" void play_se_8c05fbf8(int, int, int, int);
extern "C" void *create_effect_7d38(void *, int, int, int, unsigned short);
extern "C" void clear_words_8c169164(void);
extern "C" void operation_8c168980(Object *o)
{
    Msg msg;
    int k;
    int i;
    int off;
    Target *t;
    int j;
    void *e;
    int show;
    char *p;
    Unit *u;
    unsigned int n;
    k = 0x324;
    show = 0;
    for (i = 0; i < g_8c4d9dec; i++) {
        off = i * 0xc;
        t = lookup_object_by_id(*(int *)((char *)g_8c4d9c6c + off));
        if (t == 0) continue;
        msg.f04 = (float)(o->f44 * o->f2c) * 0.01f * operation_8c169320(o, *(unsigned int *)((char *)&g_8c4d9c6c[0].f08 + off), *(float *)((char *)&g_8c4d9c6c[0].f04 + off));
        n = *(unsigned int *)((char *)&g_8c4d9c6c[0].f08 + off);
        if (n == 4) {
            msg.kind = 6;
            for (j = 0; j < 4; j++) {
                u = lookup_low_id(*(int *)((char *)o->f84 + (j << 2)));
                if (u != 0) {
                    u->v25(o->f3c, 0, msg);
                    e = create_effect((char *)u + k, 0x1f8, 0x10);
                    if (e != 0) bind_id(e, u->f20);
                }
            }
            if (g_8c418248 == t->f20) play_se_8c05fbf8(0x2000e, 0, 0, 0);
            t->v25(o->f3c, 0, msg);
            e = create_effect((char *)t + k, 0x1f8, 0x10);
            if (e != 0) bind_id(e, t->f20);
            e = create_effect((char *)t + 0x3c, 0x16c, 0x10);
            if (e != 0) bind_id(e, t->f20);
            e = create_effect((char *)t + 0x3c, 0x16d, 0x10);
            if (e != 0) bind_id(e, t->f20);
        } else if (n == 5) {
            for (j = 0; j < 4; j++) {
                msg.kind = 7;
                u = lookup_low_id(*(int *)((char *)o->f84 + (j << 2)));
                if (u != 0) {
                    if ((u->f34 & 0x800) != 0) msg.kind = 8;
                    u->v25(o->f3c, 0, msg);
                    e = create_effect((char *)u + k, 0x1f8, 0x10);
                    if (e != 0) bind_id(e, u->f20);
                }
            }
            msg.kind = 7;
            if ((t->f34 & 0x800) != 0) msg.kind = 8;
            t->v25(o->f3c, 0, msg);
            e = create_effect((char *)t + k, 0x1f8, 0x10);
            if (e != 0) bind_id(e, t->f20);
            msg.kind = 0xa;
            for (j = 0; j < 4; j++) {
                u = lookup_low_id(*(int *)((char *)o->f84 + (j << 2)));
                if (u != 0) {
                    u->v25(o->f3c, 0, msg);
                    if (show != 0) {
                        p = (char *)u + k;
                        e = create_effect(p, 0x1f9, 0x10);
                        if (e != 0) bind_id(e, u->f20);
                        e = create_effect(p, 0x1fb, 0x10);
                        if (e != 0) bind_id(e, u->f20);
                    }
                }
            }
            t->v25(o->f3c, 0, msg);
            msg.kind = 9;
            for (j = 0; j < 4; j++) {
                u = lookup_low_id(*(int *)((char *)o->f84 + (j << 2)));
                if (u != 0) {
                    u->v25(o->f3c, 0, msg);
                    if (show != 0) {
                        p = (char *)u + k;
                        e = create_effect(p, 0x1fa, 0x10);
                        if (e != 0) bind_id(e, u->f20);
                        e = create_effect(p, 0x1fc, 0x10);
                        if (e != 0) bind_id(e, u->f20);
                    }
                }
            }
            t->v25(o->f3c, 0, msg);
            if (g_8c418248 == t->f20) {
                play_se_8c05fbf8(0x20010, 0, 0, 0);
                play_se_8c05fbf8(0x20014, 0, 0, 0);
                play_se_8c05fbf8(0x20016, 0, 0, 0);
            }
            e = create_effect_7d38((char *)t + 0x3c, 0x16e, 0, 0xf, 0x10);
            if (e != 0) bind_id(e, t->f20);
            e = create_effect((char *)t + 0x3c, 0x16f, 0x10);
            if (e != 0) bind_id(e, t->f20);
        } else {
            msg.kind = 4;
            t->v25(o->f3c, 0, msg);
        }
    }
    clear_words_8c169164();
}
