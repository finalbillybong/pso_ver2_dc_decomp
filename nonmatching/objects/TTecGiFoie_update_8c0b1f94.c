/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0b1f94
 * function: TTecGiFoie_update_8c0b1f94
 * language: c
 * reference size: 184 bytes
 * compiled size: 184 bytes (+0.0%)
 * differing lines: 2 of 70 reference instruction lines
 * differing bytes: 2
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
typedef struct Arg0_104 Arg0_104;
typedef struct Arg0_108 Arg0_108;
typedef struct S_vv27 S_vv27;
typedef struct S_vv27_dc S_vv27_dc;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    int f20;
    char unknown24[0x74];
    float f98;
    char unknown9c[0x34];
    unsigned short fd0;
    char unknownd2[0x32];
    Arg0_104 *f104;
    Arg0_108 *f108;
};
struct S_vv27 {
    char unknown0[0xdc];
    S_vv27_dc *fdc;
};
struct S_vv27_dc {
    char unknown0[0xc];
    float f0c;
};
extern int lookup_object_by_id(unsigned short);
extern int effect_query_is_true(void *);
extern float squared_distance_xz(void *, void *);
extern float signed_sqrt_8c37f6c0(float);
extern void operation_8c0ada54(void *);
void TTecGiFoie_update_8c0b1f94(Object *o)
{
    S_vv27 *v27;
    int t1;
    int t2;
    float t3;
    float t4;
    if (o->f104 == 0) {
        o->f04 |= 1;
        return;
    }
    t1 = lookup_object_by_id((unsigned short)(o->fd0));
    o->f20 = (int)(t1);
    if (o->f20 == 0) {
        o->f04 |= 1;
        return;
    }
    t2 = effect_query_is_true((void *)(o->f108));
    if (t2 != 0) {
        t3 = squared_distance_xz((void *)((int)o->f108 + 0x30), (void *)(((char *)o + 0x24)));
        t4 = signed_sqrt_8c37f6c0(t3);
        v27 = (S_vv27 *)o->f104;
        if (v27 != 0) {
            v27->fdc->f0c = t4 + 5.0f;
        }
        operation_8c0ada54((void *)o);
        if (!(o->f98 > t4)) {
            o->f04 |= 1;
        }
    }
}
