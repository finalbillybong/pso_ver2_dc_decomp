/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c246b34
 * function: operation_8c246b34
 * language: c
 * reference size: 692 bytes
 * compiled size: 688 bytes (-0.6%)
 * differing lines: 82 of 283 reference instruction lines
 * differing bytes: 229
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c33afc0 S_g8c33afc0;
typedef struct S_g8c33aff4 S_g8c33aff4;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_51c S_g8c467180_2c_51c;
typedef struct S_g8c467180_2c_520 S_g8c467180_2c_520;
typedef struct S_g8c467180_2c_524 S_g8c467180_2c_524;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
typedef struct S_vv10 S_vv10;
typedef struct S_vv15 S_vv15;
typedef struct S_vv2 S_vv2;
typedef struct S_vv20 S_vv20;
typedef struct S_vv5 S_vv5;
struct Object {
    char unknown0[0xe4];
    int fe4;
    char unknowne8[0x16];
    short ffe;
    int f100;
    int f104;
    char unknown108[0xc];
    char f114;
    char unknown115[0x13];
    char f128;
    char unknown129[0x76];
    char f19f;
};
struct S_vv1 {
    char f00;
    char unknown1[0x2e];
    char f2f;
};
struct Frame {
    char unknown0[0x2f];
    char f2f;
    int f30;
    char unknown34[0x2b];
    char f5f;
};
struct S_vv2 {
    char f00;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x51c];
    S_g8c467180_2c_51c *f51c;
    S_g8c467180_2c_520 *f520;
    S_g8c467180_2c_524 *f524;
};
struct S_vv5 {
    char f00;
    char unknown1[0x2e];
    char f2f;
};
struct S_vv10 {
    char f00;
    char unknown1[0x2e];
    char f2f;
};
struct S_vv15 {
    char f00;
    char unknown1[0x2e];
    char f2f;
};
struct S_vv20 {
    char f00;
    char unknown1[0x2e];
    char f2f;
};
extern int g_8c418248;
extern S_g8c467180 *g_8c467180;
extern char g_8c33b058[];
extern int lookup_low_id(int);
extern void strncpy_8c12b154(void *, int, int);
extern int strlen_8c12b0cc(void *);
extern void sprintf_8c12b048(S_vv1 *, void *, ...);
extern int call_8c206b08(void *);
extern int operation_8c04c630(int);
extern int call_8c18e8a0(int, int);
void operation_8c246b34(Object *o)
{
    Frame frame;
    int v21;
    S_vv2 *v2;
    S_vv1 *v1;
    S_vv5 *v5;
    int v85;
    int v19;
    int t3;
    S_vv10 *v10;
    S_vv15 *v15;
    int v86;
    int hi;
    int lo;
    int c;
    int d;
    int v24;
    int t1;
    int t2;
    S_vv20 *v20;
    int t4;
    int t5;
    int t6;
    v1 = (S_vv1 *)((char *)o + 0x140);
    t1 = lookup_low_id((int)(o->fe4));
    v1->f00 = 0;
    if (t1 != 0) {
        strncpy_8c12b154((void *)(&(&frame)->f30), (int)(t1 + 0x7e4), 0x2f);
        (&frame)->f5f = 0;
        t6 = strlen_8c12b0cc((void *)(&(&frame)->f30));
        v2 = (S_vv2 *)(t6 + (char *)&(&frame)->f30 + -1);
        while ((int)v2 > (unsigned int)&(&frame)->f30 && v2->f00 == 0x20) {
            v2->f00 = 0;
            v2--;
        }
        sprintf_8c12b048(v1, (void *)((g_8c33b058 + 0x70)), &(&frame)->f30);
    }
    v1->f2f = 0;
    sprintf_8c12b048((S_vv1 *)(((char *)o + 0x170)), (void *)((g_8c33b058 + 0x77)), g_8c467180->f2c->f520, o->ffe);
    o->f19f = 0;
    v5 = (S_vv5 *)((char *)o + 0x1a0);
    if (o->f114 != 0) {
        t2 = call_8c206b08((void *)(&o->f114));
        if (t2 == 0) {
            goto L_8c246c02;
        }
    }
    v5->f00 = 0;
    goto L_8c246c24;
L_8c246c02:;
    sprintf_8c12b048((S_vv1 *)v5, (void *)((g_8c33b058 + 0x7c)), g_8c467180->f2c->f51c, &o->f114);
L_8c246c24:;
    v5->f2f = 0;
    v10 = (S_vv10 *)o;
    v10 = (S_vv10 *)((char *)v10 + 464);
    v10->f00 = 0;
    v85 = (int)o->f104;
    if (v85 > 0) {
        t3 = operation_8c04c630(v85);
        if (t3 != 0) {
            strncpy_8c12b154((void *)(&frame), (int)(g_8c467180->f2c->f524), 0x2f);
            (&frame)->f2f = 0;
            sprintf_8c12b048((S_vv1 *)v10, (void *)(&frame), t3);
        }
    }
    v10->f2f = 0;
    v15 = (S_vv15 *)o;
    v15 = (S_vv15 *)((char *)v15 + 512);
    if (o->f128 != 0) {
        t4 = call_8c206b08((void *)(&o->f128));
        if (t4 == 0) {
            goto L_8c246c9a;
        }
    }
    v15->f00 = 0;
    goto L_8c246cb2;
L_8c246c9a:;
    sprintf_8c12b048((S_vv1 *)v15, (void *)((g_8c33b058 + 0x81)), &o->f128);
L_8c246cb2:;
    v15->f2f = 0;
    v19 = (int)(o->f100 >> 0x1c & 0xf);
    v20 = (S_vv20 *)o;
    v20 = (S_vv20 *)((char *)v20 + 560);
    v20->f00 = 0;
    if (o->fe4 == g_8c418248 && v19 != 0xf) {
        v21 = (int)o->f100;
        hi = (short)((unsigned int)v21 >> 0x10);
        t5 = call_8c18e8a0((unsigned char)hi, 0xa);
        if (t5 >= 1 && 3 >= t5) {
            v24 = t5 + -1;
        } else {
            v24 = 3;
        }
        v86 = v21 >> 8 & 0x1f;
        lo = v21 & 0x3f;
        v21 = (char)((unsigned int)v21 >> 8 >> 0x10);
        c = v21 & 0xf;
        d = hi & 0x1f;
        if (!(c > 0xc)) {
            sprintf_8c12b048((S_vv1 *)v20, (void *)(g_8c33b058 + 0x8a), v86, lo, *(S_g8c33afc0 **)((char *)0x8c33afc0 + (c << 2)), d, *(S_g8c33aff4 **)((char *)0x8c33aff4 + (v24 << 2)), v19);
            v20->f2f = 0;
        }
    }
}
