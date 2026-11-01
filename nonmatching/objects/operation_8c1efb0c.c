/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1efb0c
 * function: operation_8c1efb0c
 * language: c
 * reference size: 232 bytes
 * compiled size: 232 bytes (+0.0%)
 * differing lines: 12 of 79 reference instruction lines
 * differing bytes: 36
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
typedef struct S_g8c44bea0 S_g8c44bea0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_508 Arg0_508;
typedef struct S_vv5 S_vv5;
struct Object {
    char unknown0[0xe8];
    int fe8;
    char unknownec[0x94];
    float f180;
    char unknown184[0x186];
    short f30a;
    short f30c;
    char unknown30e[0xa];
    float f318;
    float f31c;
    float f320;
    char unknown324[0x1e4];
    Arg0_508 *f508;
    char unknown50c[0xbc];
    int f5c8;
};
struct S_vv5 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c44bea0 *g_8c44bea0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void operation_8c1e8e60(int, short, int);
extern void operation_021f88(void *, int, short);
extern int current_mode_active(void);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void operation_8c0ac120(int, Object *, void *);
void operation_8c1efb0c(Object *o)
{
    S_vv5 *v5;
    int t1;
    int t2;
    operation_8c1e8e60((int)o, o->f30a, 6);
    o->f320 = 0.0f;
    o->f31c = 0.0f;
    o->f318 = 0.0f;
    o->f5c8 = 0x12c;
    o->f30c = 0;
    o->f180 = 44.0f;
    operation_021f88((void *)o, 0x12, (short)0);
    o->fe8 &= -5;
    o->fe8 |= 1;
    t1 = current_mode_active();
    if (t1 != 0) {
        t2 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x3c);
        if (t2 != 0) {
            operation_8c0ac120(t2, o, g_8c44bea0);
        }
    }
    if (o->f508 != 0) {
        v5 = (S_vv5 *)o->f508;
        v5->f04 |= 1;
        o->f508 = (Arg0_508 *)0;
    }
}
