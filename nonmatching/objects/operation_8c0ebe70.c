/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0ebe70
 * function: operation_8c0ebe70
 * language: c
 * reference size: 244 bytes
 * compiled size: 244 bytes (+0.0%)
 * differing lines: 14 of 89 reference instruction lines
 * differing bytes: 23
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
typedef struct S_g8c4703a0 S_g8c4703a0;
typedef struct Object Object;
typedef struct Arg0_154 Arg0_154;
struct Object {
    char unknown0[0x13c];
    unsigned char f13c;
    char unknown13d[0x14];
    char f151;
    char unknown152[0x2];
    Arg0_154 *f154;
};
struct Arg0_154 {
    char unknown0[0x5c];
    float f5c;
};
extern void operation_8c1b0330(float);
extern void call_8c380ab8(int, int);
extern void call_8c3827d8(void *);
extern void sq_select_8c38aeb4(int);
extern void sq_header_8c38af22(int, int);
extern void sq_quad_8c38b09e(void *, float);
extern void operation_8c0ec120(void *, char);
extern void sq_flush_8c38af12(void);
extern void call_8c0ec220(Object *, char);
void operation_8c0ebe70(Object *o)
{
    if (o->f154 != 0) {
        operation_8c1b0330(-1.0f / (o->f154->f5c + 0.1495f));
    }
    call_8c380ab8(0, 8);
    call_8c380ab8(1, 0xa);
    call_8c3827d8((void *)(*(S_g8c4703a0 **)0x8c4703a0));
    sq_select_8c38aeb4(1);
    sq_header_8c38af22(1, (int)(o->f13c << 0x18 | 0xffffff));
    sq_quad_8c38b09e((void *)(((char *)o + 0x3c)), 1.0f);
    sq_header_8c38af22(1, (int)(o->f13c << 0x18 | 0xffffff));
    sq_quad_8c38b09e((void *)(((char *)o + 0x5c)), 1.0f);
    operation_8c0ec120((void *)o, o->f151);
    sq_flush_8c38af12();
    call_8c380ab8(0, 8);
    call_8c380ab8(1, 6);
    call_8c0ec220(o, o->f151);
}
