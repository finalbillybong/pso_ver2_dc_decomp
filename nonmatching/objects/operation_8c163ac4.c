/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c163ac4
 * function: operation_8c163ac4
 * language: c
 * reference size: 304 bytes
 * compiled size: 304 bytes (+0.0%)
 * differing lines: 6 of 119 reference instruction lines
 * differing bytes: 6
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
typedef struct Block20 {
    int words[5];
} Block20;
typedef struct Frame Frame;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_vv1 S_vv1;
typedef struct Block_frame_14 {
    unsigned char f00;
    char f01;
    char f02;
    char unknown3[0x9];
    int f0c;
    char unknown10[0x4];
} Block_frame_14;
typedef struct Block_frame_0 {
    char unknown0[0xc];
    int f0c;
    char unknown10[0x4];
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
    Block_frame_14 f14;
    int f28;
    char unknown2c[0xe4];
};
struct S_vv1 {
    char unknown0[0x4];
    int f04;
    int f08;
};
extern S_g8c418248 *g_8c418248;
extern void construct_seeded_random_state(void *, unsigned int);
extern void call_8c03809c(void *, S_vv1 *, int);
extern void seed_random_state(void *, unsigned int);
extern void call_8c037eb8(void *, S_vv1 *, int);
extern void operation_1c7dd4(void *);
extern int operation_194d60(unsigned short);
extern void operation_8c1c9730(Frame *);
extern int operation_8c1c9bb0(Frame *);
extern void operation_1954bc(int);
extern void call_8c073710(int, int, void *, int);
extern void operation_8c17780c(int, int);
void operation_8c163ac4(int a0)
{
    Frame frame;
    S_vv1 *v1;
    int v2;
    int v9;
    int t1;
    int t2;
    int t3;
    unsigned char k;
    if (a0 != 0) {
        v1 = (S_vv1 *)(a0 + 0x280);
        construct_seeded_random_state((void *)(&(&frame)->f28), (unsigned int)(v1->f08));
        call_8c03809c((void *)(&(&frame)->f28), v1, 8);
        seed_random_state((void *)(&(&frame)->f28), (unsigned int)(v1->f08));
        call_8c037eb8((void *)(&(&frame)->f28), v1, 8);
        if (v1->f04 == 0x17e5902) {
            operation_1c7dd4((void *)(&(&frame)->f14));
            (&frame)->f14.f00 = 0;
            (&frame)->f14.f01 = 0x1c;
            (&frame)->f14.f02 = 0;
            t1 = operation_194d60((unsigned short)g_8c418248);
            (&frame)->f14.f0c = (int)(t1);
            if (&(&frame)->f14 != 0) {
                *(Block20 *)&(&frame)->f00 = *(Block20 *)&(&frame)->f14;
                operation_8c1c9730((Frame *)((&frame)));
                t2 = operation_8c1c9bb0((Frame *)((&frame)));
                if (t2 != 0 && (unsigned int)5 > (unsigned int)(k = (&frame)->f14.f00)) {
                    v2 = (int)*(int *)((char *)0x8c317330 + (k << 2));
                    if (v2 != 0) {
                        operation_1954bc((int)((&frame)->f00.f0c));
                        t3 = ((int (*)(Frame *))(v2))((Frame *)((&frame)));
                        v9 = (int)t3;
                        goto L_8c163b8e;
                    }
                }
            }
            v9 = (int)0;
L_8c163b8e:;
            if (v9 != 0) {
                call_8c073710(v9, 0, (void *)((void *)0x8c28645c), 0);
                operation_8c17780c(0, 0x3d);
            }
        }
    }
}
