/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c09f4b8
 * function: TEF_PvrWave_dtor_8c09f4b8
 * language: c
 * reference size: 148 bytes
 * compiled size: 148 bytes (+0.0%)
 * differing lines: 10 of 61 reference instruction lines
 * differing bytes: 11
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
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct S_vv8 S_vv8;
typedef struct S_vv8_0 S_vv8_0;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    Arg0_20 *f20;
    int f24;
    char unknown28[0x40];
    int f68;
    int f6c;
    int f70;
};
struct S_g8c44be0c {
    char unknown0[0xc];
    S_g8c44be0c_c *f0c;
};
struct S_vv8 {
    S_vv8_0 *f00;
};
extern void operation_8c0305d8(void *, int);
extern void TObject_dtor_8c03311c(void *, short);
extern void operation_8c122774(void *, Object *);
Object *TEF_PvrWave_dtor_8c09f4b8(Object *o, int a1)
{
    S_vv8 *v8;
    if (o != 0) {
        o->dispatch = (void *)0x8c265960;
        v8 = (S_vv8 *)(*(S_g8c44be0c **)0x8c44be0c)->f0c;
        *(int *)((char *)((char *)v8->f00 + 0x8) + (o->f24 * 0xc)) = (int)(o->f70);
        *(int *)((char *)((char *)v8->f00 + 0x4) + (o->f24 * 0xc)) = (int)(o->f6c);
        *(int *)((char *)((char *)v8->f00 + 0x0) + (o->f24 * 0xc)) = (int)(o->f68);
        operation_8c0305d8((void *)(o->f20), 1);
        TObject_dtor_8c03311c((void *)o, (short)0);
        if ((short)a1 > 0) {
            operation_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
