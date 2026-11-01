/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1852ac
 * function: handle_6x3B_clear_temporary_photon_blast_state_flags_8c1852ac
 * language: c
 * reference size: 116 bytes
 * compiled size: 120 bytes (+3.4%)
 * differing lines: 42 of 50 reference instruction lines
 * differing bytes: 89
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct S_x59824 S_x59824;
typedef struct S_x74352 S_x74352;
typedef struct S_x74352_s78 S_x74352_s78;
typedef struct S_x94688 S_x94688;
struct Object {
    char unknown0[0x2];
    unsigned short f02;
};
struct S_x94688 {
    char unknown0[0x48];
    int f48;
};
struct S_x59824 {
    char unknown0[0x78];
    unsigned short f78;
};
struct S_x74352 {
    char unknown0[0x78];
    unsigned short f78;
};
struct S_x74352_s78 {
    char unknown0[0x2];
    short f02;
};
extern S_g8c418248 *g_8c418248;
extern int lookup_low_id(int);
void handle_6x3B_clear_temporary_photon_blast_state_flags_8c1852ac(Object *o)
{
    int v11;
    unsigned short v1;
    int v3;
    int v2;
    int t1;
    t1 = lookup_low_id((int)g_8c418248);
    if (t1 != 0) {
        v11 = (int)(t1 + 0x418);
        ((S_x94688 *)(v11 + (o->f02 << 2)))->f48 = 0;
        v1 = (unsigned short)o->f02;
        v2 = (int)t1;
        v3 = (int)0;
        while (4 > v3) {
            if (v1 == ((S_x59824 *)(v11 + (v3 << 2)))->f78) {
                ((S_x74352 *)(v2 + 0x418 + (v3 << 2)))->f78 = 0xffff;
                ((S_x74352_s78 *)((char *)(v2 + 0x418 + (v3 << 2)) + 0x78))->f02 = -1;
                return;
            }
            v3 = (int)(v3 + 1);
        }
    }
}
