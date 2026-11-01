/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c129788
 * function: operation_8c129788
 * language: c
 * reference size: 420 bytes
 * compiled size: 420 bytes (+0.0%)
 * differing lines: 12 of 164 reference instruction lines
 * differing bytes: 173
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
    char unknown0[0x34];
    int f34;
    char unknown38[0x148];
    float f180;
    char unknown184[0x1d4];
    float f358;
    float f35c;
    char unknown360[0x28];
    int f388;
};
extern void operation_8c01c5f0(Object *);
extern void play_se_8c05fbf8(int, void *, int, int);
extern void operation_8c129a08(void *, int, int);
extern int call_8c18e954(int, int);
extern void operation_8c129958(int, float);
extern void set_fields_8c12992c(void *);
void operation_8c129788(Object *o)
{
    float v4;
    float v16;
    float v19;
    int t1;
    operation_8c01c5f0(o);
    if (((o->f34 & 0x8000000)) == 0) {
        if (o->f180 == 10.0f) {
            play_se_8c05fbf8(0x40016, (void *)(((char *)o + 0x3c)), 0, 0);
        }
        v4 = (float)o->f180;
        if (v4 != 10.0f && v4 != 12.0f && v4 != 14.0f) {
        } else {
            operation_8c129a08((void *)o, (int)(((char *)o + 0x36c)), 0x7d);
        }
        if (o->f180 == 40.0f) {
            operation_8c129a08((void *)o, (int)(((char *)o + 0x360)), 0x7e);
        }
        v16 = (float)o->f180;
        v19 = (float)(float)(unsigned int)o->f388;
        t1 = call_8c18e954((int)((unsigned int)v16), (int)((unsigned int)(30.0f / v19)));
        if (v16 > 14.0f && 60.0f > v16 && t1 == 0) {
            operation_8c129a08((void *)o, (int)(((char *)o + 0x36c)), 0x7e);
        }
        if (o->f180 > 60.0f && t1 == 0) {
            operation_8c129a08((void *)o, (int)(((char *)o + 0x360)), 0x7e);
        }
    }
    operation_8c129958((int)o, o->f35c);
    if (!(o->f358 > o->f180)) {
        set_fields_8c12992c((void *)o);
    }
}
