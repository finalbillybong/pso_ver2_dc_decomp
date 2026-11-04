/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0e8490
 * function: TItemProShield_v28_8c0e8490
 * language: c
 * reference size: 284 bytes
 * compiled size: 284 bytes (+0.0%)
 * differing lines: 4 of 110 reference instruction lines
 * differing bytes: 8
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TItemProShield.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_13c Arg0_13c;
typedef struct Arg1 Arg1;
struct Object {
    char unknown0[0xec];
    int fec;
    char unknownf0[0x48];
    unsigned char f138;
    char unknown139[0x3];
    Arg0_13c *f13c;
    char unknown140[0x98];
    int f1d8;
    int f1dc;
};
struct Arg1 {
    char unknown0[0x20];
    short f20;
};
struct Arg0_13c {
    char unknown0[0x198];
    short f198;
    short f19a;
};
extern int g_8c44be9c;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TItemEffShield_ctor_8c1c72fc(void *, int, short, int);
extern void operation_8c158738(unsigned char, int);
extern void operation_8c04a7a0(void *, int);
extern void operation_8c04a8ac(void *, int);
void TItemProShield_v28_8c0e8490(Object *o, Arg1 *a1)
{
    char *v1;
    short v3;
    char *v2;
    unsigned char v25;
    int t1;
    v1 = (char *)o->f1d8;
    if (((o->fec & 0x40)) == 0) {
        v2 = (char *)g_8c44be9c;
        v3 = (short)a1->f20;
        if (v2 != 0 && (unsigned short)v3 != 0xffff && v1 != 0) {
            t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x50);
            if (t1 != 0) {
                TItemEffShield_ctor_8c1c72fc((void *)t1, (int)(v2), v3, (int)(v1));
            }
        }
        operation_8c158738(o->f138, (int)(((char *)o->f13c + 0x3c)));
    }
    if (o->f1dc != 0) {
        v25 = (unsigned char)o->f138;
        switch (v25) {
        case 34:
            operation_8c04a7a0((void *)(o->f13c), (int)((int)((float)o->f13c->f198 * 0.05f)));
            return;
        case 35:
            operation_8c04a7a0((void *)(o->f13c), (int)((int)((float)o->f13c->f198 * 0.05f)));
            {
                short s = o->f13c->f19a;
                operation_8c04a8ac((void *)(o->f13c), (int)((int)((float)s * 0.05f)));
            }
        }
    }
}
