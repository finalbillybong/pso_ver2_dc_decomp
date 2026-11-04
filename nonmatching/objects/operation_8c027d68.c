/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c027d68
 * function: operation_8c027d68
 * language: c
 * reference size: 460 bytes
 * compiled size: 460 bytes (+0.0%)
 * differing lines: 18 of 174 reference instruction lines
 * differing bytes: 28
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
typedef struct Block72 {
    int words[18];
} Block72;
typedef struct Block80 {
    int words[20];
} Block80;
typedef struct Object Object;
typedef struct S_vv4 S_vv4;
typedef struct S_vv4_bc8 S_vv4_bc8;
typedef struct S_vv7 S_vv7;
struct S_vv7 {
    int f00;
};
struct S_vv4 {
    char unknown0[0x350];
    int f350;
    char unknown354[0x5c];
    int f3b0;
    char unknown3b4[0x10c];
    Block72 f4c0;
    char unknown508[0x2dc];
    Block80 f7e4;
    char unknown834[0x394];
    S_vv4_bc8 *fbc8;
};
struct Object {
    char tag;
    char f01;
    char f02;
    char f03;
    char unknown4[0x3];
    char f07;
    char unknown8[0x368];
    Block80 f370;
    Block72 f3c0;
};
extern int g_8c418248;
extern int g_8c467188;
extern int g_8c470344;
extern int g_8c470348;
extern int operation_8c16ac98(void *, int);
extern void operation_8c16a618(void *, int);
extern int operation_8c1a7128(int);
extern void operation_8c02c390(S_vv4 *, void *, int);
extern int call_8c04a838(S_vv4 *);
extern int call_8c04a900(S_vv4 *);
extern void split14_8c247870(signed char, void *, void *);
extern void call_8c02ca48(S_vv4 *, Object *);
int operation_8c027d68(Object *o)
{
    int v22;
    int v27;
    S_vv7 *v7;
    int v10;
    short v9;
    int t2;
    unsigned int lim;
    int v15;
    S_vv4 *v4;
    int v20;
    int t3;
    int v31;
    int t1;
    int v21;
    int t4;
    int pm6;
    unsigned char pm7;
    int pm8;
    int pm5;
    int pm9;
    if (g_8c418248 == 0xffff) {
        v4 = (S_vv4 *)0;
    } else {
        if (g_8c418248 >= 0xc) {
            v4 = (S_vv4 *)0;
        } else {
            int v1;
            v1 = (int)*(int *)((char *)0x8c41ce2c + (g_8c418248 << 2));
            v4 = (S_vv4 *)v1;
        }
    }
    if (!(0 != v4)) {
        return 0;
    }
    v9 = 0;
    v7 = (S_vv7 *)0x8c004000;
    lim = 0x1000;
    for (; (unsigned int)v9 < lim; ) {
        if ((v7++)->f00 != 0) {
            v4->f3b0 |= 1;
            break;
        }
        v9++;
    }
    *(int *)((char *)v4 + 0x350) |= 0x800000;
    *(Block80 *)&o->f370 = *(Block80 *)&v4->f7e4;
    if (v4->fbc8 == 0) {
        v15 = (int)0;
    } else {
        t4 = operation_8c16ac98((void *)(v4->fbc8), (int)(((char *)o + 0x4)));
        v15 = (int)t4;
    }
    o->tag = v15;
    operation_8c16a618((void *)(v4->fbc8), (int)v4);
    pm9 = 0x34c;
    pm8 = operation_8c1a7128((int)v4);
    operation_8c02c390(v4, (void *)(((char *)o + pm9)), pm8);
    o->f01 = call_8c04a838(v4);
    o->f02 = call_8c04a900(v4);
    *(Block72 *)&o->f3c0 = *(Block72 *)&v4->f4c0;
    v20 = (int)0x408;
    v27 = (int)0;
    v21 = (int)0x404;
    goto L_8c027e78;
    pm7 = 0;
    v22 = (int)pm7;
L_8c027e56:
    ;
    pm5 = (int)o + v22 * 0x1c + 6;
    split14_8c247870((signed char)(*(char *)((char *)((char *)((int)v4 + v21) + 0x0) + ((short)v22))), (void *)(v20 + ((int)o + v22)), (void *)(pm5));
    pm6 = (1 + v22);
    v27 = pm6;
L_8c027e78:
    ;
    v22 = (int)v27;
    if (0x13 > v27) {
        goto L_8c027e56;
    }
    o->f03 = g_8c467188;
    v31 = 1;
    if (g_8c470344 == 0 && 0 == g_8c470348) {
        v31 = (int)0;
    }
    if (v31 != 0) {
        o->f07 |= 0x40;
    }
    call_8c02ca48(v4, o);
    v4->f350 &= -0x800001;
    return 1;
}
