/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c25b05c
 * function: TOSwitchTimer_update_8c25b05c
 * language: c
 * reference size: 240 bytes
 * compiled size: 240 bytes (+0.0%)
 * differing lines: 8 of 91 reference instruction lines
 * differing bytes: 145
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
    char unknown0[0x94];
    int f94;
    int f98;
    int f9c;
    int fa0;
    int fa4;
    int fa8;
    unsigned short fac;
    char unknownae[0x6];
    unsigned char fb4;
};
extern int operation_03d080(unsigned short);
extern int call_8c18e8a0(int, int);
extern void play_se_8c05fbf8(int, int, int, int);
extern void call_8c05fd7c(int, Object *, int, int, int);
extern void call_8c25b2bc(Object *);
void TOSwitchTimer_update_8c25b05c(Object *o)
{
    int v93;
    int v15;
    int t1;
    int t2;
    if (o->f94 != 0) {
        if (o->f94 == 1) {
            goto L_8c25b0b0;
        }
        return;
    }
    t1 = operation_03d080((unsigned short)(o->fac));
    if (o->fb4 != (unsigned short)(unsigned char)t1) {
        o->fb4 = (unsigned char)t1;
        if ((unsigned short)(unsigned char)t1 == 1) {
            o->f94 = 1;
            o->f98 = 0;
            if (o->f9c == 0) {
                o->fb4 = 0;
                return;
L_8c25b0b0:;
                if (o->fa0 == 1) {
                    v93 = (int)o->f98;
                    if (v93 < o->fa8) {
                        t2 = call_8c18e8a0(v93, 0x1e);
                        if (t2 != 0) {
                            goto L_8c25b0ee;
                        }
                        play_se_8c05fbf8(0x50018, 0, 0, 0);
                    } else {
                        call_8c05fd7c(0x50018, o, 0, 0, 0);
                    }
                }
L_8c25b0ee:;
                v15 = (int)o->f98;
                o->f98 = v15 + 1;
                if (v15 == o->fa4) {
                    call_8c25b2bc(o);
                    o->f94 = 0;
                }
            }
        }
    }
}
