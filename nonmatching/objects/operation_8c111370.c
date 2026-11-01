/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c111370
 * function: operation_8c111370
 * language: c
 * reference size: 360 bytes
 * compiled size: 360 bytes (+0.0%)
 * differing lines: 100 of 165 reference instruction lines
 * differing bytes: 88
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction or operand order; review found and fixed behaviour defects of
 *   the generator draft; not proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
typedef struct S_vv13 S_vv13;
typedef struct Block_frame_c {
    float f00;
    float f04;
    float f08;
} Block_frame_c;
typedef struct Block_c8c021ef8_3c {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_c8c021ef8_3c;
struct Frame {
    char f00;
    char f01;
    short f02;
    short f04;
    short f06;
    short f08;
    short f0a;
    Block_frame_c f0c;
};
struct S_c8c021ef8 {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    Block_c8c021ef8_3c f3c;
};
struct S_vv13 {
    char unknown0[0x3c];
    float f3c;
    char unknown40[0x4];
    float f44;
};
extern S_c8c021ef8 *lookup_low_id(int);
extern float call_8c130334(float, float);
extern void operation_8c036840(int);
void operation_8c111370(int a0)
{
    Frame frame;
    int off;
    int id;
    int i;
    int v20;
    S_c8c021ef8 *t1;
    S_vv13 *p;
    float t4;
    t1 = lookup_low_id((int)((unsigned short)a0));
    if (t1 == 0) {
        return;
    }
    off = 0x308;
    if ((int)(*(short *)((char *)t1 + off) == 3) != 0) {
        id = (unsigned short)a0;
        for (i = 0; 4 > i; i++) {
            if (i == id) {
                continue;
            }
            p = (S_vv13 *)lookup_low_id(i);
            if (p == 0) {
                continue;
            }
            if ((int)(*(short *)((char *)p + off) == 3) == 0) {
                break;
            }
        }
    } else {
        id = (unsigned short)a0;
        for (i = 0; 4 > i; i++) {
            if (i == id) {
                continue;
            }
            p = (S_vv13 *)lookup_low_id(i);
            if (p == 0) {
                continue;
            }
            if ((int)(*(short *)((char *)p + off) == 3) != 0) {
                break;
            }
        }
    }
    if (p == 0) {
        return;
    }
    (&frame)->f00 = 0x1a;
    (&frame)->f01 = 1;
    (&frame)->f00 = 0x3d;
    v20 = 0;
    (&frame)->f01 = 1;
    (&frame)->f04 = v20;
    (&frame)->f06 = v20;
    (&frame)->f08 = -1;
    (&frame)->f0a = -1;
    (&frame)->f0c.f08 = 0.0f;
    (&frame)->f0c.f04 = 0.0f;
    (&frame)->f0c.f00 = 0.0f;
    (&frame)->f00 = 0x3e;
    (&frame)->f01 = 6;
    if (((t1->f34 & 0x100000)) != 0) {
        v20 = 1;
    }
    t4 = call_8c130334(p->f3c - t1->f3c.f00, p->f44 - t1->f3c.f08);
    (&frame)->f02 = a0;
    *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&t1->f3c;
    (&frame)->f06 = (int)(t4 * 65536.0f / 6.28318405f);
    (&frame)->f04 = v20;
    if ((short)v20 == 1) {
        operation_8c036840((int)(&frame));
        return;
    }
    operation_8c036840((int)(&frame));
}
