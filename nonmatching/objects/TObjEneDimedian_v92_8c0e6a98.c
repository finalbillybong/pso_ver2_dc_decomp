/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0e6a98
 * function: TObjEneDimedian_v92_8c0e6a98
 * language: c
 * reference size: 68 bytes
 * compiled size: 68 bytes (+0.0%)
 * differing lines: 2 of 23 reference instruction lines
 * differing bytes: 4
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TObjEneDimedian.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void create_resource_effect_8c108300(void *, int);
extern void operation_8c1083f8(int);
extern void play_se_8c05fbf8(int, int, int, int);
void TObjEneDimedian_v92_8c0e6a98(int a0)
{
    create_resource_effect_8c108300((void *)(a0 + 0x3c), 0);
    operation_8c1083f8((int)(a0 + 0x324));
    play_se_8c05fbf8(0x30037, a0 += 0x3c, 0, 0);
}
