/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c220dbc
 * function: operation_8c220dbc
 * language: c
 * reference size: 176 bytes
 * compiled size: 176 bytes (+0.0%)
 * differing lines: 46 of 84 reference instruction lines
 * differing bytes: 29
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block32 {
    int words[8];
} Block32;
typedef struct Frame Frame;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_0 S_vv1_0;
typedef struct S_vv4 S_vv4;
struct Frame {
    char unknown0[0x40];
    int f40;
    int f44;
    char unknown48[0x18];
};
struct S_vv1 {
    S_vv1_0 *f00;
};
struct S_vv1_0 {
    char f00;
};
struct S_vv4 {
    char f00;
};
extern Block32 g_8c336fa8;
static inline int icmp(const unsigned char *a, const unsigned char *b)
{
    unsigned char c1, c2;
    while ((c1 = *a++) == (c2 = *b++)) {
        if (c1 == 0) return 0;
    }
    return c1 - c2;
}
void operation_8c220dbc(void)
{
    Frame frame;
    char c;
    char **src;
    char *buf;
    unsigned int j;
    unsigned int i;
    int off;
    *(Block32 *)&(&frame)->f40 = *(Block32 *)&g_8c336fa8;
    src = (char **)(void *)0x8c505c20;
    buf = (char *)&frame;
    for (i = 0; i < 0x40 && **src != 0; i++) {
        c = *(*src)++;
        switch (c) {
        case 62:
            ((char *)&frame)[i] = 0;
            for (j = 0; j < 4; j++) {
                off = j << 3;
                if (icmp(*(unsigned char **)((char *)&(&frame)->f40 + off), (unsigned char *)&frame) == 0) {
                    (*(void (**)(void))((char *)&(&frame)->f44 + off))();
                }
            }
            return;
        }
        buf[i] = c;
    }
}
