/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c210b5c
 * function: TWindowDD_ctor_8c210b5c
 * language: c
 * reference size: 1328 bytes
 * compiled size: 1388 bytes (+4.5%)
 * differing lines: 332 of 474 reference instruction lines
 * differing bytes: 1013
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +60 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_c8c215904 S_c8c215904;
typedef struct Frame Frame;
typedef struct S_g8c335e40 S_g8c335e40;
typedef struct S_g8c335e44 S_g8c335e44;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c5051e4 S_g8c5051e4;
typedef struct S_g8c505200 S_g8c505200;
typedef struct S_g8c505200_0 S_g8c505200_0;
typedef struct S_g8c50520c S_g8c50520c;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    int f20;
    int f24;
    int f28;
    char unknown2c[0x18];
    int f44;
    char unknown48[0x1c];
    S_c8c215904 *f64;
    S_c8c215904 *f68;
    S_c8c215904 *f6c;
    S_c8c215904 *f70;
    char unknown74[0x8];
    int f7c;
    int f80;
    int f84;
    int f88;
    int f8c;
    int f90;
    int f94;
    int f98;
    int f9c;
    int fa0;
    int fa4;
    int fa8;
    int fac;
    int fb0;
    int fb4;
    int fb8;
    int fbc;
    int fc0;
    short fc4;
    short fc6;
    char unknownc8[0x10];
    int fd8;
    int fdc;
    short fe0;
    short fe2;
    char unknowne4[0x10];
    int ff4;
    int ff8;
    short ffc;
    char unknownfe[0x2];
    int f100;
    int f104;
};
struct S_g8c5051e4 {
    char f00;
};
struct Frame {
    float f04;
    float f08;
    float f0c;
    float f10;
};
struct S_g8c50520c {
    char unknown0[0x8a4];
    short f8a4;
};
struct S_c8c215904 {
    char unknown0[0x38];
    float f38;
    float f3c;
    float f40;
    char unknown44[0x4];
    float f48;
    float f4c;
    float f50;
};
struct S_c8c021ef8 {
    char unknown0[0x34];
    int f34;
};
extern float g_8c2e1608;
extern float g_8c2e1614;
extern float g_8c2e1618;
extern float g_8c2e1620;
extern float g_8c2e1668;
extern float g_8c2e166c;
extern float g_8c2e1670;
extern float g_8c2e1674;
extern float g_8c2e1678;
extern float g_8c2e167c;
extern float g_8c2e1694;
extern float g_8c2e1698;
extern float g_8c2e169c;
extern float g_8c2e16c0;
extern float g_8c2e16c4;
extern float g_8c2e16c8;
extern S_g8c335e40 *g_8c335e40;
extern S_g8c335e44 *g_8c335e44;
extern int g_8c335ef8;
extern S_g8c418248 *g_8c418248;
extern int g_8c5051e0;
extern S_g8c5051e4 *g_8c5051e4;
extern S_g8c505200 *g_8c505200;
extern S_g8c50520c *g_8c50520c;
extern void TObject_ctor_8c0330e4(void *, void *);
extern void call_8c210894(void);
extern int TWindowDD_WS_ScrollBar_create_8c215420(void);
extern int TWindowDD_WS_Word_create_8c215bec(int, int);
extern void operation_8c212270(int, void *);
extern void operation_8c2122d4(int, void *);
extern S_c8c215904 *operation_8c215904(void *, int, int, int, float);
extern void operation_8c215ab8(void *);
extern void call_8c20bb4c(void *, S_g8c5051e4 *, void *);
extern void call_8c20c408(void *, S_g8c5051e4 *, void *);
extern void call_8c20d33c(void *, S_g8c5051e4 *, void *);
extern void call_8c20e420(void *, S_g8c5051e4 *, void *);
extern void call_8c20f644(void *, S_g8c5051e4 *, void *);
extern void operation_8c215b00(void *, int);
extern int operation_8c214ff0(void);
extern S_c8c021ef8 *lookup_low_id(int);
Object *TWindowDD_ctor_8c210b5c(Object *o, int a1, int a2)
{
    Frame frame;
    Object **home = &o;
    int v2;
    int v1;
    int v5;
    int v6;
    int v9;
    int v10;
    int v13;
    int v18;
    int v21;
    int t1;
    int t2;
    int t3;
    S_c8c215904 *t4;
    S_c8c215904 *t5;
    S_c8c215904 *t6;
    S_c8c215904 *t7;
    int t8;
    S_c8c021ef8 *t9;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c27821c;
    o->tag = (int)(g_8c335ef8);
    o->size = 0x108;
    g_8c5051e4->f00 = 0;
    call_8c210894();
    v1 = (int)-1;
    o->fc0 = a2;
    o->fc6 = 0;
    o->fc4 = 0;
    v5 = (int)0;
    goto L_8c210bdc;
    v2 = (int)0;
    do {
        *(short *)((char *)((char *)o + 0xc8) + (v2 << 1)) = v1;
        v2 = (int)(v2 + 1);
        v5 = (int)v2;
L_8c210bdc:;
        v2 = (int)v5;
    } while (8 > v5);
    v1 = (int)-1;
    o->fd8 = 0;
    o->fdc = 0;
    o->fe2 = 0;
    o->fe0 = 0;
    v9 = (int)0;
    goto L_8c210c24;
    v6 = (int)0;
    do {
        *(short *)((char *)((char *)o + 0xe4) + (v6 << 1)) = v1;
        v6 = (int)(v6 + 1);
        v9 = (int)v6;
L_8c210c24:;
        v6 = (int)v9;
    } while (8 > v9);
    o->ff4 = 0;
    o->ff8 = 0;
    t1 = TWindowDD_WS_ScrollBar_create_8c215420();
    o->f7c = (int)(t1);
    v13 = (int)0;
    goto L_8c210c6a;
    v10 = (int)0;
    do {
        *(int *)((char *)&o->f24 + (v10 << 2)) = 0;
        v10 = (int)(v10 + 1);
        *(int *)((char *)&o->f44 + (v10 << 2)) = 0;
        v13 = (int)v10;
L_8c210c6a:;
        v10 = (int)v13;
    } while (8 > v13);
    o->f20 = 0;
    o->f88 = 0;
    o->f8c = -1;
    o->f90 = -1;
    t2 = TWindowDD_WS_Word_create_8c215bec((int)(o->f88), (int)((int)g_8c2e1608));
    if (t2 != 0) {
        operation_8c212270((int)o, (void *)t2);
        o->f24 = (int)(t2);
    }
    o->f44 = 0;
    t3 = TWindowDD_WS_Word_create_8c215bec((int)(o->f8c), (int)((int)g_8c2e1608));
    if (t3 != 0) {
        operation_8c2122d4((int)o, (void *)t3);
        o->f28 = (int)(t3);
    }
    v21 = (int)0;
    goto L_8c210d0c;
    v18 = (int)0;
    do {
        *(int *)((char *)&o->f64 + (v18 << 2)) = 0;
        v18 = (int)(v18 + 1);
        v21 = (int)v18;
L_8c210d0c:;
        v18 = (int)v21;
    } while (6 > v21);
    (&frame)->f0c = g_8c2e1668;
    (&frame)->f10 = g_8c2e166c;
    (&frame)->f04 = g_8c2e1614;
    (&frame)->f08 = (&frame)->f10;
    t4 = operation_8c215904((void *)(&(&frame)->f0c), (int)(&(&frame)->f04), (int)g_8c335e40, 4, g_8c2e1670);
    o->f64 = t4;
    (&frame)->f0c = g_8c2e1674;
    (&frame)->f04 = g_8c2e1618;
    (&frame)->f10 = g_8c2e1678;
    (&frame)->f08 = (&frame)->f10;
    t5 = operation_8c215904((void *)(&(&frame)->f0c), (int)(&(&frame)->f04), (int)g_8c335e44, 4, g_8c2e167c);
    o->f68 = t5;
    (&frame)->f0c = g_8c2e1694;
    (&frame)->f10 = g_8c2e1698;
    (&frame)->f04 = (&frame)->f0c;
    (&frame)->f08 = g_8c2e1620;
    t6 = operation_8c215904((void *)(&(&frame)->f0c), (int)(&(&frame)->f04), (int)(*(S_g8c505200_0 **)((char *)((char *)g_8c505200 + 0x0) + (g_8c50520c->f8a4 << 2))), 5, g_8c2e169c);
    o->f6c = t6;
    if (t6 != 0) {
        operation_8c215ab8((void *)t6);
    }
    switch (g_8c5051e0) {
    case 0:
        call_8c20bb4c((void *)(&o->fc4), g_8c5051e4, g_8c418248);
        break;
    case 1:
    default:
        call_8c20c408((void *)(&o->fc4), g_8c5051e4, g_8c418248);
        break;
    case 4:
        call_8c20d33c((void *)(&o->fc4), g_8c5051e4, g_8c418248);
        break;
    case 2:
        call_8c20e420((void *)(&o->fc4), g_8c5051e4, g_8c418248);
        break;
    case 3:
        call_8c20f644((void *)(&o->fc4), g_8c5051e4, g_8c418248);
    }
    (&frame)->f0c = g_8c2e16c0;
    (&frame)->f10 = g_8c2e16c4;
    (&frame)->f04 = g_8c2e1614;
    (&frame)->f08 = (&frame)->f10;
    t7 = operation_8c215904((void *)(&(&frame)->f0c), (int)(&(&frame)->f04), (int)g_8c5051e4, 0, g_8c2e16c8);
    o->f70 = t7;
    if (t7 != 0) {
        operation_8c215ab8((void *)t7);
        operation_8c215b00((void *)t7, 0);
        t7->f48 = t7->f38 = g_8c2e1614;
        t7->f4c = t7->f3c = g_8c2e16c4;
        t7->f40 = 2.0f;
        t7->f50 = 2.0f;
    }
    t8 = operation_8c214ff0();
    o->f80 = (int)(t8);
    o->f84 = 0;
    o->fa8 = 0;
    o->fac = 0;
    o->fb0 = 0;
    o->fb4 = 0;
    o->fb8 = 0;
    o->fbc = 0;
    o->ffc = 0x13;
    o->f100 = 0;
    o->f94 = 0;
    o->f98 = 0;
    o->f9c = -1;
    o->fa0 = 0;
    o->fa4 = 0;
    o->f104 = 0;
    t9 = lookup_low_id((int)g_8c418248);
    if (t9 != 0) {
        o->fa0 = t9->f34 & 0x100000;
    }
    return o;
}
