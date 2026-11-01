/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0d1a0c
 * function: TObjEneRe7Berura_dtor_8c0d1a0c
 * language: c++
 * reference size: 240 bytes
 * compiled size: 240 bytes (+0.0%)
 * differing lines: 4 of 93 reference instruction lines
 * differing bytes: 4
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
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_414 Arg0_414;
typedef struct S_vv7 S_vv7;
class S_x64880_0;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x3f8];
    Arg0_414 *f414;
};
struct S_vv7 {
    char unknown0[0x4];
    short f04;
};
class S_x64880_0 {
public:
    char unknown0[0x18];
    virtual void v0(int);
};
typedef struct S_x64880_0Data {

} S_x64880_0Data;
extern "C" void release_pair_8c0d2118(void *);
extern "C" void operation_8c052124(void *);
extern "C" void destroy_field_8c178048(void *, short);
extern "C" void destroy_field_8c0fbfa4(void *, short);
extern "C" void destroy_color_rise_8c05bd84(void *, short);
extern "C" void operation_8c122774(void *, Object *);
extern "C" Object *TObjEneRe7Berura_dtor_8c0d1a0c(Object *o, int a1)
{
    int v2;
    int v1;
    int v3;
    S_vv7 *v7;
    if (o != 0) {
        o->dispatch = (void *)(void *)0x8c266f24;
        release_pair_8c0d2118((void *)o);
        v2 = (int)0;
        v1 = (int)0x45c;
        while (2 > v2) {
            v3 = (int)(v2 << 2);
            if (*(int *)((char *)((char *)((int)o + v1) + 0x0) + (v3)) != 0) {
                if (*(int *)((char *)((char *)((int)o + v1) + 0x0) + (v3)) != 0) {
                    (*(S_x64880_0 **)((char *)((char *)((int)o + v1) + 0x0) + (v3)))->v0(1);
                }
                *(int *)((char *)((char *)((int)o + v1) + 0x0) + (v3)) = 0;
            }
            v2 = (int)(v2 + 1);
        }
        if (o->f414 != 0) {
            v7 = (S_vv7 *)o->f414;
            v7->f04 |= 1;
            o->f414 = (Arg0_414 *)0;
        }
        operation_8c052124((void *)o);
        destroy_field_8c178048((void *)(((char *)o + 0x464)), (short)-1);
        destroy_field_8c0fbfa4((void *)(((char *)o + 0x418)), (short)-1);
        destroy_field_8c0fbfa4((void *)(((char *)o + 0x3f4)), (short)-1);
        destroy_color_rise_8c05bd84((void *)o, (short)0);
        if ((short)a1 > 0) {
            operation_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
