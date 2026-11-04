/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1956d0
 * function: TObjCMIcon_render_8c1956d0
 * language: c
 * reference size: 240 bytes
 * compiled size: 244 bytes (+1.7%)
 * differing lines: 20 of 99 reference instruction lines
 * differing bytes: 119
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   instruction scheduling, stack frame and spills, instruction or operand order, constant
 *   loading; review found and fixed behaviour defects of the generator draft; not proven
 *   equivalent to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_vv3 S_vv3;
typedef struct S_vv4 S_vv4;
typedef struct S_vv4_4 S_vv4_4;
struct S_vv3 {
    char unknown0[0x4];
    float f04;
    float f08;
};
struct Frame {
    float f00;
    float f04;
};
struct S_vv4 {
    int f00;
};
extern int operation_1957c0(void *, int);
extern void operation_195990(int, void *, float, float);
void TObjCMIcon_render_8c1956d0(int a0)
{
    Frame frame;
    int t1;
    S_vv3 *v3;
    int pm3;
    float pm10;
    S_vv4 *v4;
    int v2;
    float pm2;
    float base;
    float v5;
    int v7;
    float pm6;
    float pm5;
    void *pm4;
    char *pm9;
    float pm11;
    v3 = (S_vv3 *)(void *)0x8c4dc360;
    v2 = 0;
    pm2 = 608.0f;
    pm5 = pm2 - *(float *)0x8c4dc3cc;
    pm6 = pm5;
    pm4 = (void *)0x8c31b344;
    base = pm6;
    v4 = (S_vv4 *)pm4;
    while (9 > v2) {
        float k;
        pm11 = v3->f04;
        v5 = pm11;
        (&frame)->f00 = base + v3->f08;
        pm5 = v5 * v5;
        pm6 = *(float *)0x8c31bf88;
        (&frame)->f04 = 432.0f * pm6;
        pm2 = pm5;
        v5 = pm2;
        pm10 = 1.0f;
        k = -2.0f - (pm10 - v5);
        v7 = 0;
        while (v4->f00 > v7) {
            pm9 = (char *)v4 + 0x4;
            t1 = operation_1957c0((void *)a0, (int)(*(S_vv4_4 **)((pm9) + (v7 << 2))));
            operation_195990(t1, (void *)&frame, k, v5);
            frame.f00 += (float)(1 + *(short *)((char *)0x8c31b3f8 + t1 * 0x14));
            v7++;
        }
        v2++, v3 = (S_vv3 *)((char *)v3 + 12), v4 = (S_vv4 *)(20 + (char *)v4);
    }
}
