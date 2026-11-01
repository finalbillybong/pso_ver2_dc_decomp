/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c19498c
 * function: operation_8c19498c
 * language: c
 * reference size: 440 bytes
 * compiled size: 440 bytes (+0.0%)
 * differing lines: 4 of 186 reference instruction lines
 * differing bytes: 4
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
typedef struct S_c8c247d48 S_c8c247d48;
typedef struct S_g8c31b234 S_g8c31b234;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_3d0 S_g8c467180_2c_3d0;
typedef struct S_g8c467180_2c_3d8 S_g8c467180_2c_3d8;
typedef struct S_g8c467180_2c_3dc S_g8c467180_2c_3dc;
typedef struct S_g8c467180_2c_3e0 S_g8c467180_2c_3e0;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct Arg0_30_10 Arg0_30_10;
typedef struct Arg0_30_14 Arg0_30_14;
typedef struct Arg0_30_18 Arg0_30_18;
typedef struct Arg0_30_1c Arg0_30_1c;
typedef struct Arg0_30_20 Arg0_30_20;
typedef struct Arg0_30_24 Arg0_30_24;
typedef struct Arg0_30_4 Arg0_30_4;
typedef struct Arg0_30_8 Arg0_30_8;
typedef struct Arg0_30_c Arg0_30_c;
typedef struct S_vv10 S_vv10;
typedef struct S_vv11 S_vv11;
typedef struct S_vv15 S_vv15;
typedef struct S_vv16 S_vv16;
typedef struct S_vv17 S_vv17;
typedef struct S_vv3 S_vv3;
typedef struct S_vv4 S_vv4;
typedef struct S_vv5 S_vv5;
typedef struct S_vv9 S_vv9;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x30];
    int f64;
};
struct Arg0_30 {
    Arg0_30_0 *f00;
    Arg0_30_4 *f04;
    Arg0_30_8 *f08;
    Arg0_30_c *f0c;
    Arg0_30_10 *f10;
    Arg0_30_14 *f14;
    Arg0_30_18 *f18;
    Arg0_30_1c *f1c;
    Arg0_30_20 *f20;
    Arg0_30_24 *f24;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x3d0];
    S_g8c467180_2c_3d0 *f3d0;
    char unknown3d4[0x4];
    S_g8c467180_2c_3d8 *f3d8;
    S_g8c467180_2c_3dc *f3dc;
    S_g8c467180_2c_3e0 *f3e0;
};
struct S_c8c247d48 {
    char f00;
};
struct S_vv3 {
    int f00;
};
struct S_vv4 {
    int f00;
};
struct S_vv5 {
    int f00;
    char unknown4[0x20];
    int f24;
};
struct S_vv9 {
    int f00;
};
struct S_vv10 {
    int f00;
};
struct S_vv11 {
    int f00;
};
struct S_vv15 {
    int f00;
};
struct S_vv16 {
    int f00;
};
struct S_vv17 {
    int f00;
};
extern S_g8c467180 *g_8c467180;
extern void call_8c0e196c(void *, void *);
extern void call_8c0e2278(void *, void *, int);
extern S_c8c247d48 *operation_8c247d48(void);
extern int operation_8c247dac(void);
extern int operation_8c247cf0(void);
extern int operation_8c247bac(void);
extern void reset_text_cursor_8c18ea38(void);
extern void call_8c18ed08(int);
void operation_8c19498c(Object *o)
{
    int t4;
    S_c8c247d48 *t1;
    int t3;
    S_vv3 *v3;
    S_vv11 *v11;
    S_vv17 *v17;
    S_vv5 *v5;
    S_vv10 *v10;
    S_vv16 *v16;
    S_vv4 *v4;
    int t2;
    S_vv9 *v9;
    S_vv15 *v15;
    if ((float)o->f64 > 7.5f) {
        o->f64 = 7;
    }
    call_8c0e196c((void *)(((char *)o + 0x2c)), (void *)((void *)0x8c31af9c));
    call_8c0e2278((void *)(o->f30->f00), (void *)(g_8c467180->f2c->f3d0), 0);
    v3 = (S_vv3 *)o->f30->f04;
    v4 = (S_vv4 *)o->f30->f08;
    v5 = (S_vv5 *)o->f30->f0c;
    t1 = operation_8c247d48();
    if (t1 == 0 || t1->f00 == 0) {
        v3->f00 |= 2;
        v4->f00 |= 2;
        v5->f00 |= 2;
        goto L_8c194a36;
    }
    t2 = -3;
    v3->f00 &= t2;
    v4->f00 &= t2;
    v5->f00 &= t2;
    call_8c0e2278((void *)v3, (void *)(g_8c467180->f2c->f3e0), 0);
    call_8c0e2278((void *)v5, (void *)t1, 0x20);
    t2 = operation_8c247dac();
    v5->f24 = (int)(t2);
L_8c194a36:;
    v9 = (S_vv9 *)o->f30->f10;
    v10 = (S_vv10 *)o->f30->f14;
    v11 = (S_vv11 *)o->f30->f18;
    t3 = operation_8c247cf0();
    if (t3 == 0) {
        v9->f00 |= 2;
        v10->f00 |= 2;
        v11->f00 |= 2;
    } else {
        t2 = -3;
        v9->f00 &= t2;
        v10->f00 &= t2;
        v11->f00 &= t2;
        call_8c0e2278((void *)v9, (void *)(g_8c467180->f2c->f3dc), 0);
        call_8c0e2278((void *)v11, (void *)(*(S_g8c31b234 **)((char *)0x8c31b234 + (t3 << 2))), 0);
    }
    v15 = (S_vv15 *)o->f30->f1c;
    v16 = (S_vv16 *)o->f30->f20;
    v17 = (S_vv17 *)o->f30->f24;
    t4 = operation_8c247bac();
    if (t4 == 0) {
        v15->f00 |= 2;
        v16->f00 |= 2;
        v17->f00 |= 2;
        return;
    }
    t2 = -3;
    v15->f00 &= t2;
    v16->f00 &= t2;
    v17->f00 &= t2;
    call_8c0e2278((void *)v15, (void *)(g_8c467180->f2c->f3d8), 0);
    reset_text_cursor_8c18ea38();
    call_8c18ed08(t4);
    call_8c0e2278((void *)v17, (void *)((void *)0x8c4dbe40), 0x20);
}
