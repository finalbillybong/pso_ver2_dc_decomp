/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c08ccf0
 * function: operation_8c08ccf0
 * language: c
 * reference size: 336 bytes
 * compiled size: 336 bytes (+0.0%)
 * differing lines: 38 of 137 reference instruction lines
 * differing bytes: 44
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
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Block60 {
    int words[15];
} Block60;
typedef struct S_c8c08d934 S_c8c08d934;
typedef struct S_g8c44be8c S_g8c44be8c;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c44be9c S_g8c44be9c;
typedef struct S_g8c44bea0 S_g8c44bea0;
typedef struct S_g8c469da4 S_g8c469da4;
typedef struct Object Object;
typedef struct Arg0_5c Arg0_5c;
typedef struct Arg0_s20 Arg0_s20;
typedef struct Arg0_scc Arg0_scc;
typedef struct S_vv1 S_vv1;
typedef struct Block_p0_c0 {
    char unknown0[0xc];
    Block8 f0c;
    char unknown14[0x28];
} Block_p0_c0;
typedef struct Block_c8c08d934_4 {
    char unknown0[0x8];
    short f08;
    char unknowna[0x32];
} Block_c8c08d934_4;
struct S_c8c08d934 {
    short f00;
    char unknown2[0x2];
    Block_c8c08d934_4 f04;
    int f40;
};
struct Object {
    char unknown0[0x20];
    Block8 f20;
    char unknown28[0x1c];
    int f44;
    int f48;
    char unknown4c[0x10];
    Arg0_5c *f5c;
    char unknown60[0x60];
    Block_p0_c0 fc0;
    char unknownfc[0x4];
    int f100;
};
struct Arg0_scc {
    char unknown0[0x8];
    int f08;
};
struct Arg0_s20 {
    char unknown0[0x8];
    int f08;
};
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
struct Arg0_5c {
    int f00;
};
extern S_g8c44be8c *g_8c44be8c;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c44be9c *g_8c44be9c;
extern S_g8c44bea0 *g_8c44bea0;
extern S_g8c469da4 *g_8c469da4;
extern S_c8c08d934 *call_8c08d934(Object *, void *);
extern int operation_8c08da4c(Object *, short);
extern void operation_8c08dc38(void *, int);
extern void operation_8c08da44(int, void *);
extern int operation_8c08db0c(Object *);
extern int call_8c08db98(Object *, int);
extern void operation_8c0bbab8(int, void *, int);
void operation_8c08ccf0(Object *o)
{
    S_c8c08d934 *t1;
    S_vv1 *v1;
    char *v23;
    char *v24;
    char *v2;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    t1 = call_8c08d934(o, (void *)(&o->f20));
    if (t1 != 0) {
        t2 = operation_8c08da4c(o, t1->f00);
        if (t2 != 0) {
            *(Block60 *)&o->fc0 = *(Block60 *)&t1->f04;
            *(Block8 *)&o->f20 = *(Block8 *)&o->fc0.f0c;
            v2 = (char *)((Arg0_scc *)((char *)o + 0xcc))->f08;
            ((Arg0_s20 *)((char *)o + 0x20))->f08 = (int)(v2);
            o->f100 = (int)(t2);
            v1 = (S_vv1 *)g_8c469da4;
            v1->f04 |= 1;
            g_8c469da4 = (S_g8c469da4 *)0;
            operation_8c08dc38((void *)o, (int)(t1->f04.f08));
            operation_8c08da44((int)o, (void *)t1);
            t3 = operation_8c08db0c(o);
            o->f44 = (int)(t3);
            v23 = (char *)o->f5c->f00;
            t4 = call_8c08db98(o, (int)(v23));
            o->f48 = (int)(t4);
            operation_8c0bbab8((int)o, g_8c44be8c, (int)(t1->f40));
            operation_8c0bbab8((int)o, g_8c44be98, (int)(t1->f40));
            operation_8c0bbab8((int)o, g_8c44be9c, (int)(t1->f40));
            operation_8c0bbab8((int)o, g_8c44bea0, (int)(t1->f40));
            return;
        }
        operation_8c08da44((int)o, (void *)t1);
        t5 = operation_8c08db0c(o);
        o->f44 = (int)(t5);
        v24 = (char *)o->f5c->f00;
        t6 = call_8c08db98(o, (int)(v24));
        o->f48 = (int)(t6);
    }
}
