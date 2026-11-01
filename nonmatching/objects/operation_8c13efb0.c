/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c13efb0
 * function: operation_8c13efb0
 * language: c
 * reference size: 252 bytes
 * compiled size: 260 bytes (+3.2%)
 * differing lines: 54 of 107 reference instruction lines
 * differing bytes: 135
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block28 {
    int words[7];
} Block28;
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct S_c8c053d84_64 S_c8c053d84_64;
typedef struct Frame Frame;
typedef struct S_vv4 S_vv4;
typedef struct Block_frame_c {
    int f00;
    int f04;
    int f08;
    char unknownc[0x10];
} Block_frame_c;
struct Frame {
    float f00;
    float f04;
    float f08;
    Block_frame_c f0c;
};
struct S_vv4 {
    Block28 f00;
};
struct S_c8c053d84 {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x1c];
    S_c8c053d84_64 *f64;
};
extern S_c8c053d84 *lookup_object_by_id(unsigned short);
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3be280(int, void *, Frame *);
extern void njPopMatrix_8c38accc(int);
extern void create_effect_7cc0(void *, int, int, int);
void operation_8c13efb0(int a0, int a1)
{
    Frame frame;
    int v2;
    S_c8c053d84 *t1;
    int v1;
    S_vv4 *v4;
    int v3;
    char *row;
    char *q;
    t1 = lookup_object_by_id((unsigned short)a1);
    if (t1 != 0) {
        row = (char *)0x8c3145d0 + (a0 << 4);
        v1 = *(int *)(row + 0xc);
        if (v1 > 0) {
            v2 = *(int *)(row + 0x8);
            v3 = (int)0;
            q = (char *)(&frame) + 0x18;
            while (v1 > v3) {
                *(Block28 *)&(&frame)->f0c = *(Block28 *)(v2 + v3 * 0x1c);
                njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
                njRotateY_8c37df90(0, (void *)(t1->f64));
                call_8c3be280(0, (void *)q, (Frame *)((&frame)));
                njPopMatrix_8c38accc(1);
                (&frame)->f00 += t1->f3c;
                (&frame)->f04 += t1->f40 + 30.0f;
                (&frame)->f08 += t1->f44;
                create_effect_7cc0((void *)(&frame), (int)((&frame)->f0c.f00), (int)((&frame)->f0c.f04), (int)((&frame)->f0c.f08));
                v3 = (int)(v3 + 1);
            }
        }
    }
}
