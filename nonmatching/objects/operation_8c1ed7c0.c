/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1ed7c0
 * function: operation_8c1ed7c0
 * language: c
 * reference size: 496 bytes
 * compiled size: 508 bytes (+2.4%)
 * differing lines: 66 of 200 reference instruction lines
 * differing bytes: 216
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +12 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c167fd4 S_c8c167fd4;
typedef struct Object Object;
typedef struct S_x26672 S_x26672;
struct Object {
    char unknown0[0x64];
    int f64;
    char unknown68[0x80];
    int fe8;
    char unknownec[0xc];
    float ff8;
    char unknownfc[0x210];
    short f30c;
    char unknown30e[0x42];
    int f350;
    char unknown354[0x3c];
    int f390;
    char unknown394[0x8c];
    int f420;
    float f424;
    float f428;
    char unknown42c[0x28];
    unsigned short f454;
};
struct S_c8c167fd4 {
    char unknown0[0x14];
    int f14;
};
struct S_x26672 {
    char unknown0[0x48];
    int f48;
};
extern int angle_halfway(int, int);
extern float operation_8c1a73c8(int);
extern int check_range_8c01cf68(void *, float);
extern int operation_8c185334(void *);
extern S_c8c167fd4 *record64_8c167fd4(int);
extern void call_8c05fd7c(int, Object *, int, int, int);
extern float operation_8c1a7404(int);
extern float operation_8c1a7444(int);
extern void operation_8c1edc0c(int, int);
extern void call_8c025a44(Object *);
void operation_8c1ed7c0(Object *o)
{
    int v19;
    int t1;
    float t2;
    int t3;
    int t4;
    S_c8c167fd4 *t5;
    float t6;
    float t7;
    float t8;
    int t9;
    t1 = angle_halfway((int)(o->f64), (int)(o->f390));
    o->f64 = (int)(t1);
    if (o->f30c != 0) {
        if (o->f30c == 1) {
            goto L_8c1ed856;
        }
        if (o->f30c == 2) {
            goto L_8c1ed942;
        }
        if (o->f30c == 3) {
            goto L_8c1ed8f6;
        }
    } else {
        t2 = operation_8c1a73c8((int)o);
        t3 = check_range_8c01cf68((void *)o, t2);
        if (t3 != 0) {
            o->f30c = 1;
            o->fe8 |= 0x40;
            t4 = operation_8c185334((void *)(((char *)o + 0x418)));
            t5 = record64_8c167fd4((int)((short)t4));
            o->f420 = (int)(t5->f14);
            o->f424 = -0.2f;
        }
        call_8c05fd7c(0x20023, o, 0, 0, 0);
        goto L_8c1ed942;
L_8c1ed856:;
        o->ff8 = o->f424 + o->ff8;
        if (o->f424 > 0.0f) {
            t6 = operation_8c1a7404((int)o);
            if (t6 > o->ff8) {
                goto L_8c1ed8b4;
            }
            o->f424 = -0.2f;
        } else {
            t7 = operation_8c1a73c8((int)o);
            if (!(o->ff8 > (t7 - 1.0f))) {
                o->f424 = 0.2f;
            }
        }
L_8c1ed8b4:;
        *(int *)((char *)o + 0x420) -= 1;
        if (!(o->f420 >= 0)) {
            o->f30c = 2;
            o->fe8 &= -0x41;
            t8 = operation_8c1a7444((int)o);
            o->f428 = t8;
        }
        call_8c05fd7c(0x20023, o, 0, 0, 0);
        goto L_8c1ed942;
L_8c1ed8f6:;
        v19 = (int)(((((S_x26672 *)((char *)(int *)((char *)o + 0x418) + ((o->f454 & 0xffff) << 2)))->f48 & 8)) != 0);
        if (v19 != 0) {
            *(int *)((char *)((char *)(int *)((char *)o + 0x418) + ((o->f454 & 0xffff) << 2)) + 0x48) &= -9;
            o->f350 &= -0x81;
            o->fe8 &= -0x41;
            t9 = operation_8c185334((void *)(((char *)o + 0x418)));
            operation_8c1edc0c((int)o, (int)((short)t9));
        }
    }
L_8c1ed942:;
    call_8c025a44(o);
}
