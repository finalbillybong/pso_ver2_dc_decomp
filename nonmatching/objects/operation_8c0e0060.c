/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0e0060
 * function: operation_8c0e0060
 * language: c
 * reference size: 164 bytes
 * compiled size: 164 bytes (+0.0%)
 * differing lines: 2 of 68 reference instruction lines
 * differing bytes: 2
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2; offline start: Pioneer 2 office
 *   walk and NPC dialogue (emulator A/B: RAM, trace and sampled call I/O); not proof
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
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x86];
    unsigned short f86;
    char unknown88[0x4];
    float f8c;
};
struct Frame {
    char unknown0[0xc];
};
struct S_vv1 {
    float f00;
    float f04;
    float f08;
};
struct S_c8c053d84 {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
};
extern S_c8c053d84 *lookup_object_by_id(unsigned short);
extern void njPushMatrixEx_8c38ae68(void);
extern void project_point_to_screen_8c38ad50(int, S_vv1 *, int);
extern void njPopMatrixEx_8c38ad10(void);
int operation_8c0e0060(Object *o, int a1, int a2)
{
    Frame frame;
    S_vv1 *v1;
    S_c8c053d84 *t1;
    unsigned short v2;
    v2 = o->f86;
    if ((v2 & 0xffff) == 0xffff) {
        return 0;
    }
    t1 = lookup_object_by_id(v2);
    if (t1 == 0) {
        return 0;
    }
    v1 = (S_vv1 *)a1;
    if (a1 == 0) {
        v1 = (S_vv1 *)(&frame);
    }
    v1->f00 = t1->f3c;
    v1->f04 = t1->f40 + o->f8c;
    v1->f08 = t1->f44;
    if (a2 == 0) {
        return 1;
    }
    njPushMatrixEx_8c38ae68();
    project_point_to_screen_8c38ad50(0, v1, a2);
    njPopMatrixEx_8c38ad10();
    return 1;
}
