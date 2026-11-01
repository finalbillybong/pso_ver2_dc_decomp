/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0ea958
 * function: operation_8c0ea958
 * language: c
 * reference size: 276 bytes
 * compiled size: 276 bytes (+0.0%)
 * differing lines: 8 of 100 reference instruction lines
 * differing bytes: 8
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
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_8c S_g8c467180_8c;
typedef struct S_g8c467180_8c_1c S_g8c467180_8c_1c;
typedef struct S_g8c470360 S_g8c470360;
typedef struct Object Object;
struct S_g8c467180 {
    char unknown0[0x8c];
    S_g8c467180_8c *f8c;
};
struct S_g8c467180_8c {
    char unknown0[0x1c];
    S_g8c467180_8c_1c *f1c;
};
struct Object {
    char unknown0[0x11c];
    int f11c;
};
extern S_g8c467180 *g_8c467180;
extern S_g8c470360 *g_8c470360;
extern void operation_8c0eac00(Object *);
extern void operation_8c04b230(float, float, int, int);
extern void call_8c380ab8(int, int);
extern void call_8c3827d8(void *);
extern void sq_select_8c38aeb4(int);
extern void sq_header_8c38af22(int, int);
extern void sq_flush_8c38af12(void);
void operation_8c0ea958(Object *o)
{
    operation_8c0eac00(o);
    operation_8c04b230(525.0f, 420.0f, (int)g_8c467180->f8c->f1c, o->f11c << 0x18 | 0xffffff);
    call_8c380ab8(0, 8);
    call_8c380ab8(1, 0xa);
    call_8c3827d8(g_8c470360);
    sq_select_8c38aeb4(1);
    sq_header_8c38af22(0, o->f11c << 0x18 | 0xffffff);
    ((void (*)(void *, float))0x8c38b09e)(((char *)o + 0x4c), 1.0f);
    ((void (*)(void *, float))0x8c38b09e)(((char *)o + 0x6c), 1.0f);
    ((void (*)(float, void *))0x8c38b09e)(1.0f, ((char *)o + 0x8c));
    ((void (*)(float, void *))0x8c38b09e)(0.1f, ((char *)o + 0xac));
    ((void (*)(float, void *))0x8c38b09e)(0.1f, ((char *)o + 0xcc));
    ((void (*)(float, void *))0x8c38b09e)(1.0f, ((char *)o + 0xec));
    sq_flush_8c38af12();
    call_8c380ab8(0, 8);
    call_8c380ab8(1, 6);
}
