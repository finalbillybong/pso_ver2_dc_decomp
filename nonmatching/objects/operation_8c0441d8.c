/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0441d8
 * function: operation_8c0441d8
 * language: c
 * reference size: 328 bytes
 * compiled size: 332 bytes (+1.2%)
 * differing lines: 24 of 127 reference instruction lines
 * differing bytes: 66
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c46f5a0 S_L8c46f5a0;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_dc Arg0_dc;
typedef struct Block_frame_0 {
    float f00;
    float f04;
    float f08;
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
};
struct Object {
    char unknown0[0xdc];
    Arg0_dc *fdc;
    char unknowne0[0x84];
    Vector3 f164;
    char unknown170[0x1b8];
    float f328;
};
struct Arg0_dc {
    char unknown0[0xc];
    float f0c;
};
extern S_L8c46f5a0 g_8c46f5a0;
extern char gc_8c46f5a0[];
extern int operation_8c051ff4(void *, void *, void *);
extern void vector_sub_in_place_8c37f6f0(Frame *, void *);
extern float errno_wrap_8c130334(float, float);
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, int);
extern void call_8c3be38c(int, void *, void *);
extern void njPopMatrixEx_8c38ad10(void);
extern void call_8c3bdf60(Frame *, void *);
extern int query_capped_segment(void *, void *);
extern int operation_8c011214(int, int, int);
int operation_8c0441d8(Object *o, Vector3 sp)
{
    Frame frame;
    int v1;
    int t1;
    int t2;
    int t3;
    float t4;
    t1 = operation_8c051ff4((void *)o, (void *)(&sp), (void *)0);
    if (t1 != 0) {
        *(Vector3 *)&(&frame)->f00 = sp;
        (&frame)->f00.f04 = o->f328;
        if (o->fdc != 0) {
            vector_sub_in_place_8c37f6f0((Frame *)((&frame)), (void *)(((char *)o + 0x324)));
            t4 = errno_wrap_8c130334((&frame)->f00.f00, (&frame)->f00.f08);
            v1 = (int)(int)(t4 * 65536.0f / 6.28318405f);
            *(float *)(gc_8c46f5a0 + 0x4) = 0.0f;
            *(float *)(gc_8c46f5a0 + 0x0) = 0.0f;
            *(float *)(gc_8c46f5a0 + 0x8) = o->fdc->f0c;
            njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
            njRotateY_8c37df90(0, v1);
            call_8c3be38c(0, (void *)((void *)&g_8c46f5a0), (void *)((void *)&g_8c46f5a0));
            njPopMatrixEx_8c38ad10();
            call_8c3bdf60((Frame *)((&frame)), (void *)((void *)&g_8c46f5a0));
            call_8c3bdf60((Frame *)((&frame)), (void *)(((char *)o + 0x324)));
        }
        t2 = query_capped_segment((void *)o, (void *)(&frame));
        if (t2 != 0) {
            return 0;
        }
        t3 = operation_8c011214((int)(((char *)o + 0x324)), (int)(&frame), -1);
        if (t3 != 0) {
            return 0;
        }
        *(Vector3 *)&o->f164 = sp;
        return 1;
    }
    return 0;
}
