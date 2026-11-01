/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c101594
 * function: TRaderMapCore_update_8c101594
 * language: c
 * reference size: 200 bytes
 * compiled size: 196 bytes (-2.0%)
 * differing lines: 4 of 73 reference instruction lines
 * differing bytes: 157
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
struct Object {
    char unknown0[0x94];
    int f94;
    char unknown98[0xa0];
    int f138;
    char unknown13c[0x14];
    int f150;
};
extern int lookup_low_id(int);
extern int object_blocked(void *);
extern int operation_8c2097a8(int);
extern void call_8c1026e4(Object *);
extern void operation_8c101da8(Object *);
extern void operation_8c102b5c(int, int, int);
void TRaderMapCore_update_8c101594(Object *o)
{
    int t1;
    int t2;
    int t3;
    t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    if (t1 != 0) {
        t2 = object_blocked((void *)t1);
        switch (t2) {
        default:
            break;
        case 0:
            if (o->f94 > 0) {
                o->f94 -= 1;
                return;
            }
            switch (*(int *)0x8c4d5954) {
            case 1:
                break;
            case 0:
                t3 = operation_8c2097a8(1);
                if (t3 != 0) {
                    o->f150 |= 1;
                } else {
                    o->f150 = (unsigned int)o->f150 >> 1 << 1;
                }
            }
            call_8c1026e4(o);
            operation_8c101da8(o);
            operation_8c102b5c((int)o, 0, (int)((int)o + o->f138 * 0x28 + 0x98));
        }
    }
}
