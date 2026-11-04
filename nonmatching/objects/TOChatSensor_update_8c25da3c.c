/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c25da3c
 * function: TOChatSensor_update_8c25da3c
 * language: c
 * reference size: 144 bytes
 * compiled size: 144 bytes (+0.0%)
 * differing lines: 2 of 55 reference instruction lines
 * differing bytes: 3
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TOChatSensor.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_c8 Arg0_c8;
struct Object {
    char unknown0[0x94];
    int f94;
    short f98;
    char unknown9a[0xa];
    int fa4;
    char unknowna8[0x20];
    Arg0_c8 *fc8;
    int fcc;
};
extern void update_target_range_8c25dd58(void *);
extern int hierarchy_is_active(void *);
extern int operation_03d080(unsigned short);
void TOChatSensor_update_8c25da3c(Object *o)
{
    int t1;
    int t2;
    if (o->f94 == 0) {
        switch (o->fcc) {
            case 0:
            update_target_range_8c25dd58((void *)o);
            return;
            case 1:
            if (o->fc8 == 0) {
                return;
            }
            t1 = hierarchy_is_active((void *)(o->fc8));
            if (t1 != 0) {
                return;
            }
            o->fc8 = (Arg0_c8 *)0;
            o->fcc = 0;
            return;
        }
    }
    t2 = operation_03d080((unsigned short)(o->f98));
    if ((unsigned short)(unsigned char)t2 == 0) {
        update_target_range_8c25dd58((void *)o);
        return;
    }
    o->fa4 = 0;
}
