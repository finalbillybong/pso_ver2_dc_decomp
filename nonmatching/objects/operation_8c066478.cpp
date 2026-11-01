/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c066478
 * function: operation_8c066478
 * language: c++
 * reference size: 316 bytes
 * compiled size: 316 bytes (+0.0%)
 * differing lines: 4 of 119 reference instruction lines
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
typedef struct Arg0_6f4 Arg0_6f4;
typedef struct S_vv11 S_vv11;
class Arg0_6a0;
class Arg0_6a8;
class Arg0_73c;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x684];
    Arg0_6a0 *f6a0;
    int f6a4;
    Arg0_6a8 *f6a8;
    char unknown6ac[0x48];
    Arg0_6f4 *f6f4;
    char unknown6f8[0x44];
    Arg0_73c *f73c;
};
struct S_vv11 {
    char unknown0[0x4];
    short f04;
};
class Arg0_73c {
public:
    char unknown0[0x18];
    virtual void v0(int);
};
typedef struct Arg0_73cData {

} Arg0_73cData;
class Arg0_6a8 {
public:
    char unknown0[0x18];
    virtual void v0(int);
};
typedef struct Arg0_6a8Data {

} Arg0_6a8Data;
class Arg0_6a0 {
public:
    char unknown0[0x18];
    virtual void v0(int);
};
typedef struct Arg0_6a0Data {

} Arg0_6a0Data;
extern "C" void operation_8c0f3384(int, int);
extern "C" void operation_8c052124(void *);
extern "C" void destroy_field_8c178048(void *, short);
extern "C" void destroy_motion_profile(void *, short);
extern "C" void TObject_dtor_8c03311c(void *, short);
extern "C" void destroy_color_rise_8c05bd84(void *, short);
extern "C" void operation_8c122774(void *, Object *);
extern "C" Object *operation_8c066478(Object *o, int a1)
{
    S_vv11 *v11;
    int v37;
    if (o != 0) {
        o->dispatch = (void *)(void *)0x8c262dc4;
        if (o->f73c != 0) {
            if (o->f73c != 0) {
                o->f73c->v0(1);
            }
            o->f73c = (Arg0_73c *)0;
        }
        if (o->f6f4 != 0) {
            v11 = (S_vv11 *)o->f6f4;
            v11->f04 |= 1;
            o->f6f4 = (Arg0_6f4 *)0;
        }
        if (o->f6a8 != 0) {
            if (o->f6a8 != 0) {
                o->f6a8->v0(1);
            }
            o->f6a8 = (Arg0_6a8 *)0;
        }
        if (o->f6a4 != 0) {
            operation_8c0f3384((int)(o->f6a4), 1);
            o->f6a4 = 0;
        }
        if (o->f6a0 != 0) {
            if (o->f6a0 != 0) {
                o->f6a0->v0(1);
            }
            o->f6a0 = (Arg0_6a0 *)0;
        }
        operation_8c052124((void *)o);
        v37 = (int)*(int *)0x8c468994;
        if (v37 == (int)(o)) {
            *(int *)0x8c468994 = 0;
        }
        destroy_field_8c178048((void *)(((char *)o + 0x704)), (short)-1);
        destroy_motion_profile((void *)(((char *)o + 0x634)), (short)-1);
        destroy_motion_profile((void *)(((char *)o + 0x610)), (short)-1);
        TObject_dtor_8c03311c((void *)(((char *)o + 0x3e0)), (short)-1);
        destroy_color_rise_8c05bd84((void *)o, (short)0);
        if ((short)a1 > 0) {
            operation_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
