/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1ed048
 * function: handle_6x33_revive_player_8c1ed048
 * language: c
 * reference size: 184 bytes
 * compiled size: 184 bytes (+0.0%)
 * differing lines: 12 of 75 reference instruction lines
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
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
typedef struct Object Object;
struct Object {
    char unknown0[0x2];
    unsigned short f02;
    unsigned short f04;
};
struct S_c8c021ef8 {
    char unknown0[0x10];
    int f10;
    char unknown14[0x33c];
    int f350;
};
struct Frame {
    int f00;
    short f04;
    short f06;
    float f08;
    char unknownc[0x50];
};
extern int g_8c44be90;
extern S_c8c021ef8 *lookup_low_id(int);
extern void call_8c18e044(void *, void *, int, int, int);
extern void TTecReverser_ctor_8c0abf80(S_c8c021ef8 *, void *, Frame *, int);
void handle_6x33_revive_player_8c1ed048(Object *o)
{
    Frame frame;
    int v1;
    S_c8c021ef8 *t1;
    int v2;
    S_c8c021ef8 *t2;
    Object *self = o;
    t1 = lookup_low_id((int)(self->f02));
    if (t1 != 0) {
        v1 = (int)(((self->f04 & 0xc000)) == 0);
        if (v1 != 0) {
            t2 = lookup_low_id((int)(self->f04));
            if (t2 != 0) {
                v2 = (int)(((t2->f350 & 4)) != 0);
                if (v2 == 0 && t2->f10 == g_8c44be90) {
                    call_8c18e044((void *)(&(&frame)->f04), (void *)((void *)0x8c07de9c), 0, 8, 0xb);
                    (&frame)->f00 = 1;
                    (&frame)->f04 = self->f04;
                    (&frame)->f06 = 0;
                    (&frame)->f08 = 10.0f;
                    TTecReverser_ctor_8c0abf80(t1, (void *)(((char *)t1 + 0x3c)), (Frame *)((&frame)), 0x1d);
                }
            }
        }
    }
}
