/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c185190
 * function: handle_6x3A_clear_photon_blast_ready_flag_8c185190
 * language: c
 * reference size: 72 bytes
 * compiled size: 72 bytes (+0.0%)
 * differing lines: 2 of 26 reference instruction lines
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
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct S_x93760 S_x93760;
struct Object {
    char unknown0[0x2];
    unsigned short f02;
};
struct S_x93760 {
    char unknown0[0x48];
    int f48;
};
extern S_g8c418248 *g_8c418248;
extern int lookup_low_id(int);
void handle_6x3A_clear_photon_blast_ready_flag_8c185190(Object *o)
{
    int t1;
    t1 = lookup_low_id((int)g_8c418248);
    if (t1 != 0) {
        ((S_x93760 *)(t1 + 0x418 + (o->f02 << 2)))->f48 &= 0x7ffffff0;
    }
}
