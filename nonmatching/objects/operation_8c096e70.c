/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c096e70
 * function: operation_8c096e70
 * language: c
 * reference size: 424 bytes
 * compiled size: 424 bytes (+0.0%)
 * differing lines: 10 of 193 reference instruction lines
 * differing bytes: 5
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
typedef struct Object Object;
struct Object {
    char unknown0[0x50];
    float f50;
    char unknown54[0x1c];
    float f70;
    int f74;
    int f78;
    char unknown7c[0x10];
    float f8c;
    float f90;
};
extern int angle_step(int, int, int, float, float);
void operation_8c096e70(Object *o, int a1, int a2, float f0, float f1)
{
    float v1;
    float v25;
    int t1;
    int t2;
    v1 = (float)(f0 - o->f70);
    if (v1 > 0.1f) {
        if (!((o->f8c += 0.003f) > 0.1f)) {
            goto L_8c096f0e;
        }
        o->f8c = 0.1f;
    } else {
        if (v1 > 0.00666666683f) {
            if (!(0.00666666683f > (o->f8c -= 0.003f))) {
                goto L_8c096f0e;
            }
            o->f8c = 0.00666666683f;
        } else {
            if (-0.1f > v1) {
                if (!(-0.1f > (o->f8c -= 0.003f))) {
                    goto L_8c096f0e;
                }
                o->f8c = -0.1f;
            } else {
                if (-0.00666666683f > v1) {
                    if (!((o->f8c += 0.003f) > -0.00666666683f)) {
                        goto L_8c096f0e;
                    }
                    o->f8c = -0.00666666683f;
                } else {
                    o->f8c = 0.0f;
                }
            }
        }
    }
L_8c096f0e:;
    o->f70 += o->f8c;
    v25 = (float)(f1 - o->f50);
    if (v25 > 0.1f) {
        if (!((o->f90 += 0.003f) > 0.1f)) {
            goto L_8c096fb2;
        }
        o->f90 = 0.1f;
    } else {
        if (v25 > 0.00666666683f) {
            if (!(0.00666666683f > (o->f90 -= 0.003f))) {
                goto L_8c096fb2;
            }
            o->f90 = 0.00666666683f;
        } else {
            if (-0.1f > v25) {
                if (!(-0.1f > (o->f90 -= 0.003f))) {
                    goto L_8c096fb2;
                }
                o->f90 = -0.1f;
            } else {
                if (-0.00666666683f > v25) {
                    if (!((o->f90 += 0.003f) > -0.00666666683f)) {
                        goto L_8c096fb2;
                    }
                    o->f90 = -0.00666666683f;
                } else {
                    o->f90 = 0.0f;
                }
            }
        }
    }
L_8c096fb2:;
    o->f50 += o->f90;
    t1 = angle_step((int)(o->f78), a2, 0xc0, v1, v25);
    o->f78 = (int)(t1);
    t2 = ((int (*)(int, int, int))angle_step)((int)(o->f74), a1, 0xc0);
    o->f74 = (int)(t2);
}
