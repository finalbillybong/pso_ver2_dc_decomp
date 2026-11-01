/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c2584c4
 * function: operation_8c2584c4
 * language: c
 * reference size: 512 bytes
 * compiled size: 512 bytes (+0.0%)
 * differing lines: 8 of 176 reference instruction lines
 * differing bytes: 5
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
typedef struct S_g8c4d9ae0 S_g8c4d9ae0;
typedef struct S_g8c4d9ae0_42c S_g8c4d9ae0_42c;
typedef struct S_g8c4d9ae4 S_g8c4d9ae4;
typedef struct S_g8c4d9b20 S_g8c4d9b20;
typedef struct S_g8c4d9b20_42c S_g8c4d9b20_42c;
typedef struct S_g8c4d9b24 S_g8c4d9b24;
typedef struct S_g8c4db220 S_g8c4db220;
typedef struct S_g8c4db220_42c S_g8c4db220_42c;
typedef struct S_g8c4db224 S_g8c4db224;
typedef struct Object Object;
struct Object {
    char unknown0[0x38];
    int f38;
    char unknown3c[0x4c];
    int f88;
    int f8c;
    int f90;
    int f94;
    int f98;
    unsigned short f9c;
    short f9e;
    char unknowna0[0x20];
    int fc0;
    int fc4;
    int fc8;
    int fcc;
};
struct S_g8c4d9ae0 {
    char unknown0[0x42c];
    S_g8c4d9ae0_42c *f42c;
};
struct S_g8c4d9ae0_42c {
    char unknown0[0x8];
    int f08;
};
struct S_g8c4d9ae4 {
    int f00;
    int f04;
};
struct S_g8c4db220 {
    char unknown0[0x42c];
    S_g8c4db220_42c *f42c;
};
struct S_g8c4db220_42c {
    char unknown0[0x8];
    int f08;
};
struct S_g8c4db224 {
    int f00;
    int f04;
};
struct S_g8c4d9b20 {
    char unknown0[0x42c];
    S_g8c4d9b20_42c *f42c;
};
struct S_g8c4d9b20_42c {
    char unknown0[0x8];
    int f08;
};
struct S_g8c4d9b24 {
    int f00;
    int f04;
};
extern S_g8c4d9ae0 *g_8c4d9ae0;
extern S_g8c4d9ae4 *g_8c4d9ae4;
extern S_g8c4d9b20 *g_8c4d9b20;
extern S_g8c4d9b24 *g_8c4d9b24;
extern S_g8c4db220 *g_8c4db220;
extern S_g8c4db224 *g_8c4db224;
extern int operation_03d080(unsigned short);
extern int get_current_area_8c032b10(void);
void operation_8c2584c4(Object *o)
{
    int t1;
    int t2;
    int m;
    unsigned short v9c;
    o->f9c = o->f88;
    v9c = o->f9c;
    if ((unsigned int)0x100 > (unsigned int)(v9c & 0xffff)) {
        t1 = operation_03d080(v9c);
        o->f9e = (unsigned char)t1;
    } else {
        o->f9c = 0xffff;
        o->f9e = 1;
    }
    m = 0xffff;
    o->fc0 = o->f8c & m;
    o->fcc = (int)(short)((unsigned int)o->f8c >> 0x10) & 0xffff;
    o->fc4 = (unsigned short)o->f90;
    if (o->fc4 > 6) {
        o->fc4 = 0;
    }
    o->fc8 = (int)(short)((unsigned int)o->f90 >> 0x10) & 0xffff;
    if (o->fc8 > 1) {
        o->fc8 = 0;
    }
    t2 = get_current_area_8c032b10();
    switch (t2) {
    case 3:
    case 4:
    case 5:
        o->f38 = (int)(g_8c4d9ae0->f42c->f08);
        o->f94 = (int)(g_8c4d9ae4->f00);
        o->f98 = (int)(g_8c4d9ae4->f04);
        return;
    case 1:
    case 2:
    case 6:
    case 7:
        o->f38 = (int)(g_8c4db220->f42c->f08);
        o->f94 = (int)(g_8c4db224->f00);
        o->f98 = (int)(g_8c4db224->f04);
        return;
    case 8:
    case 9:
    case 10:
        o->f38 = (int)(g_8c4d9b20->f42c->f08);
        o->f94 = (int)(g_8c4d9b24->f00);
        o->f98 = (int)(g_8c4d9b24->f04);
        return;
    case 16:
    case 17:
        if (o->fc0 == 0) {
            o->f38 = (int)(g_8c4d9ae0->f42c->f08);
            o->f94 = (int)(g_8c4d9ae4->f00);
            o->f98 = (int)(g_8c4d9ae4->f04);
            return;
        }
        o->f38 = (int)(g_8c4db220->f42c->f08);
        o->f94 = (int)(g_8c4db224->f00);
        o->f98 = (int)(g_8c4db224->f04);
        return;
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    default:
        o->f38 = 0;
        o->f94 = 0;
        o->f98 = 0;
        return;
    }
}
