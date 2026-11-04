/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1120d8
 * function: TObjGyaranzoMissile_update_8c1120d8
 * language: c
 * reference size: 472 bytes
 * compiled size: 472 bytes (+0.0%)
 * differing lines: 22 of 190 reference instruction lines
 * differing bytes: 17
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * class header: src/include/classes/TObjGyaranzoMissile.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_dc Arg0_dc;
typedef struct Block_p0_3c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_3c;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
struct Object {
    char unknown0[0x3c];
    Block_p0_3c f3c;
    Vector3 f48;
    char unknown54[0x88];
    Arg0_dc *fdc;
    char unknowne0[0x1c];
    unsigned short ffc;
    char unknownfe[0x2];
    int f100;
    int f104;
    int f108;
};
struct Frame {
    Block_frame_0 f00;
    Vector3 f0c;
};
struct S_c8c053d84 {
    char unknown0[0x324];
    Vector3 f324;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
extern float g_8c4d7bb4;
extern float g_8c4d7bb8;
extern int g_8c4d7c58;
extern S_c8c053d84 *lookup_object_by_id(unsigned short);
extern void vector_sub_in_place_8c37f6f0(void *, void *);
extern float njScalor_8c37e480(void *);
extern void scale_vector_to_length(void *, float);
extern void call_8c3bdf60(void *, void *);
extern void call_8c0c5018(void *, void *, void *);
extern int operation_8c011214(int, int, int);
extern void call_8c11236c(Object *);
extern int operation_8c051ff4(void *, void *, void *);
extern void operation_8c0521a0(void *);
extern void operation_8c05228c(void *);
void TObjGyaranzoMissile_update_8c1120d8(Object *o)
{
    Frame frame;
    S_c8c053d84 *t1;
    float t2;
    int t3;
    int t4;
    t1 = lookup_object_by_id((unsigned short)(o->ffc));
    if (t1 != 0) {
        *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&t1->f324;
        vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f0c), (void *)(&o->f3c));
        t2 = njScalor_8c37e480((void *)(&(&frame)->f0c));
        if (o->f100 >= 0xf && t2 > g_8c4d7bb8) {
            scale_vector_to_length((void *)(&(&frame)->f0c), g_8c4d7bb8);
            call_8c3bdf60((void *)(((char *)o + 0xe4)), (void *)(&(&frame)->f0c));
            scale_vector_to_length((void *)(((char *)o + 0xe4)), g_8c4d7bb4);
        }
    }
    *(Vector3 *)&o->f48 = *(Vector3 *)&o->f3c;
    call_8c3bdf60((void *)(&o->f3c), (void *)(((char *)o + 0xe4)));
    call_8c0c5018((void *)(((char *)o + 0xe4)), (void *)(((char *)o + 0x60)), (void *)(((char *)o + 0x64)));
    o->f104 += o->f108;
    if (o->f100 >= 0x1e) {
        t3 = operation_8c011214((int)(&o->f48), (int)(&o->f3c), -1);
        if (t3 != 0) {
            call_8c11236c(o);
            return;
        }
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f3c;
        t4 = operation_8c051ff4((void *)o, (void *)(&frame), (void *)0);
        if (t4 == 1) {
            if (22.0f > (o->f3c.f04 - (&frame)->f00.f04)) {
                o->fdc->f18 |= 2;
                o->fdc->f18 &= -5;
                operation_8c0521a0((void *)o);
                operation_8c05228c((void *)o);
                if (((o->fdc->f18 & 0x300000)) == 0) {
                    goto L_8c112234;
                }
                call_8c11236c(o);
                return;
            }
            o->fdc->f18 &= -3;
            o->fdc->f18 |= 4;
        }
    }
L_8c112234:;
    o->f100 += 1;
    if (g_8c4d7c58 < o->f100) {
        call_8c11236c(o);
    }
}
