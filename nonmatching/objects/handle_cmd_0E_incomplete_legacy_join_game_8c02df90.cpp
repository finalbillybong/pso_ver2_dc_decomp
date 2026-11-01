/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c02df90
 * function: handle_cmd_0E_incomplete_legacy_join_game_8c02df90
 * language: c++
 * reference size: 264 bytes
 * compiled size: 264 bytes (+0.0%)
 * differing lines: 12 of 114 reference instruction lines
 * differing bytes: 12
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Block100 {
    int words[25];
} Block100;
typedef struct Rec {
    unsigned char f00;
    unsigned char f01;
    unsigned short f02;
    int f04;
    char unknown8[0x18];
} Rec;
typedef struct Arg1 {
    char unknown0[0x1];
    unsigned char f01;
    char unknown2[0x2];
    Rec recs[4];
    Block100 f84;
} Arg1;
class Object {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(void *);
    char unknown1c[0xa51];
    unsigned char fa6d;
    unsigned short fa6e;
    int fa70;
    char unknowna74[0xc];
    int fa80;
    char unknowna84[0xa6c4];
    void (*fb148)(Rec *, int, int);
};
extern Block100 g_8c42ae8c;
extern "C" char g_8c2e7ce0[];
extern "C" void handle_cmd_0E_incomplete_legacy_join_game_8c02df90(Object *o, Arg1 *a1)
{
    int i;
    int n;
    int found;
    int ok;
    int v;
    int off;
    o->v4(g_8c2e7ce0 + 0x1c8);
    g_8c42ae8c = a1->f84;
    n = a1->f01;
    found = -1;
    for (i = 0; i < n && i < 4; i++) {
        off = i << 5;
        ok = 0;
        v = 0;
        if (*(unsigned char *)((char *)((char *)a1 + 5) + off) == o->fa6d && (*(unsigned short *)((char *)((char *)a1 + 6) + off) & 0xffff) == (o->fa6e & 0xffff)) {
            v = 1;
        }
        if (v != 0) {
            v = *(int *)((char *)((char *)a1 + 8) + off);
            if (v == o->fa70) {
                ok = 1;
            }
        }
        if (ok == 1) {
            found = i;
        }
    }
    if (found == -1) {
        for (;;) {
        }
    }
    o->fa80 = 1;
    if (o->fb148 != 0) {
        o->fb148(a1->recs, a1->f01, found);
    }
}
