/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c19eeec
 * function: operation_8c19eeec
 * language: c
 * reference size: 432 bytes
 * compiled size: 428 bytes (-0.9%)
 * differing lines: 10 of 175 reference instruction lines
 * differing bytes: 123
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
struct Object {
    int tag;
    char unknown4[0x4];
    float f08;
    char unknownc[0xc];
    int dispatch;
    char f1c;
    char f1d;
    char unknown1e[0x2];
    Arg0_20 *f20;
    int f24;
    int f28;
    int f2c;
    int f30;
    int f34;
};
struct Frame {
    char unknown0[0x14];
    char f14;
};
extern void *g_8c4dc4e0;
extern char g_8c4dc4e4;
extern void *g_8c4dc4e8;
extern char g_8c4dc4ec;
extern void *g_8c4dc4f0;
extern char g_8c4dc4f4;
extern char g_8c31cdc8[];
extern int call_8c19e748(Object *, int, void *, int, int);
extern void reset_text_cursor_8c18ea38(void);
extern void operation_8c18ea4c(int);
extern int operation_8c19f9b0(char);
extern void operation_8c18ecb8(void);
extern void operation_8c18eb44(int);
extern void operator_delete_8c18de08(int);
extern int operation_8c257e2c(int);
extern int operator_new_8c18de4c(int);
extern void strncpy_8c12b154(int, void *, int);
void operation_8c19eeec(Object *o, int a1, int a2, int a3, char a4, char a5, register char a6, int a7, int a8)
{
    int v10;
    int v16;
    int t1;
    int t2;
    int t3;
    if (g_8c4dc4e4 == 0) {
        g_8c4dc4e0 = (void *)g_8c31cdc8;
        g_8c4dc4e4 = 1;
    }
    if (g_8c4dc4ec == 0) {
        g_8c4dc4e8 = (g_8c31cdc8 + 0x4);
        g_8c4dc4ec = 1;
    }
    if (g_8c4dc4f4 == 0) {
        g_8c4dc4f0 = (g_8c31cdc8 + 0xe);
        g_8c4dc4f4 = 1;
    }
    if (a1 != 0) {
        v10 = (int)0x18;
    } else {
        v10 = (int)0x2d;
    }
    o->f08 = -7.0f;
    o->f1c = 0x2d;
    o->f1d = v10;
    o->f28 = -1;
    o->f2c = -1;
    t1 = call_8c19e748(o, a2, (void *)(o->f20), 8, 1);
    o->f20 = (Arg0_20 *)t1;
    o->f30 = -1;
    o->f34 = -1;
    o->dispatch = a8;
    o->tag |= 0x45;
    if (a7 == 0) {
        o->f30 = -1;
    } else {
        o->f30 = -0x51cb;
    }
    reset_text_cursor_8c18ea38();
    if (a6 == 1) {
        operation_8c18ea4c((int)g_8c4dc4e8);
    } else {
        if (a6 == 2) {
            operation_8c18ea4c((int)g_8c4dc4e0);
        }
        t2 = operation_8c19f9b0(a5);
        operation_8c18ea4c(t2);
    }
    operation_8c18ecb8();
    operation_8c18eb44((int)((char)a3));
    operation_8c18ea4c((int)g_8c4dc4f0);
    operation_8c18eb44((int)((int)a4));
    v16 = (int)o->f24;
    if (v16 != 0 && ((o->tag & 0x10)) != 0) {
        o->tag &= -0x11;
        operator_delete_8c18de08(v16);
    }
    if ((void *)0x8c4dbe40 != 0) {
        t3 = operation_8c257e2c((int)((void *)0x8c4dbe40));
        a3 = operator_new_8c18de4c((int)(t3 + 1));
        strncpy_8c12b154(a3, (void *)((void *)0x8c4dbe40), (int)(t3 + 1));
        o->tag |= 0x10;
    } else {
        a3 = (int)(void *)0x8c4dbe40;
    }
    o->f24 = (int)(a3);
}
