/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c1948
 * function: operation_8c0c1948
 * language: c
 * reference size: 260 bytes
 * compiled size: 260 bytes (+0.0%)
 * differing lines: 44 of 98 reference instruction lines
 * differing bytes: 34
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
typedef struct Object Object;
typedef struct Arg0_36c Arg0_36c;
typedef struct Arg0_36c_8 Arg0_36c_8;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg1 Arg1;
typedef struct Block_p0_3ac {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_p0_3ac;
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0xfc];
    Vector3 f164;
    char unknown170[0x1fc];
    Arg0_36c *f36c;
    char unknown370[0x3c];
    Block_p0_3ac f3ac;
    char unknown3b8[0x3c];
    float f3f4;
};
struct Arg1 {
    float f00;
    char unknown4[0x4];
    float f08;
};
struct Arg0_36c {
    char unknown0[0x8];
    Arg0_36c_8 *f08;
};
extern float distance_xz(void *, void *);
extern float object_random_fraction(void *);
extern float njCos_8c38c154(int);
extern float njSin_8c37eb0c(int);
extern void call_8c043f28(Object *, void *);
extern void call_8c044410(Object *, float, void *);
extern void apply_object_velocity(void *);
void operation_8c0c1948(Object *o, Arg1 *a1, float f0)
{
    int v1;
    float v2;
    float t1;
    float t2;
    float t3;
    float t4;
    float t5;
    t1 = distance_xz((void *)(((char *)o + 0x3c)), (void *)(&o->f3ac));
    if (400.0f > t1) {
        t4 = object_random_fraction((void *)o);
        v1 = (int)(int)(t4 * 360.0f * 65536.0f / 360.0f);
        t5 = object_random_fraction((void *)o);
        v2 = (float)(f0 * (t5 + 1.0f) * 0.4f);
        t2 = njCos_8c38c154(v1);
        o->f3ac.f00 = v2 * t2 + a1->f00;
        t3 = njSin_8c37eb0c(v1);
        o->f3ac.f08 = v2 * t3 + a1->f08;
    }
    *(Vector3 *)&o->f164 = *(Vector3 *)&o->f3ac;
    call_8c043f28(o, (void *)(o->f36c->f08));
    call_8c044410(o, o->f3f4, (void *)(o->f64));
    apply_object_velocity((void *)o);
}
