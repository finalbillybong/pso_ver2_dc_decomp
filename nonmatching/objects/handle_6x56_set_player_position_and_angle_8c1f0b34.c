/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1f0b34
 * function: handle_6x56_set_player_position_and_angle_8c1f0b34
 * language: c
 * reference size: 148 bytes
 * compiled size: 148 bytes (+0.0%)
 * differing lines: 32 of 61 reference instruction lines
 * differing bytes: 28
 * provenance: generator draft (mode switch2ext)
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
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Object Object;
struct Object {
    char unknown0[0x2];
    unsigned short f02;
    int f04;
    Vector3 f08;
};
struct S_c8c021ef8 {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x1c];
    int f64;
};
extern int g_8c418248;
extern int g_8c4627c8;
extern S_c8c021ef8 *lookup_low_id(int);
extern int call_8c0c4f08(void *);
extern void update_object_center(void *);
extern void operation_8c1e8e60(int, int, int);
void handle_6x56_set_player_position_and_angle_8c1f0b34(Object *o)
{
    int v1;
    int v2;
    int v5;
    S_c8c021ef8 *t1;
    int t2;
    t1 = lookup_low_id((int)(o->f02));
    if (t1 != 0) {
        v1 = (int)0;
        v5 = (int)v1;
        if (g_8c4627c8 == 0) {
            v2 = (int)v1;
            if (o->f02 == g_8c418248) {
                v2 = (int)1;
            }
            v5 = (int)v2;
        }
        if (v5 == 0) {
            t2 = call_8c0c4f08((void *)(&o->f08));
            if (t2 == 0) {
                v1 = (int)1;
            }
        }
        if (v1 != 0) {
            t1->f64 = (int)(o->f04);
            *(Vector3 *)&t1->f3c = *(Vector3 *)&o->f08;
            update_object_center((void *)t1);
            operation_8c1e8e60((int)t1, 0x15, 0);
        }
    }
}
