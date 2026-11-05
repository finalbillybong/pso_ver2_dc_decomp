/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0e27b4
 * function: TWindowStatus_update_8c0e27b4
 * language: c
 * reference size: 116 bytes
 * compiled size: 116 bytes (+0.0%)
 * differing lines: 4 of 37 reference instruction lines
 * differing bytes: 4
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TWindowStatus.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
extern void call_8c0e2e98(int);
extern void refresh_name_wrapper_8c0e2b2c(void *);
extern void operation_8c0e2b40(void *);
extern void operation_8c0e30c8(int, void *, int, void *);
extern void call_8c0db30c(int);
extern void interpolate_view_parameters(void *);
extern void update_view_nodes(void *, void *);
void TWindowStatus_update_8c0e27b4(int a0)
{
    call_8c0e2e98(a0);
    refresh_name_wrapper_8c0e2b2c((void *)a0);
    operation_8c0e2b40((void *)a0);
    operation_8c0e30c8(a0, (void *)((void *)0x8c285920), (int)(a0 + 0x68), (void *)(*(S_g8c418248 **)0x8c418248));
    call_8c0db30c(a0);
    interpolate_view_parameters((void *)a0);
    update_view_nodes((void *)a0, (void *)(a0 + 0x2c));
    *(int *)0x8c466e00 = 0;
}
