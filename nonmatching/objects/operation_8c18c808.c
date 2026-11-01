/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c18c808
 * function: operation_8c18c808
 * language: c
 * reference size: 252 bytes
 * compiled size: 252 bytes (+0.0%)
 * differing lines: 10 of 104 reference instruction lines
 * differing bytes: 10
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
typedef struct EF_4_int {
    char pad[0x4];
    int f;
} EF_4_int;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_58 Arg0_58;
typedef struct Arg0_74 Arg0_74;
typedef struct Arg0_78 Arg0_78;
typedef struct S_vv1 S_vv1;
typedef struct S_vv7 S_vv7;
struct Object {
    char unknown0[0x20];
    int f20;
    char unknown24[0x2e];
    short f52;
    short f54;
    char unknown56[0x1e];
    Arg0_74 *f74;
    Arg0_78 *f78;
};
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
struct Arg0_58 {
    char unknown0[0x4];
    short f04;
};
struct S_vv7 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern int heap_alloc_8c122700(void *, unsigned int);
extern void operation_8c19176c(void *, int);
extern void operation_8c18cb50(void *);
extern void operation_8c18c904(void *, void *, int);
extern void operation_8c18caac(void *);
extern void operation_8c18cd8c(void *, short);
extern void operation_8c18cdb4(void *, short);
extern void set_fields_8c18cddc(void *);
extern void operation_8c0dc610(void *, float);
void operation_8c18c808(Object *o)
{
    S_vv1 *v1;
    S_vv7 *v7;
    char *v8;
    int t1;
    if (o->f74 != 0) {
        v1 = (S_vv1 *)o->f74;
        v1->f04 |= 1;
        o->f74 = (Arg0_74 *)0;
    }
    t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x48);
    if (t1 != 0) {
        operation_8c19176c((void *)t1, (int)o);
    }
    o->f74 = (Arg0_74 *)t1;
    o->f20 &= -5;
    o->f78 = (Arg0_78 *)((EF_4_int *)((char *)o + (o->f52 << 3) + 0x7c))->f;
    v7 = (S_vv7 *)*(Arg0_58 **)((char *)((char *)o + 0x58) + (o->f52 << 2));
    (*(Arg0_58 **)((char *)((char *)o + 0x58) + (o->f52 << 2)))->f04 |= 0x10;
    v7->f04 |= 1;
    operation_8c18cb50((void *)o);
    {
        short k = o->f52;
        void *p = (void *)o->f78;
        operation_8c18c904((void *)o, p, k);
    }
    operation_8c18caac((void *)o);
    v8 = (char *)*(int *)((char *)((char *)o + 0x58) + (o->f54 << 2));
    operation_8c18cd8c((void *)v8, o->f52);
    operation_8c18cdb4((void *)v8, o->f54);
    set_fields_8c18cddc((void *)v8);
    operation_8c0dc610((void *)v8, 25.0f);
}
