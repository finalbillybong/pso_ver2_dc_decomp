/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c23803c
 * function: operation_8c23803c
 * language: c
 * reference size: 456 bytes
 * compiled size: 456 bytes (+0.0%)
 * differing lines: 22 of 187 reference instruction lines
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
typedef struct S_L8c339ca0 S_L8c339ca0;
typedef struct S_L8c339ca0_14 S_L8c339ca0_14;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct Frame Frame;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c5060c4 S_g8c5060c4;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char f00;
    char f01;
    char unknown2[0x3];
    char f05;
    short f06;
    int f08;
    int f0c;
    Vector3 f10;
    char unknown1c[0x13];
    char f2f;
    char f30;
};
struct S_L8c339ca0 {
    int f00;
    char unknown4[0x10];
    S_L8c339ca0_14 *f14;
};
struct S_c8c021ef8 {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x16e];
    unsigned short f1b6;
};
struct Frame {
    char unknown0[0x5f];
    char f5f;
    int f60;
    char unknown64[0x13];
    char f77;
    unsigned short f78;
    unsigned char f7a;
    unsigned char f7b;
    unsigned char f7c;
    unsigned char f7d;
    char unknown7e[0x6];
};
struct S_c8c053d84 {
    char unknown0[0x38c];
    int f38c;
};
extern S_g8c418248 *g_8c418248;
extern int g_8c44be04;
extern int g_8c4db9e4;
extern S_g8c5060c4 *g_8c5060c4;
extern S_L8c339ca0 g_8c339ca0;
extern S_c8c021ef8 *lookup_low_id(int);
extern int call_8c2383dc(void *);
extern void call_8c36d3ca(void *);
extern int call_8c18e768(int, int);
extern int call_8c18e8a0(int, int);
extern void strncpy_8c12b154(void *, void *, int);
extern void operation_8c225da0(void *, Frame *, int);
extern S_c8c053d84 *lookup_object_by_id(unsigned short);
void operation_8c23803c(void)
{
    Frame frame;
    S_vv1 *v1;
    int v11;
    int v5;
    int v6;
    unsigned short v15;
    S_c8c021ef8 *t1;
    int v4;
    int t2;
    int t3;
    int t4;
    S_c8c053d84 *t5;
    int lim;
    if (g_8c4db9e4 == 0) {
        return;
    }
    v1 = (S_vv1 *)(g_8c4db9e4 + 0x11f4);
    t1 = lookup_low_id((int)g_8c418248);
    if (t1 == 0) {
        return;
    }
    v1->f00 = (&g_8c339ca0)->f00;
    t2 = call_8c2383dc((void *)((&g_8c339ca0)->f14));
    v1->f01 = t2;
    v1->f05 = g_8c44be04;
    if (!(v1->f06 >= 0)) {
        v1->f06 = 0x270f;
    }
    lim = 0x270f;
    if ((short)++v1->f06 > (short)lim) {
        v1->f06 = lim;
    }
    *(Vector3 *)&v1->f10 = *(Vector3 *)&t1->f3c;
    call_8c36d3ca((void *)(&(&frame)->f78));
    v4 = (&frame)->f78;
    t3 = call_8c18e768(v4, 0x64);
    if (t3 != 0x14) {
        v6 = (int)0xf;
    } else {
        t4 = call_8c18e8a0(v4, 0x64);
        v5 = (int)t4;
        if (t4 > 0xf) {
            v5 = (int)0xf;
        }
        v6 = (int)v5;
    }
    v1->f08 = (((v6 << 4 | (&frame)->f7a) << 8 | (&frame)->f7b) << 8 | (&frame)->f7c) << 8 | (&frame)->f7d;
    strncpy_8c12b154((void *)((int)v1 + 0x1c), (void *)((void *)0x8c340764), 0x13);
    v1->f2f = 0;
    if (g_8c5060c4 == 0) {
        v1->f30 = 0;
    } else {
        strncpy_8c12b154((void *)(&frame), g_8c5060c4, 0x5f);
        (&frame)->f5f = 0;
        operation_8c225da0((void *)(&(&frame)->f60), (Frame *)((&frame)), 0x17);
        (&frame)->f77 = 0;
        v1->f30 = 0;
        if (*(char *)&(&frame)->f60 != 0) {
            strncpy_8c12b154((void *)((int)v1 + 0x30), (void *)(&(&frame)->f60), 0x17);
        }
    }
    v11 = (int)-1;
    v15 = (unsigned short)t1->f1b6;
    if ((v15 & 0xffff & 0xf000) == 0x1000) {
        t5 = lookup_object_by_id((unsigned short)v15);
        if (t5 != 0) {
            v11 = (int)t5->f38c;
        }
    }
    v1->f0c = (int)(v11);
}
