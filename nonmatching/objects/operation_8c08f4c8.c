/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c08f4c8
 * function: operation_8c08f4c8
 * language: c
 * reference size: 272 bytes
 * compiled size: 272 bytes (+0.0%)
 * differing lines: 10 of 111 reference instruction lines
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
typedef struct Block64 {
    int words[16];
} Block64;
typedef struct S_c8c08ff88 S_c8c08ff88;
typedef struct S_g8c44be94 S_g8c44be94;
typedef struct S_g8c469dc4 S_g8c469dc4;
typedef struct Object Object;
typedef struct Arg0_5c Arg0_5c;
typedef struct S_vv1 S_vv1;
typedef struct Block_p0_bc {
    char unknown0[0x10];
    Vector3 f10;
    char unknown1c[0x24];
} Block_p0_bc;
typedef struct Block_c8c08ff88_4 {
    char unknown0[0x8];
    short f08;
    char unknowna[0x36];
} Block_c8c08ff88_4;
struct S_c8c08ff88 {
    short f00;
    char unknown2[0x2];
    Block_c8c08ff88_4 f04;
    int f44;
};
struct Object {
    char unknown0[0x20];
    Vector3 f20;
    char unknown2c[0x18];
    int f44;
    int f48;
    char unknown4c[0x10];
    Arg0_5c *f5c;
    char unknown60[0x5c];
    Block_p0_bc fbc;
    char unknownfc[0x4];
    int f100;
};
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
struct Arg0_5c {
    int f00;
};
extern S_c8c08ff88 *call_8c08ff88(Object *, void *);
extern int operation_8c0900a0(Object *, short);
extern void operation_8c090238(void *, int);
extern void operation_8c090098(Object *, S_c8c08ff88 *);
extern int operation_8c09010c(Object *);
extern int call_8c090198(Object *, int);
extern void operation_8c0bbab8(int, void *, int);
void operation_8c08f4c8(Object *o)
{
    S_vv1 *v1;
    char *v22;
    char *v23;
    S_c8c08ff88 *t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    t1 = call_8c08ff88(o, (void *)(&o->f20));
    if (t1 != 0) {
        t2 = operation_8c0900a0(o, t1->f00);
        if (t2 != 0) {
            *(Block64 *)&o->fbc = *(Block64 *)&t1->f04;
            *(Vector3 *)&o->f20 = *(Vector3 *)&o->fbc.f10;
            o->f100 = (int)(t2);
            v1 = (S_vv1 *)*(S_g8c469dc4 **)0x8c469dc4;
            v1->f04 |= 1;
            *(int *)0x8c469dc4 = 0;
            operation_8c090238((void *)o, (int)(t1->f04.f08));
            operation_8c090098(o, t1);
            t3 = operation_8c09010c(o);
            o->f44 = (int)(t3);
            v22 = (char *)o->f5c->f00;
            t4 = call_8c090198(o, (int)(v22));
            o->f48 = (int)(t4);
            operation_8c0bbab8((int)o, (void *)(*(S_g8c44be94 **)0x8c44be94), (int)(t1->f44));
            return;
        }
        operation_8c090098(o, t1);
        t5 = operation_8c09010c(o);
        o->f44 = (int)(t5);
        v23 = (char *)o->f5c->f00;
        t6 = call_8c090198(o, (int)(v23));
        o->f48 = (int)(t6);
    }
}
