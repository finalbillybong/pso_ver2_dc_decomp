/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c11aefc
 * function: TObjEnePanarms_dtor_8c11aefc
 * language: c
 * reference size: 164 bytes
 * compiled size: 164 bytes (+0.0%)
 * differing lines: 4 of 56 reference instruction lines
 * differing bytes: 4
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * class header: src/include/classes/TObjEnePanarms.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_3b8 Arg0_3b8;
typedef struct Arg0_400 Arg0_400;
typedef struct Arg0_404 Arg0_404;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x390];
    int f3ac;
    char unknown3b0[0x8];
    Arg0_3b8 *f3b8;
    char unknown3bc[0x44];
    Arg0_400 *f400;
    Arg0_404 *f404;
};
struct Arg0_400 {
    char unknown0[0x4];
    short f04;
};
struct Arg0_404 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void operation_8c161c38(void *);
extern void operation_8c052124(Object *);
extern void operation_8c11afa0(Object *);
extern void destroy_field_8c178048(void *, int);
extern void TObjEnemy_dtor_8c0120f4(Object *, int);
extern void operation_8c122774(void *, Object *);
Object *TObjEnePanarms_dtor_8c11aefc(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c26a070;
        operation_8c161c38(o->f3b8);
        o->f400->f04 |= 1;
        o->f404->f04 |= 1;
        operation_8c052124(o);
        o->f3ac = 0;
        operation_8c11afa0(o);
        destroy_field_8c178048(((char *)o + 0x41c), -1);
        TObjEnemy_dtor_8c0120f4(o, 0);
        if ((short)a1 > 0) {
            operation_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
