/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c2242c8
 * function: operation_8c2242c8
 * language: c
 * reference size: 368 bytes
 * compiled size: 368 bytes (+0.0%)
 * differing lines: 32 of 162 reference instruction lines
 * differing bytes: 42
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c1a6804 S_c8c1a6804;
typedef struct Object Object;
typedef struct Arg0_78 Arg0_78;
typedef struct Arg0_7c Arg0_7c;
typedef struct Arg0_84 Arg0_84;
typedef struct Arg0_84_0 Arg0_84_0;
typedef struct Arg0_88 Arg0_88;
typedef struct Arg0_88_0 Arg0_88_0;
typedef struct Arg0_8c Arg0_8c;
struct Object {
    char unknown0[0x71];
    char f71;
    short f72;
    short f74;
    short f76;
    Arg0_78 *f78;
    Arg0_7c *f7c;
    int f80;
    Arg0_84 *f84;
    Arg0_88 *f88;
    Arg0_8c *f8c;
};
struct Arg0_84 {
    Arg0_84_0 *f00;
};
struct Arg0_88 {
    Arg0_88_0 *f00;
};
struct Arg0_8c {
    int f00;
};
struct S_c8c1a6804 {
    int f00;
};
struct Arg0_78 {
    char f00;
};
extern S_c8c1a6804 *table_third_8c1a6804(void *, int);
extern void operation_8c1a68d4(void *, short, short);
extern void operation_8c1a6810(void *, short, int, int);
extern int table_first_8c1a6604(void *, int);
extern int table_second_8c1a6610(void *, int);
extern void call_8c1a661c(int, int, short, int, int, int, int);
void operation_8c2242c8(Object *o)
{
    S_c8c1a6804 *t1;
    S_c8c1a6804 *t2;
    S_c8c1a6804 *t3;
    int t4;
    int t5;
    int t6;
    int t7;
    switch (o->f71) {
    case 0:
    case 2:
        t1 = table_third_8c1a6804((void *)o, (int)(o->f7c));
        operation_8c1a68d4((void *)t1, o->f72, o->f74);
        operation_8c1a6810((void *)t1, o->f76, (int)(o->f84->f00), (int)(o->f88->f00));
        if (o->f8c->f00 != 0) {
            t2 = table_third_8c1a6804((void *)o, (int)(o->f80));
            t2->f00 &= -3;
            operation_8c1a68d4((void *)t2, (short)(0x40 - o->f72), o->f74);
            operation_8c1a6810((void *)t2, o->f76, (int)(o->f84->f00 == 0), (int)(o->f88->f00));
            return;
        }
        if (!((unsigned int)0xc > (unsigned int)o->f80)) {
            return;
        }
        t3 = table_third_8c1a6804((void *)o, (int)(o->f80));
        t3->f00 |= 2;
        return;
    case 3:
        t4 = table_first_8c1a6604((void *)o, (int)(o->f80));
        t5 = table_second_8c1a6610((void *)o, (int)(o->f80));
        call_8c1a661c(t4, t5, 0xff, 0, 0, 0, 0);
    case 1:
        t6 = table_first_8c1a6604((void *)o, (int)(o->f7c));
        t7 = table_second_8c1a6610((void *)o, (int)(o->f7c));
        call_8c1a661c(t6, t7, o->f76, (int)(o->f78->f00), (int)(o->f84->f00), (int)(o->f88->f00), (int)(o->f7c));
    }
}
