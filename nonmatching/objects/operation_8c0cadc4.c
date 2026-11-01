/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0cadc4
 * function: operation_8c0cadc4
 * language: c
 * reference size: 232 bytes
 * compiled size: 232 bytes (+0.0%)
 * differing lines: 22 of 89 reference instruction lines
 * differing bytes: 32
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
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_0;
typedef struct Block_p0_318 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_p0_318;
struct Object {
    char unknown0[0xe8];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x226];
    Block_p0_318 f318;
    char unknown324[0x70];
    int f394;
};
struct Frame {
    Block_frame_0 f00;
};
extern void operation_8c01c5f0(Object *);
extern void operation_8c059ea4(void *, int);
extern float normalize_xz_checked(void *);
extern void clamp_and_dispatch_contact(void *, float, float, float);
extern void call_8c05fd7c(int, Object *, void *, int, int);
extern void reset_segments_8c05a124(void *);
void operation_8c0cadc4(Object *o, int a1)
{
    Frame frame;
    float t1;
    switch (a1) {
    case 4:
        o->ff0 = 5;
        operation_8c01c5f0(o);
        return;
    case 3:
        if (((o->fe8 & 0x10)) == 0) {
            return;
        }
        operation_8c059ea4((void *)o, (int)(o->f394));
        return;
    case 0:
        operation_8c01c5f0(o);
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f318;
        t1 = normalize_xz_checked((void *)(&frame));
        clamp_and_dispatch_contact((void *)o, (&frame)->f00.f00, (&frame)->f00.f08, t1);
        {
            float *p = &o->f318.f00;
            float *q = &o->f318.f08;
            *p *= 0.8f;
            *q *= 0.8f;
        }
        call_8c05fd7c(0x3001d, o, (void *)(((char *)o + 0x3c)), 0, 0);
        return;
    case 5:
        reset_segments_8c05a124((void *)o);
    }
}
