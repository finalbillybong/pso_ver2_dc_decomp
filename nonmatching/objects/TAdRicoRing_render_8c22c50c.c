/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c22c50c
 * function: TAdRicoRing_render_8c22c50c
 * language: c
 * reference size: 100 bytes
 * compiled size: 108 bytes (+8.0%)
 * differing lines: 28 of 38 reference instruction lines
 * differing bytes: 65
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by +8 bytes
 * class header: src/include/classes/TAdRicoRing.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_50 Arg0_50;
typedef struct Arg0_54 Arg0_54;
typedef struct Arg0_68 Arg0_68;
typedef struct Arg0_6c Arg0_6c;
typedef struct Arg0_70 Arg0_70;
struct Object {
    char unknown0[0x50];
    Arg0_50 *f50;
    Arg0_54 *f54;
    char unknown58[0x10];
    Arg0_68 *f68;
    Arg0_6c *f6c;
    Arg0_70 *f70;
};
extern void njPushMatrixEx_8c38ae68(void);
extern void call_8c3827d8(void *);
extern void translate_current_matrix_v_8c382a40(void *);
extern void call_8c37ddbc(int, void *, void *, void *);
extern void call_8c3aa716(void *);
extern void njPopMatrixEx_8c38ad10(void);
Object *TAdRicoRing_render_8c22c50c(Object *o)
{
    njPushMatrixEx_8c38ae68();
    call_8c3827d8((void *)(o->f54));
    translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x5c)));
    call_8c37ddbc(0, (void *)(o->f68), (void *)(o->f6c), (void *)(o->f70));
    call_8c3aa716((void *)(o->f50));
    njPopMatrixEx_8c38ad10();
    return o;
}
