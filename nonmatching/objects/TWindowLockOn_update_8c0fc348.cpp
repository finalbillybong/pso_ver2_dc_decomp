/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0fc348
 * function: TWindowLockOn_update_8c0fc348
 * language: c++
 * reference size: 120 bytes
 * compiled size: 124 bytes (+3.3%)
 * differing lines: 10 of 44 reference instruction lines
 * differing bytes: 56
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x64];
    int f64;
    char unknown68[0x4];
    int f6c;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern "C" int call_8c18e6fc(void *);
extern "C" void operation_8c0fcaac(Object *);
extern "C" void call_8c0db30c(Object *);
extern "C" void interpolate_view_parameters(void *);
extern "C" void update_view_nodes(void *, void *);
extern "C" void request_resource_release(void *);
extern "C" void TWindowLockOn_update_8c0fc348(Object *o)
{
    int v23;
    int t1;
    o->f64 = 0x1000000;
    t1 = call_8c18e6fc((void *)(((char *)o + 0x70)));
    if (t1 != 0) {
        (((PmfObj *)(o))->*(*(PMF_0 *)(((char *)o + 0x70))))();
    }
    operation_8c0fcaac(o);
    call_8c0db30c(o);
    interpolate_view_parameters((void *)o);
    update_view_nodes((void *)o, (void *)(((char *)o + 0x2c)));
    v23 = (int)o->f6c;
    o->f6c = v23 + -1;
    if (!(v23 >= 0)) {
        request_resource_release((void *)o);
    }
}
