/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c09f398
 * function: TEF_PvrWave_ctor_8c09f398
 * language: c
 * reference size: 288 bytes
 * compiled size: 288 bytes (+0.0%)
 * differing lines: 8 of 123 reference instruction lines
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
typedef struct S_g8c44be0c S_g8c44be0c;
typedef struct S_g8c44be0c_c S_g8c44be0c_c;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_34 Arg0_34;
typedef struct S_vv3 S_vv3;
typedef struct S_vv3_0 S_vv3_0;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    Arg0_20 *f20;
    int f24;
    char unknown28[0xc];
    Arg0_34 *f34;
    int f38;
    char unknown3c[0x2c];
    int f68;
    int f6c;
    int f70;
};
struct S_g8c44be0c {
    char unknown0[0xc];
    S_g8c44be0c_c *f0c;
};
struct S_vv3 {
    S_vv3_0 *f00;
};
struct Arg0_34 {
    int f00;
    int f04;
    int f08;
};
extern void TObject_ctor_8c0330e4(void *, void *);
extern void set_record_8c37e9a8(void *, int, int, int, int);
extern void set_record_8c37e9b6(void *, void *, int, int);
extern int game_malloc_8c011ecc(int);
extern void operation_8c03056c(void *, int);
extern void operation_8c03059c(void *, int, int);
Object *TEF_PvrWave_ctor_8c09f398(Object *o, int a1, int a2, int a3, int a4)
{
    Object **home = &o;
    S_vv3 *v3;
    int t1;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c265960;
    o->tag = (int)(*(int *)0x8c302088);
    o->size = 0x74;
    o->f24 = a4;
    o->f34 = (Arg0_34 *)((char *)o + 0x28);
    o->f38 = 1;
    set_record_8c37e9a8((void *)(((char *)o + 0x3c)), a2, 0, 0, 0);
    set_record_8c37e9b6((void *)(((char *)o + 0x28)), (void *)(((char *)o + 0x3c)), 0, 0x40000000);
    t1 = game_malloc_8c011ecc(0x24);
    if (t1 != 0) {
        operation_8c03056c((void *)t1, (int)(&o->f34));
    }
    o->f20 = (Arg0_20 *)t1;
    operation_8c03059c((void *)(o->f20), a2, a3);
    v3 = (S_vv3 *)(*(S_g8c44be0c **)0x8c44be0c)->f0c;
    o->f70 = (int)(*(int *)((char *)((char *)v3->f00 + 0x8) + (a4 * 0xc)));
    o->f6c = (int)(*(int *)((char *)((char *)v3->f00 + 0x4) + (a4 * 0xc)));
    o->f68 = (int)(*(int *)((char *)((char *)v3->f00 + 0x0) + (a4 * 0xc)));
    *(int *)((char *)((char *)v3->f00 + 0x8) + (a4 * 0xc)) = (int)(o->f34->f08);
    *(int *)((char *)((char *)v3->f00 + 0x4) + (a4 * 0xc)) = (int)(o->f34->f04);
    *(int *)((char *)v3->f00 + (a4 * 0xc)) = (int)(o->f34->f00);
    return o;
}
