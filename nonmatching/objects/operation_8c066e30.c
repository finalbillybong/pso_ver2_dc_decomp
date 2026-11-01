/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c066e30
 * function: operation_8c066e30
 * language: c
 * reference size: 392 bytes
 * compiled size: 392 bytes (+0.0%)
 * differing lines: 102 of 179 reference instruction lines
 * differing bytes: 64
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
typedef struct S_frame_8 S_frame_8;
typedef struct Arg1 Arg1;
typedef struct S_vv12 S_vv12;
typedef struct S_vv26 S_vv26;
typedef struct S_vv9 S_vv9;
typedef struct Block_p1_0 {
    float f00;
    float f04;
    float f08;
} Block_p1_0;
struct Frame {
    S_frame_8 *f08[12];
};
struct Arg1 {
    Block_p1_0 f00;
};
struct S_frame_8 {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x2e8];
    short f330;
};
struct S_vv12 {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x2e8];
    short f330;
};
struct S_vv9 {
    float f00;
    float f04;
    float f08;
};
struct S_vv26 {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x2e8];
    short f330;
};
extern int lookup_low_id(int);
extern int active_unflagged_8c05b258(void *);
extern float squared_distance_xz(void *, void *);
extern float signed_sqrt_8c37f6c0(float);
int operation_8c066e30(int a0, Arg1 *a1)
{
    Frame frame;
    S_frame_8 *pa;
    int found;
    int n;
    int i;
    int j;
    int t1;
    int s;
    int best;
    Vector3 *va;
    S_frame_8 *pb;
    S_frame_8 *p;
    int k;
    n = 0;
    for (i = 0; 0xc > i; i++) {
        t1 = lookup_low_id(i);
        if (active_unflagged_8c05b258((void *)t1) != 0) {
            if (!(6400.0f > squared_distance_xz((void *)(t1 + 0x3c), (void *)(a0 + 0x3c)))) {
                *(S_frame_8 **)((char *)&frame.f08 + (n << 2)) = (S_frame_8 *)t1;
                n++;
            }
        }
    }
    if (!(n > 0)) {
        return 0;
    }
    if (n == 1) {
        *(Vector3 *)&a1->f00 = frame.f08[0]->f3c;
    } else {
        found = 0;
        for (i = 0; n > i; i++) {
            pa = *(S_frame_8 **)((char *)&frame.f08 + (i << 2));
            va = &pa->f3c;
            for (j = i + 1; n > j; j++) {
                pb = *(S_frame_8 **)((char *)&frame.f08 + (j << 2));
                if (100.0f > signed_sqrt_8c37f6c0(squared_distance_xz((void *)((char *)pb + 0x3c), (void *)va))) {
                    found = 1;
                    s = pa->f330 + pb->f330;
                    if (s > best) {
                        a1->f00.f00 = (va->x + pb->f3c.x) * 0.5f;
                        a1->f00.f04 = (va->y + pb->f3c.y) * 0.5f;
                        a1->f00.f08 = (va->z + pb->f3c.z) * 0.5f;
                        best = s;
                    }
                }
            }
        }
        if (found == 0) {
            best = 0;
            for (k = 0; n > k; k++) {
                p = *(S_frame_8 **)((char *)&frame.f08 + (k << 2));
                s = p->f330;
                if (s > best) {
                    *(Vector3 *)&a1->f00 = p->f3c;
                    best = s;
                }
            }
        }
    }
    return 1;
}
