/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c118cfc
 * function: operation_8c118cfc
 * language: c++
 * reference size: 124 bytes
 * compiled size: 120 bytes (-3.2%)
 * differing lines: 29 of 61 reference instruction lines
 * differing bytes: 42
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
typedef struct S_vv6 S_vv6;
class Object;
class Object {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
};
typedef struct ObjectData {
    char unknown0[0x20];
    int f20;
} ObjectData;
struct Half {
    float x;
    float y;
    float z;
    char unknownc[0x8];
    int id;
};
struct Arg1 {
    float f00;
    float f04;
    float f08;
};
struct Arg2 {
    float f00;
    float f04;
    float f08;
};
struct Entry {
    Half h[2];
};
static inline void set_half(Half *h, float *v)
{
    h->x = v[0];
    h->y = v[1];
    h->z = v[2];
    h->id = -1;
}
extern "C" void operation_8c118cfc(Object *o, Arg1 *a1, Arg2 *a2)
{
    Entry *v6;
    if (((ObjectData *)o)->f20 >= 0x10) {
        o->v6();
    }
    v6 = (Entry *)((char *)((int)o + ((ObjectData *)o)->f20 * 0x30) + 0x24);
    set_half(&v6->h[0], (float *)a1);
    set_half(&v6->h[1], (float *)a2);
    ((ObjectData *)o)->f20 += 1;
}
