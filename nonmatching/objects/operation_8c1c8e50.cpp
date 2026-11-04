/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1c8e50
 * function: operation_8c1c8e50
 * language: c++
 * reference size: 1012 bytes
 * compiled size: 1012 bytes (+0.0%)
 * differing lines: 280 of 400 reference instruction lines
 * differing bytes: 99
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Info { char pad[0x10]; unsigned char f10; } Info;
typedef struct Rule { char pad[0xc]; int f0c; } Rule;
typedef struct Item { char pad[0x18]; int f18; } Item;
typedef struct Stats { short s[7]; } Stats;
typedef struct Key { unsigned char b[0x14]; } Key;
class Src {
public:
    char pad0[0x18];
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
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31(Key *);
};
typedef struct Player {
    char pad0[0x184];
    Stats *f184;
    char pad188[0x37c - 0x188];
    int f37c;
    char pad380[0x3bc - 0x380];
    char f3bc[0xbcc - 0x3bc];
    char fbcc[4];
} Player;
typedef struct Sys { char pad[0x20]; int f20; } Sys;
extern int g_8c418248;
extern int g_8c4dc800;
extern int g_8c510ba0;
extern Sys *g_8c513360;
extern "C" Player *lookup_low_id(int);
extern "C" int call_8c163428(Player *, unsigned char *, int);
extern "C" Rule *operation_8c1c7658(void *);
extern "C" int call_8c16337c(Player *, int);
extern "C" Item *call_8c0adc1c(int, int);
extern "C" char call_8c247730(void *, int);
extern "C" Src *operation_8c03b55c(void *, int);
extern "C" Stats *operation_8c1a7128(Player *);
extern "C" short operation_8c074b30(int);
extern "C" short operation_8c074b9c(int);
extern "C" int operation_8c07faf0(Player *, int);
extern "C" int operation_8c1c8e50(unsigned char *m, unsigned int mask, Player *pl)
{
    unsigned int fl = 0;
    int on2;
    if (pl == 0)
        pl = lookup_low_id(g_8c418248);
    if (pl == 0)
        return 0;
    switch (m[0]) {
    case 0:
    case 1:
    case 2:
        fl |= 8;
        if (call_8c163428(pl, m, 0) == 0)
            fl |= 0x10001;
        break;
    case 3: {
        Rule *r = operation_8c1c7658(m);
        if (r != 0) {
            int bits = r->f0c;
            if (bits & 1)
                fl |= 2;
            if (bits & 4)
                fl |= 4;
            if (!(bits & 8) && call_8c16337c(pl, 0xd7) != 0)
                fl |= 0x10001;
            if (!(bits & 0x10) && pl->f37c == 0)
                fl |= 1;
            if (!(bits & 0x20) && pl->f37c >= 0xb)
                fl |= 1;
            if (!(bits & 0x40)) {
                int on = g_8c510ba0 != 0;
                if (on == 1)
                    fl |= 1;
            }
        }
        switch (m[1]) {
        case 2: {
            int lv = m[2];
            Item *it = call_8c0adc1c(m[4], lv);
            if (it == 0)
                break;
            if (pl->f184->s[1] < it->f18)
                fl |= 0x10001;
            if (m[2] <= call_8c247730(pl->f3bc, m[4]))
                fl |= 0x10001;
            if (call_8c16337c(pl, 0xfc) != 0)
                break;
            if (lv > 14)
                fl |= 0x10001;
            break;
        }
        case 10: {
            Src *s = operation_8c03b55c(pl->fbcc, 6);
            if (s != 0) {
                Key k;
                Info *in;
                s->v31(&k);
                in = (Info *)operation_8c1c7658(&k);
                if (in == 0)
                    break;
                if ((unsigned int)in->f10 <= (unsigned int)k.b[3])
                    fl |= 1;
            } else {
                fl |= 1;
            }
            break;
        }
        case 11: {
            Stats *q = pl->f184;
            int ok;
            if (q == 0)
                break;
            ok = 0;
            switch (m[2]) {
            case 0:
                if (operation_8c1a7128(pl)->s[0] <= q->s[0])
                    ok = 1;
                break;
            case 1:
                if (operation_8c1a7128(pl)->s[1] <= q->s[1])
                    ok = 1;
                break;
            case 2:
                if (operation_8c1a7128(pl)->s[2] <= q->s[2])
                    ok = 1;
                break;
            case 3:
                if (operation_8c074b30(g_8c418248) >= 0xfa)
                    ok = 1;
                break;
            case 4:
                if (operation_8c074b9c(g_8c418248) >= 0xfa)
                    ok = 1;
                break;
            case 5:
                if (operation_8c1a7128(pl)->s[4] <= q->s[4])
                    ok = 1;
                break;
            case 6:
                if (operation_8c1a7128(pl)->s[5] <= q->s[5])
                    ok = 1;
                break;
            case 7:
                if (operation_8c1a7128(pl)->s[6] <= q->s[6])
                    ok = 1;
                break;
            }
            if (ok)
                fl |= 0x10001;
            break;
        }
        case 12:
            if (operation_8c07faf0(pl, m[2]) == 0)
                fl |= 1;
            break;
        }
        break;
    }
    }
    if (g_8c4dc800 != 0 && m[0] == 3) {
        if (g_8c513360 != 0)
            on2 = (g_8c513360->f20 & 0x40) != 0;
        else
            on2 = 0;
        if (on2 == 1)
            fl |= 0x10001;
    }
    {
        int res = (fl & mask) != 0;
        return res;
    }
}
