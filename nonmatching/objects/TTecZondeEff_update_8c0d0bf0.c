/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0d0bf0
 * function: TTecZondeEff_update_8c0d0bf0
 * language: c
 * reference size: 404 bytes
 * compiled size: 412 bytes (+2.0%)
 * differing lines: 136 of 167 reference instruction lines
 * differing bytes: 276
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fc40 S_g8c46fc40;
typedef struct Object Object;
typedef struct S_x28688 S_x28688;
typedef struct S_x56784 S_x56784;
typedef struct S_x57008 S_x57008;
typedef struct S_x57088 S_x57088;
typedef struct S_x57232 S_x57232;
typedef struct S_x57344 S_x57344;
typedef struct S_x57456 S_x57456;
typedef struct S_x57792 S_x57792;
typedef struct S_x58016 S_x58016;
typedef struct S_x58128 S_x58128;
typedef struct S_x76192 S_x76192;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x36];
    int f3c;
    char unknown40[0x240];
    int f280;
    int f284;
    int f288;
    int f28c;
    int f290;
};
struct S_x57088 {
    float f00;
};
struct S_x76192 {
    float f00;
};
struct S_x57008 {
    float f00;
};
struct S_x56784 {
    float f00;
};
struct S_x28688 {
    float f00;
};
struct S_x57456 {
    float f00;
};
struct S_x57232 {
    float f00;
};
struct S_x57344 {
    float f00;
};
struct S_x57792 {
    float f00;
};
struct S_x58016 {
    float f00;
};
struct S_x58128 {
    float f00;
};
extern int g_8c3fc180;
extern S_g8c46fc40 *g_8c46fc40;
extern int g_8c46fc48;
extern int call_8c18e768(int, int);
#define F(k, i) (*(float *)((char *)(int *)((char *)o + (k)) + (i)))
void TTecZondeEff_update_8c0d0bf0(Object *o)
{
    int v2;
    int v7;
    float v8;
    int off;
    int t1;
    t1 = call_8c18e768((int)(*(int *)((char *)((char *)g_8c46fc40 + 0x8) + (o->f288 * 0xc)) - g_8c3fc180), 0x44);
    g_8c46fc48 = (int)(t1);
    if (o->f280 > 0x78) {
        o->f04 |= 1;
    }
    v2 = 0;
    while (o->f3c > v2) {
        ((S_x57088 *)((char *)(int *)((char *)o + 0x248) + (v2 << 2)))->f00 -= 0.05f;
        v2 = v2 + 1;
    }
    v7 = 0;
    while (o->f3c > v7) {
        v8 = ((S_x76192 *)((char *)(int *)((char *)o + 0x248) + (v7 << 2)))->f00;
        off = v7 * 0xc;
        F(0xdc, off) = F(0x40, off) + F(0x178, off) * v8;
        F(0xe0, off) = F(0x44, off) + F(0x17c, off) * v8;
        F(0xe4, off) = F(0x48, off) + F(0x180, off) * v8;
        v7 = v7 + 1;
    }
    if (o->f280 > o->f290) {
        if ((unsigned int)o->f28c < (unsigned int)o->f284) {
            o->f284 -= o->f28c;
        } else {
            o->f284 = 0;
            o->f280 = 0x79;
        }
    }
    o->f280 += 1;
}
