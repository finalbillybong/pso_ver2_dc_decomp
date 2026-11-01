/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c01fa18
 * function: TObjPlayer_dtor_8c01fa18
 * language: c
 * reference size: 236 bytes
 * compiled size: 236 bytes (+0.0%)
 * differing lines: 4 of 76 reference instruction lines
 * differing bytes: 4
 * provenance: generator draft (mode bgotoext)
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
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void operation_8c020440(void);
extern void call_8c01fb70(Object *);
extern void operation_8c01fe20(void *);
extern void operation_8c01ff58(Object *);
extern void operation_8c020094(Object *);
extern void operation_8c020134(Object *);
extern void operation_8c0201c4(Object *);
extern void operation_8c020290(void *);
extern void operation_8c01fc90(Object *);
extern void operation_8c0206c0(Object *);
extern void call_8c020d10(Object *);
extern void operation_8c020dac(Object *);
extern void operation_8c020e30(Object *);
extern void operation_8c0210fc(Object *);
extern void operation_8c0216c0(void *);
extern void operation_2394a8(void *, short);
extern void destroy_object_state(void *, short);
extern void operation_8c122774(void *, void *);
Object *TObjPlayer_dtor_8c01fa18(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c261318;
        operation_8c020440();
        call_8c01fb70(o);
        operation_8c01fe20((void *)o);
        operation_8c01ff58(o);
        operation_8c020094(o);
        operation_8c020134(o);
        operation_8c0201c4(o);
        operation_8c020290((void *)o);
        operation_8c01fc90(o);
        operation_8c0206c0(o);
        call_8c020d10(o);
        operation_8c020dac(o);
        operation_8c020e30(o);
        operation_8c0210fc(o);
        operation_8c0216c0((void *)o);
        operation_2394a8((void *)(((char *)o + 0x6dc)), (short)-1);
        destroy_object_state((void *)o, (short)0);
        if ((short)a1 > 0) {
            operation_8c122774(g_8c4d97e0, (void *)o);
        }
    }
    return o;
}
