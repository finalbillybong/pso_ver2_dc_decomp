/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1adbf0
 * function: operation_8c1adbf0
 * language: c
 * reference size: 268 bytes
 * compiled size: 268 bytes (+0.0%)
 * differing lines: 26 of 111 reference instruction lines
 * differing bytes: 117
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
typedef struct S_g8c467240 S_g8c467240;
typedef struct S_vv5 S_vv5;
typedef struct S_vv5_s60 S_vv5_s60;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
    Vector3 f0c;
};
struct S_vv5 {
    char unknown0[0x3c];
    Vector3 f3c;
    Vector3 f48;
};
struct S_vv5_s60 {
    char unknown0[0x4];
    int f04;
};
extern Vector3 g_8c325254;
extern int g_8c418248;
extern int g_8c467874;
extern int operation_8c1adfb8(void *);
extern float njSin_8c37eb0c(int);
extern float njCos_8c38c154(int);
extern void operation_8c0a1b78(void *);
void operation_8c1adbf0(int a0)
{
    Vector3 base;
    Vector3 pos;
    S_vv5 *v5;
    int t3;
    int v2;
    int v10;
    int v4;
    int v1;
    float t1;
    float t2;
    int v3;
    base = g_8c325254;
    t3 = operation_8c1adfb8((void *)a0);
    v1 = (int)0x37c;
    v2 = (int)0;
    v3 = (int)0x8000;
    v4 = (int)0;
    while (g_8c467874 > v4) {
        v5 = (S_vv5 *)*(S_g8c467240 **)((char *)0x8c467240 + (v4 << 2));
        if (v5 != 0 && *(int *)((char *)((char *)v5 + 0x0) + (v1)) == 0xe) {
            pos = base;
            t1 = njSin_8c37eb0c(v2);
            pos.x += t1 * 250.0f;
            t2 = njCos_8c38c154(v2);
            pos.z += t2 * 250.0f;
            *(Vector3 *)&v5->f3c = pos;
            *(Vector3 *)&v5->f48 = *(Vector3 *)&v5->f3c;
            ((S_vv5_s60 *)((char *)v5 + 0x60))->f04 = v2 + v3;
            if (v4 == g_8c418248) {
                operation_8c0a1b78((void *)v5);
            }
            v10 = (int)(v2 + t3);
            v2 = (int)v10;
        }
        v4 = (int)(v4 + 1);
    }
}
