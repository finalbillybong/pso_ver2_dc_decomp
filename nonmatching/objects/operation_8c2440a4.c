/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c2440a4
 * function: operation_8c2440a4
 * language: c
 * reference size: 436 bytes
 * compiled size: 440 bytes (+0.9%)
 * differing lines: 32 of 182 reference instruction lines
 * differing bytes: 404
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_c8c021ef8_s6dc S_c8c021ef8_s6dc;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_g8c46fe20_54 S_g8c46fe20_54;
typedef struct S_g8c4d59d8 S_g8c4d59d8;
typedef struct S_g8c4db9e4 S_g8c4db9e4;
typedef struct S_g8c510c88 S_g8c510c88;
typedef struct Object Object;
typedef struct S_vv14 S_vv14;
typedef struct S_vv23 S_vv23;
struct Object {
    char unknown0[0x3c];
    int f3c;
    char unknown40[0x20];
    int f60;
};
struct S_g8c510c88 {
    char unknown0[0x24];
    int f24;
};
struct S_g8c46fe20 {
    char unknown0[0x20];
    short f20;
    char unknown22[0x2a];
    int f4c;
    char unknown50[0x4];
    S_g8c46fe20_54 *f54;
};
struct S_vv14 {
    char unknown0[0x11b4];
    unsigned short f11b4;
};
struct S_g8c46fe20_54 {
    char unknown0[0x22];
    short f22;
};
struct S_vv23 {
    char unknown0[0x20];
    short f20;
};
struct S_g8c4d59d8 {
    char unknown0[0x4];
    short f04;
};
struct S_c8c021ef8 {
    char unknown0[0x34];
    int f34;
};
struct S_c8c021ef8_s6dc {
    char unknown0[0x8];
    float f08;
    float f0c;
    char unknown10[0x8];
    float f18;
    float f1c;
    char unknown20[0x8];
    float f28;
    float f2c;
    char unknown30[0x8];
    float f38;
    float f3c;
    char unknown40[0x8];
    float f48;
    float f4c;
    char unknown50[0x1c];
    int f6c;
};
extern S_g8c418248 *g_8c418248;
extern S_g8c46fe20 *g_8c46fe20;
extern S_g8c4d59d8 *g_8c4d59d8;
extern S_g8c4db9e4 *g_8c4db9e4;
extern S_g8c510c88 *g_8c510c88;
extern int create_item_view_8c21ddcc(void);
extern void operation_8c0de330(int);
extern void operation_8c0fe2f4(void);
extern void call_8c18280c(void);
extern void operation_8c2433bc(Object *, int);
extern S_c8c021ef8 *lookup_low_id(int);
extern void operation_8c026700(int, int);
extern void call_8c243cd4(Object *);
void operation_8c2440a4(Object *o)
{
    S_vv14 *v14;
    int v15;
    int v16;
    S_vv23 *v23;
    int v30;
    int t1;
    S_c8c021ef8 *t2;
    S_c8c021ef8 *t3;
    o->f3c = g_8c510c88->f24 * 0x3c;
    if (g_8c46fe20 != 0 && g_8c46fe20->f4c == 0) {
        t1 = create_item_view_8c21ddcc();
        g_8c46fe20->f4c = (int)(t1);
    }
    operation_8c0de330((int)(o->f3c));
    operation_8c0fe2f4();
    v14 = (S_vv14 *)g_8c4db9e4;
    v15 = (int)((v14->f11b4 & 0xffff) + 1);
    if (0xffff > v15) {
        v16 = (int)v15;
    } else {
        v16 = (int)0xffff;
    }
    v14->f11b4 = v16;
    call_8c18280c();
    operation_8c2433bc(o, 1);
    t2 = lookup_low_id((int)((unsigned short)g_8c418248));
    if (t2 != 0) {
        operation_8c026700((int)t2, -1);
    }
    if (g_8c46fe20 != 0) {
        g_8c46fe20->f20 |= 0x20;
    }
    if (g_8c46fe20 != 0 && g_8c46fe20->f54 != 0) {
        g_8c46fe20->f54->f22 |= 8;
    }
    v23 = (S_vv23 *)g_8c46fe20;
    if (v23 != 0) {
        v23->f20 |= 1;
        if (g_8c4d59d8 != 0) {
            g_8c4d59d8->f04 |= 0x10;
        }
    }
    t3 = lookup_low_id((int)g_8c418248);
    if (t3 != 0) {
        t3->f34 |= 0x20000;
        {
            S_c8c021ef8_s6dc *p = (S_c8c021ef8_s6dc *)((char *)t3 + 0x6dc);
            p->f38 = 0.0f;
            p->f3c = 0.0f;
            p->f28 = 0.0f;
            p->f2c = 0.0f;
            p->f08 = 0.0f;
            p->f0c = 0.0f;
            p->f18 = 0.0f;
            p->f1c = 0.0f;
            p->f48 = 0.0f;
            p->f4c = 0.0f;
        }
        ((S_c8c021ef8_s6dc *)((char *)t3 + 0x6dc))->f6c = 0;
    }
    o->f60 = 0x5a;
    call_8c243cd4(o);
    v30 = (int)0;
    while (4 > v30) {
        *(int *)((char *)0x8c510cd0 + (v30 << 2)) = 1;
        v30 = (int)(v30 + 1);
    }
}
