/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0f40b0
 * function: operation_8c0f40b0
 * language: c
 * reference size: 504 bytes
 * compiled size: 500 bytes (-0.8%)
 * differing lines: 4 of 205 reference instruction lines
 * differing bytes: 132
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
typedef struct S_c8c011214 S_c8c011214;
typedef struct S_c8c011214_4 S_c8c011214_4;
typedef struct S_c8c011290 S_c8c011290;
typedef struct S_c8c011290_4 S_c8c011290_4;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
typedef struct Block_p0_3c {
    float f00;
    float f04;
    float f08;
} Block_p0_3c;
typedef struct Block_p0_114 {
    float f00;
    float f04;
    float f08;
} Block_p0_114;
struct Object {
    char unknown0[0x3c];
    Block_p0_3c f3c;
    char unknown48[0xa0];
    unsigned short fe8;
    char unknownea[0x2];
    int fec;
    char unknownf0[0x4];
    float ff4;
    char unknownf8[0x4];
    float ffc;
    float f100;
    float f104;
    char unknown108[0xc];
    Block_p0_114 f114;
    Vector3 f120;
    float f12c;
    char unknown130[0x1c];
    float f14c;
};
struct Frame {
    Block_frame_0 f00;
    float f0c;
    float f10;
    float f14;
};
struct S_c8c011214 {
    char unknown0[0x4];
    S_c8c011214_4 *f04;
};
struct S_c8c011214_4 {
    float f00;
};
struct S_c8c011290 {
    char unknown0[0x4];
    S_c8c011290_4 *f04;
};
struct S_c8c011290_4 {
    Vector3 f00;
    Vector3 f0c;
};
extern S_c8c011214 *operation_8c011214(int, int, int);
extern S_c8c011290 *operation_8c011290(int, int);
extern int call_8c0f3fb8(Object *);
extern int lookup_object_by_id(unsigned short);
extern void operation_8c0d20f8(void *);
void operation_8c0f40b0(Object *o)
{
    Frame frame;
    int v2;
    int v1;
    S_c8c011214 *t1;
    S_c8c011290 *t2;
    int t3;
    int t4;
    o->f12c += 0.15f;
    if (o->f12c > 2.0f) {
        o->f12c = 2.0f;
    }
    o->f14c += 10.0f;
    (&frame)->f0c = o->f3c.f00 + o->ff4 * 10.0f;
    (&frame)->f10 = o->f114.f04;
    (&frame)->f14 = o->f3c.f08 + o->ffc * 10.0f;
    v1 = (int)0;
    t1 = operation_8c011214((int)(&o->f114), (int)(&(&frame)->f0c), 0x400008e0);
    if (t1 != 0) {
        v2 = (int)1;
        o->f114.f00 = t1->f04->f00;
        o->f114.f00 = t1->f04->f00;
        v1 = (int)v2;
    } else {
        o->f114.f00 = (&frame)->f0c;
        o->f114.f08 = (&frame)->f14;
    }
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f114;
    (&frame)->f00.f04 = 20.0f;
    t2 = operation_8c011290((int)(&frame), 0x16ef);
    if (t2 != 0) {
        *(Vector3 *)&o->f3c = *(Vector3 *)&t2->f04->f00;
        *(Vector3 *)&o->f120 = *(Vector3 *)&t2->f04->f0c;
    } else {
        o->f3c.f00 = o->f114.f00;
        o->f3c.f08 = o->f114.f08;
    }
    o->f104 = o->f114.f04 - o->f3c.f04;
    if (10.0f > o->f104) {
        o->f114.f04 = o->f3c.f04 + 10.0f;
        o->f104 = 10.0f;
    }
    if (v1 == 0) {
        t3 = call_8c0f3fb8(o);
        if (t3 == 0 && !(o->f14c > o->f100)) {
            return;
        }
    }
    o->fec = 2;
    t4 = lookup_object_by_id((unsigned short)(o->fe8));
    if (t4 != 0) {
        operation_8c0d20f8((void *)t4);
    }
}
