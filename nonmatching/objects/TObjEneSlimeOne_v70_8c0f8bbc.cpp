/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0f8bbc
 * function: TObjEneSlimeOne_v70_8c0f8bbc
 * language: c++
 * reference size: 204 bytes
 * compiled size: 204 bytes (+0.0%)
 * differing lines: 12 of 76 reference instruction lines
 * differing bytes: 58
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
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_40c Arg0_40c;
typedef struct S_x5904 S_x5904;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x17e];
    unsigned short f1b6;
    char unknown1b8[0x1e8];
    int f3a0;
    char unknown3a4[0x68];
    Arg0_40c *f40c;
};
struct Frame {
    Vector3 f00;
};
struct S_x5904 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern "C" int lookup_low_id(int);
extern "C" int operation_8c1aaafc(int);
extern "C" int hierarchy_is_active(void *);
extern "C" void operation_8c0f8108(void *, void *);
extern "C" void call_8c18e6fc(Frame *);
extern "C" void TObjEneSlimeOne_v70_8c0f8bbc(Object *o)
{
    Frame frame;
    unsigned short v31;
    char *v30;
    int t1;
    int t2;
    int t3;
    if (o->f3a0 != 0xc) {
        v31 = (unsigned short)o->f1b6;
        if ((v31 & 0xffff) < *(int *)0x8c467874) {
            t1 = lookup_low_id((int)(v31 & 0xffff));
            if (t1 != 0) {
                t2 = operation_8c1aaafc((int)(t1 + 0x754));
                if ((short)t2 == 2) {
                    v30 = (char *)o->f40c;
                    if (v30 != 0) {
                        t3 = hierarchy_is_active((void *)v30);
                        if (t3 != 0) {
                            operation_8c0f8108((void *)(o->f40c), (void *)(((char *)o + 0x3c)));
                        }
                    }
                }
            }
        }
        o->f34 &= -0x201;
        o->f3a0 = 0xc;
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x5904 *)(o->f3a0 * 0x18 + 0x8c30a484))->f00;
        call_8c18e6fc((Frame *)((&frame)));
        (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
    }
}
