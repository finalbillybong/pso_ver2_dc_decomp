/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c07a164
 * function: TObjEneDarkGunner_v70_8c07a164
 * language: c
 * reference size: 120 bytes
 * compiled size: 120 bytes (+0.0%)
 * differing lines: 4 of 43 reference instruction lines
 * differing bytes: 2
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
struct Object {
    char unknown0[0x30a];
    short f30a;
    char unknown30c[0x84];
    int f390;
    char unknown394[0x8];
    int f39c;
    char unknown3a0[0x4];
    int f3a4;
    char unknown3a8[0x9c];
    unsigned short f444;
};
extern int operation_8c012a14(int);
extern void call_8c07bc74(int);
void TObjEneDarkGunner_v70_8c07a164(Object *o)
{
    int t1;
    if (o->f30a != 4) {
        if (o->f30a == 2 && ((o->f3a4 & 0x4000000)) != 0) {
            t1 = operation_8c012a14((int)(o->f444));
            if (t1 != 0) {
                call_8c07bc74(t1);
                return;
            }
        }
        if (o->f30a != 4) {
            o->f39c = o->f30a;
            o->f390 = 4;
        }
    }
}
