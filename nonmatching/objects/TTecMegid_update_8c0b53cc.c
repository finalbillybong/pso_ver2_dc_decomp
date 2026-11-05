/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0b53cc
 * function: TTecMegid_update_8c0b53cc
 * language: c
 * reference size: 328 bytes
 * compiled size: 328 bytes (+0.0%)
 * differing lines: 46 of 134 reference instruction lines
 * differing bytes: 145
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TTecMegid.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c285640 S_L8c285640;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
typedef struct Arg0_0_0 Arg0_0_0;
typedef struct Arg0_5c Arg0_5c;
typedef struct S_vv3_0 S_vv3_0;
typedef struct Block_frame_c {
    float f00;
    float f04;
    float f08;
} Block_frame_c;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    int f20;
    float f24;
    float f28;
    float f2c;
    char unknown30[0x2c];
    Arg0_5c *f5c;
    char unknown60[0x6c];
    int fcc;
    short fd0;
};
struct Frame {
    float f00;
    float f04;
    float f08;
    Block_frame_c f0c;
};
struct S_L8c285640 {
    char unknown0[0x4];
    int f04;
};
extern Vector3 g_8c305274;
extern S_L8c285640 g_8c285640;
extern int lookup_object_by_id(unsigned short);
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3be280(int, void *, void *);
extern void njPopMatrix_8c38accc(int);
extern void call_8c0a7608(void *, Frame *);
extern void operation_8c0b9d68(Object *);
extern void operation_8c0b9f74(Object *);
extern void operation_8c0ba200(void *, int);
void TTecMegid_update_8c0b53cc(Object *o)
{
    Frame frame;
    unsigned int v2;
    int v3;
    int v1;
    o->f20 = lookup_object_by_id((unsigned short)o->fd0);
    if (o->f20 == 0) {
        o->f04 |= 1;
        return;
    }
    v1 = 0x14c;
    for (v2 = 0; (v3 = o->fcc << 3, *(unsigned int *)((char *)&g_8c285640.f04 + v3) > v2); v2++) {
        if ((*(int *)(*(char **)((char *)&g_8c285640 + v3) + 4 + (v2 << 3)) & 4) != 0) {
            *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&g_8c305274;
            njPushMatrix_8c38ade4((void *)0x8c400500);
            njRotateY_8c37df90(0, (void *)(o->f5c));
            call_8c3be280(0, (void *)(&(&frame)->f0c), (void *)(&(&frame)->f0c));
            njPopMatrix_8c38accc(1);
            (&frame)->f00 = o->f24 + (&frame)->f0c.f00;
            (&frame)->f04 = o->f28 + (&frame)->f0c.f04;
            (&frame)->f08 = o->f2c + (&frame)->f0c.f08;
            call_8c0a7608((void *)(*(Arg0_0_0 **)(*(char **)((char *)o + v1) + (v2 << 2))), &frame);
        } else {
            call_8c0a7608((void *)(*(Arg0_0_0 **)(*(char **)((char *)o + v1) + (v2 << 2))), (Frame *)(&o->f24));
        }
    }
    operation_8c0b9d68(o);
    operation_8c0b9f74(o);
    operation_8c0ba200((void *)o, 1);
}
