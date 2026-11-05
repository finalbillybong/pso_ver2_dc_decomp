/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c04a52c
 * function: operation_8c04a52c
 * language: c
 * reference size: 268 bytes
 * compiled size: 268 bytes (+0.0%)
 * differing lines: 6 of 112 reference instruction lines
 * differing bytes: 14
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   instruction scheduling, stack frame and spills; review found and fixed behaviour defects of
 *   the generator draft; not proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2; offline start: Pioneer 2 office
 *   walk and NPC dialogue (emulator A/B: RAM, trace and sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c2f1bc0 S_L8c2f1bc0;
typedef struct Frame Frame;
typedef struct S_g8c467240 S_g8c467240;
typedef struct S_vv4 S_vv4;
typedef struct S_vv7 S_vv7;
typedef struct S_x53424 S_x53424;
typedef struct Block_frame_0 {
    float f00;
    int f04;
    float f08;
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
};
struct S_L8c2f1bc0 {
    int f00;
    int f04;
    int f08;
};
struct S_vv7 {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x12];
    int f34;
};
struct S_x53424 {
    Vector3 f00;
};
struct S_vv4 {
    Vector3 f00;
};
extern int g_8c44be04;
extern int g_8c467874;
extern S_L8c2f1bc0 g_8c2f1bc0;
extern void vector_sub_in_place_8c37f6f0(Frame *, int);
extern int query_capped_segment(void *, void *);
unsigned short operation_8c04a52c(int a0, S_vv4 *a1, float f0)
{
    Vector3 frame;
    S_vv7 *v7;
    unsigned short v1;
    int v6;
    float v5;
    float v10;
    int v3;
    int v2;
    int t1;
    unsigned short lim;
    frame = *(Vector3 *)&g_8c2f1bc0;
    v1 = (unsigned short)0xffff;
    v2 = (int)0x37c;
    v5 = (float)(f0 * f0);
    v3 = (int)0x324;
    for (v6 = 0; g_8c467874 > v6; v6++) {
        v7 = (S_vv7 *)*(S_g8c467240 **)((char *)0x8c467240 + (v6 << 2));
        if (v7 != 0) {
            lim = 0x1000;
            if (v7->f20 < lim && ((v7->f34 & 0x2000800)) == 0 && *(int *)((char *)((char *)v7 + 0x0) + (v2)) == (int)g_8c44be04) {
                frame = ((S_x53424 *)((int)v7 + v3))->f00;
                vector_sub_in_place_8c37f6f0((Frame *)&frame, (int)(a0 + v3));
                v10 = frame.x * frame.x + frame.z * frame.z;
                if (v5 > v10) {
                    t1 = query_capped_segment((void *)a0, (void *)((int)v7 + v3));
                    if (t1 == 0) {
                        v1 = v7->f20;
                        v5 = v10;
                        if (a1 != 0) {
                            a1->f00 = frame;
                        }
                    }
                }
            }
        }
    }
    return v1;
}
