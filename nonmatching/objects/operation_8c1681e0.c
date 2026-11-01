/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1681e0
 * function: operation_8c1681e0
 * language: c
 * reference size: 668 bytes
 * compiled size: 680 bytes (+1.8%)
 * differing lines: 310 of 298 reference instruction lines
 * differing bytes: 628
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by +12 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4db2f0 S_L8c4db2f0;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c44bea0 S_g8c44bea0;
typedef struct Object Object;
typedef struct Arg0_3c Arg0_3c;
typedef struct Arg3 Arg3;
typedef struct S_vv29 S_vv29;
typedef struct S_vv6 S_vv6;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    int f20;
    int f24;
    int f28;
    int f2c;
    Vector3 f30;
    Arg0_3c *f3c;
    unsigned short f40;
    char unknown42[0x2];
    int f44;
    int f48;
    int f4c;
    int f50;
};
struct S_vv6 {
    unsigned short f00;
};
struct Arg0_3c {
    char unknown0[0x3c];
    Vector3 f3c;
};
struct S_c8c021ef8 {
    char unknown0[0x458];
    float f458;
};
struct S_L8c4db2f0 {
    char unknown0[0x20];
    int f20;
};
struct S_vv29 {
    unsigned short f00;
};
extern S_g8c418248 *g_8c418248;
extern S_g8c44bea0 *g_8c44bea0;
extern S_L8c4db2f0 g_8c4db2f0;
extern char gc_8c4db2f0[];
extern char g_8c4db300[];
extern void TObject_ctor_8c0330e4(void *, void *);
extern int operation_8c185378(S_vv6 *);
extern S_c8c021ef8 *lookup_low_id(int);
extern void operation_8c169184(int, int, int);
extern void operation_8c100b34(void);
extern void play_se_8c05fbf8(int, void *, int, int);
extern void operation_8c1222c8(int, int);
extern void operation_8c13f258(void);
Object *operation_8c1681e0(Object *o, int a1, int a2, Arg3 *a3, int a4, int a5)
{
    Object **home = &o;
    int v2;
    int v1;
    int v3;
    int v21;
    int v22;
    int v5;
    unsigned short v7;
    int v4;
    unsigned short v31;
    int v23;
    int v28;
    S_vv6 *v6;
    S_vv29 *v29;
    int v30;
    unsigned short v42;
    int t1;
    int t2;
    S_c8c021ef8 *t3;
    S_c8c021ef8 *t4;
    S_c8c021ef8 *t5;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, g_8c44bea0);
    o->dispatch = (void *)0x8c2700fc;
    o->f40 = a1;
    o->f4c = a5;
    o->f48 = 0;
    o->f50 = a4;
    v2 = (int)0;
    while (4 > v2) {
        *(int *)((char *)((char *)o + 0x74) + (v2 << 2)) = (int)*(int *)((char *)((char *)a3 + 0x0) + (v2 << 2)) + 1;
        *(int *)((char *)((char *)o + 0x54) + (v2 << 2)) = (int)(v1);
        v2 = (int)(v2 + 1);
    }
    v3 = (int)0;
    while (4 > v3) {
        *(int *)((char *)((char *)o + 0x64) + (v3 << 2)) = 0xffff;
        v3 = (int)(v3 + 1);
    }
    v4 = (int)0;
    v5 = (int)-1;
    o->f2c = 4;
    v6 = (S_vv6 *)a2;
    while (4 > v4) {
        t1 = operation_8c185378(v6);
        if ((short)t1 == v5) {
            o->f2c = (int)(v4);
            goto L_8c1682a4;
        }
        t2 = operation_8c185378(v6);
        *(int *)((char *)((char *)o + 0x54) + (v4 << 2)) = (short)t2;
        v7 = (unsigned short)v6->f00;
        *(int *)((char *)((char *)o + 0x64) + (v4 << 2)) = (int)(v7);
        v4 = (int)(v4 + 1);
        v6 = (S_vv6 *)((char *)v6 + 4);
    }
L_8c1682a4:;
    t3 = lookup_low_id(a1);
    o->f3c = (Arg0_3c *)t3;
    operation_8c169184((int)o, (int)(o->f2c * 0x96 + 0x64), a1);
    if (o->f50 != 0) {
        operation_8c100b34();
        if (o->f3c == 0) {
            goto L_8c168302;
        }
        *(Vector3 *)&o->f30 = *(Vector3 *)&o->f3c->f3c;
        play_se_8c05fbf8(0x20027, (void *)(&o->f30), 0, 0);
    } else {
        operation_8c1222c8(0x3e, 0);
    }
L_8c168302:;
    o->f44 = 0;
    t4 = lookup_low_id(a1);
    if (t4 != 0) {
        o->f44 = (int)t4->f458;
    }
    v21 = (int)0;
    while (4 > v21) {
        if ((unsigned int)4 > (unsigned int)*(int *)((char *)((char *)o + 0x64) + (v21 << 2))) {
            if (*(int *)((char *)(gc_8c4db2f0 + 0x20) + (*(int *)((char *)((char *)o + 0x64) + (v21 << 2)) * 0x24)) != 2) {
                v22 = (int)0;
                while (4 > v22) {
                    v23 = (int)(v22 << 2);
                    *(int *)((char *)((char *)(*(int *)((char *)((char *)o + 0x64) + (v21 << 2)) * 0x24 + gc_8c4db2f0) + 0x0) + (v23)) = (int)(*(int *)((char *)((char *)o + 0x54) + (v23)));
                    *(int *)((char *)((char *)(*(int *)((char *)((char *)o + 0x64) + (v21 << 2)) * 0x24 + g_8c4db300) + 0x0) + (v23)) = (int)(*(int *)((char *)((char *)o + 0x64) + (v23)));
                    v22 = (int)(v22 + 1);
                }
            }
            *(int *)((char *)(gc_8c4db2f0 + 0x20) + (*(int *)((char *)((char *)o + 0x64) + (v21 << 2)) * 0x24)) = 2;
        }
        v21 = (int)(v21 + 1);
    }
    o->f28 = 0;
    o->f20 = 0;
    o->f24 = 0;
    operation_8c13f258();
    v28 = (int)0;
    v1 = (int)-1;
    while (4 > v28) {
        *(int *)((char *)((char *)o + 0x84) + (v28 << 2)) = 0xffff;
        v28 = (int)(v28 + 1);
    }
    if (o->f3c != 0) {
        t5 = lookup_low_id((int)g_8c418248);
        if (t5 != 0 && ((int)((char *)t5 + 0x4a8) + 8) != 0) {
            v29 = (S_vv29 *)((int)((char *)t5 + 0x4a8) + 8);
            v30 = (int)0;
            while (4 > v30) {
                v31 = (unsigned short)v29->f00;
                v42 = (unsigned short)0xffff;
                if (v31 == v42 && o->f40 == v31) {
                } else {
                    *(int *)((char *)((char *)o + 0x84) + (v30 << 2)) = (int)(v31);
                }
                v29 = (S_vv29 *)((char *)v29 + 4);
                v30 = (int)(v30 + 1);
            }
        }
    }
    return o;
}
