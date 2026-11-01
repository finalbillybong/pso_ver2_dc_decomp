/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c6fd8
 * function: operation_8c0c6fd8
 * language: c
 * reference size: 100 bytes
 * compiled size: 100 bytes (+0.0%)
 * differing lines: 4 of 36 reference instruction lines
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
typedef struct Object Object;
struct Object {
    char unknown0[0x8];
    void *f08;
};
extern void allocate_vector_entries(void *, void *);
extern void set_stream_mode_8c3ab8f8(int, float);
extern void njPushMatrix_8c38ade4(void *);
extern void fill_scaled_vector_array(void *, void *, int);
extern void njPopMatrixEx_8c38ad10(void);
Object *operation_8c0c6fd8(Object *o, int a1, int a2, float f0)
{
    o->f08 = (void *)0x8c2668c0;
    allocate_vector_entries((void *)o, (void *)a1);
    set_stream_mode_8c3ab8f8(a2, f0);
    njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
    fill_scaled_vector_array((void *)o, (void *)a1, 0);
    njPopMatrixEx_8c38ad10();
    return o;
}
