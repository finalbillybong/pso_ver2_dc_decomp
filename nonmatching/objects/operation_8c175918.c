/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c175918
 * function: operation_8c175918
 * language: c
 * reference size: 340 bytes
 * compiled size: 340 bytes (+0.0%)
 * differing lines: 32 of 147 reference instruction lines
 * differing bytes: 37
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c122700 S_c8c122700;
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Arg1 Arg1;
typedef struct Arg1_13c Arg1_13c;
typedef struct Arg3 Arg3;
typedef struct Arg4 Arg4;
typedef struct Block_c8c122700_24 {
    float f00;
    float f04;
    float f08;
} Block_c8c122700_24;
struct Arg1 {
    char unknown0[0x13c];
    Arg1_13c *f13c;
};
struct Frame {
    Vector3 f04;
};
struct S_c8c122700 {
    char unknown0[0x4];
    short f04;
    char unknown6[0x12];
    void *f18;
    char unknown1c[0x4];
    Arg1 *f20;
    Block_c8c122700_24 f24;
    Vector3 f30;
    Vector3 f3c;
};
struct Arg4 {
    Vector3 f00;
};
struct Arg3 {
    Vector3 f00;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern int operation_8c075894(void *, void *, int, int);
extern S_c8c122700 *heap_alloc_8c122700(void *, unsigned int);
extern void TObject_ctor_8c0330e4(void *, void *);
extern int rand(void);
extern void TItemTimer_ctor_8c1ab01c(void *, int, int, int);
extern void operation_8c175a6c();
void operation_8c175918(int a0, Arg1 *a1, int a2, Arg3 *a3, register Arg4 *a4)
{
    Frame frame;
    int t1;
    S_c8c122700 *t2;
    int t3;
    int t4;
    int t5;
    S_c8c122700 *t6;
    if (a0 != 0 && a1 != 0 && a3 != 0 && a4 != 0) {
        t1 = operation_8c075894((void *)a1, (void *)(a1->f13c), a2, (int)(&(&frame)->f04));
        if (t1 != 0) {
            t2 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x48);
            if (t2 != 0) {
                S_c8c122700 *self = (S_c8c122700 *)t2;
                S_c8c122700 **home = &self;
                float pm7;
                float pm8;
                (void)home;
                TObject_ctor_8c0330e4((void *)t2, (void *)a0);
                self->f18 = (void *)0x8c270594;
                self->f04 |= 0x10;
                self->f20 = a1;
                *(Vector3 *)&self->f30 = *(Vector3 *)&(&frame)->f04;
                *(Vector3 *)&self->f3c = *(Vector3 *)&a4->f00;
                *(Vector3 *)&self->f24 = *(Vector3 *)&a3->f00;
                t3 = rand();
                self->f24.f00 *= (float)t3 / 32768.0f * 0.5f + 0.5f;
                t4 = rand();
                self->f24.f04 *= (float)t4 / 32768.0f * 0.5f + 0.5f;
                t5 = rand();
                pm7 = (float)t5 / 32768.0f * 0.5f;
                pm8 = 0.5f;
                self->f24.f08 *= pm7 + pm8;
            }
            if (t2 != 0) {
                t6 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x2c);
                if (t6 != 0) {
                    TItemTimer_ctor_8c1ab01c((void *)t6, (int)t2, (int)operation_8c175a6c, 0xf);
                }
            }
        }
    }
}
