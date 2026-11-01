/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c21f91c
 * function: operation_8c21f91c
 * language: c
 * reference size: 484 bytes
 * compiled size: 484 bytes (+0.0%)
 * differing lines: 36 of 222 reference instruction lines
 * differing bytes: 32
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
typedef struct S_g8c467184 S_g8c467184;
typedef struct S_g8c46fe00 S_g8c46fe00;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Arg1 {
    char unknown0[0x30];
    int f30;
};
struct Object {
    char unknown0[0x68];
    char f68;
};
extern S_g8c467184 *g_8c467184;
extern S_g8c46fe00 *g_8c46fe00;
extern void sq_select_8c38aeb4(int);
extern void call_8c3827d8(void *);
extern void sq_header_8c38af22(int, int);
extern void call_8c21fb00(Object *, Arg1 *, int, int);
extern void call_8c21fd20(Object *, Arg1 *);
extern void sq_flush_8c38af12(void);
extern void call_8c21fc04(Object *, Arg1 *, int, int);
void operation_8c21f91c(Object *o, Arg1 *a1)
{
    if (!(a1->f30 >= 0)) {
        return;
    }
    sq_select_8c38aeb4(1);
    call_8c3827d8(g_8c46fe00);
    sq_header_8c38af22(2, -1);
    call_8c21fb00(o, a1, 0, -1);
    call_8c21fb00(o, a1, 1, -1);
    if (((o->f68 & 1)) != 0) {
        call_8c21fb00(o, a1, 2, -1);
    } else {
        call_8c21fb00(o, a1, 2, -0x7f7f80);
    }
    if (((o->f68 & 2)) != 0) {
        call_8c21fb00(o, a1, 3, -1);
    } else {
        call_8c21fb00(o, a1, 3, -0x7f7f80);
    }
    if (((o->f68 & 4)) != 0) {
        call_8c21fb00(o, a1, 4, -1);
        call_8c21fb00(o, a1, 5, -1);
    } else {
        call_8c21fb00(o, a1, 4, -0x7f7f80);
        call_8c21fb00(o, a1, 5, -0x7f7f80);
    }
    call_8c21fd20(o, a1);
    sq_flush_8c38af12();
    sq_select_8c38aeb4(1);
    call_8c3827d8(g_8c467184);
    sq_header_8c38af22(1, -1);
    call_8c21fc04(o, a1, 0, -1);
    call_8c21fc04(o, a1, 1, -1);
    if (((o->f68 & 1)) != 0) {
        call_8c21fc04(o, a1, 2, -1);
    } else {
        call_8c21fc04(o, a1, 2, -0x7f7f80);
    }
    if (((o->f68 & 2)) != 0) {
        call_8c21fc04(o, a1, 3, -1);
    } else {
        call_8c21fc04(o, a1, 3, -0x7f7f80);
    }
    if (((o->f68 & 4)) != 0) {
        call_8c21fc04(o, a1, 4, -1);
        call_8c21fc04(o, a1, 5, -1);
    } else {
        call_8c21fc04(o, a1, 4, -0x7f7f80);
        call_8c21fc04(o, a1, 5, -0x7f7f80);
    }
    sq_flush_8c38af12();
}
