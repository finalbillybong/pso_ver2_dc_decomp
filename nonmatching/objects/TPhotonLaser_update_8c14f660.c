/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c14f660
 * function: TPhotonLaser_update_8c14f660
 * language: c
 * reference size: 416 bytes
 * compiled size: 416 bytes (+0.0%)
 * differing lines: 16 of 161 reference instruction lines
 * differing bytes: 15
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * class header: src/include/classes/TPhotonLaser.h (shared layout for modders; this draft keeps its own local types)
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
typedef struct Arg0_380 Arg0_380;
typedef struct S_vv6 S_vv6;
typedef struct S_vv8 S_vv8;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x35a];
    float f360;
    char unknown364[0x4];
    float f368;
    float f36c;
    float f370;
    char unknown374[0xc];
    Arg0_380 *f380;
    float f384;
    int f388;
    unsigned short f38c;
};
struct Frame {
    char unknown0[0xc];
    float f0c;
    float f10;
    float f14;
};
struct S_vv6 {
    char unknown0[0x4];
    short f04;
};
struct S_c8c053d84 {
    char unknown0[0x40];
    float f40;
};
struct S_vv8 {
    char unknown0[0x4];
    short f04;
};
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, int);
extern void call_8c3be38c(int, void *, Frame *);
extern void njPopMatrix_8c38accc(int);
extern void call_8c3bdf60(void *, Frame *);
extern void call_8c0a7608(void *, void *);
extern S_c8c053d84 *lookup_object_by_id(unsigned short);
extern void create_effect_777c(void *, int);
void TPhotonLaser_update_8c14f660(Object *o)
{
    Frame frame;
    float v3;
    S_vv6 *v6;
    S_vv8 *v8;
    S_c8c053d84 *t1;
    o->f384 += 1.0f;
    (&frame)->f0c = 0.0f;
    (&frame)->f10 = 0.0f;
    (&frame)->f14 = 10.0f;
    njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
    v3 = (float)(float)(unsigned int)o->f388;
    njRotateY_8c37df90(0, (int)((int)(v3 * 65536.0f / 360.0f)));
    call_8c3be38c(0, (void *)(&(&frame)->f0c), (Frame *)((&frame)));
    njPopMatrix_8c38accc(1);
    call_8c3bdf60((void *)(((char *)o + 0x35c)), (Frame *)((&frame)));
    o->f388 += 0x24;
    call_8c3bdf60((void *)(((char *)o + 0x35c)), (Frame *)(&o->f368));
    if (o->f380 != 0) {
        call_8c0a7608((void *)(o->f380), (void *)(((char *)o + 0x35c)));
    }
    t1 = lookup_object_by_id((unsigned short)(o->f38c));
    if (t1 == 0) {
        if (o->f380 != 0) {
            v6 = (S_vv6 *)o->f380;
            v6->f04 |= 1;
            o->f380 = (Arg0_380 *)0;
        }
        o->f368 = 0.0f;
        o->f36c = 0.0f;
        o->f370 = 0.0f;
        return;
    }
    if (o->f360 < t1->f40) {
        if (o->f380 != 0) {
            v8 = (S_vv8 *)o->f380;
            v8->f04 |= 1;
            o->f380 = (Arg0_380 *)0;
        }
        o->f368 = 0.0f;
        o->f36c = 0.0f;
        o->f370 = 0.0f;
        create_effect_777c((void *)(((char *)o + 0x35c)), 0x13d);
        o->f04 |= 1;
    }
}
