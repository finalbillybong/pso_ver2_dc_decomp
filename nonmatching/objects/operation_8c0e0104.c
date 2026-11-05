/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0e0104
 * function: operation_8c0e0104
 * language: c
 * reference size: 544 bytes
 * compiled size: 544 bytes (+0.0%)
 * differing lines: 20 of 229 reference instruction lines
 * differing bytes: 25
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, stack frame and spills, instruction or operand
 *   order, constant loading; review found and fixed behaviour defects of the generator draft; not
 *   proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2; offline start: Pioneer 2 office
 *   walk and NPC dialogue (emulator A/B: RAM, trace and sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c0ddf28 S_c8c0ddf28;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_vv5 S_vv5;
struct Object {
    char unknown0[0x34];
    int f34;
    float f38;
    float f3c;
    float f40;
    float f44;
    char unknown48[0x8];
    float f50;
    float f54;
    char unknown58[0x29];
    unsigned char f81;
    char unknown82[0x1];
    char f83;
};
struct S_c8c0ddf28 {
    float f00;
    float f04;
};
struct Frame {
    char unknown0[0x20];
};
struct S_vv5 {
    float f00;
    float f04;
};
extern int call_8c0dfe4c(Object *);
extern int operation_8c0dde00(Object *);
extern S_c8c0ddf28 *operation_8c0ddf28(char);
extern void operation_8c0ddef0(void *);
extern int operation_8c0e0324(Object *, void *, void *);
extern int call_8c0e0428(Object *, void *, void *);
extern int call_8c0e0ac8(Object *, void *, void *);
extern int call_8c0e0edc(Object *, void *, Frame *);
void operation_8c0e0104(Object *o)
{
    Frame frame;
    S_vv5 *v5;
    int t1;
    int t2;
    S_c8c0ddf28 *t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    float k;
    float v;
    t1 = call_8c0dfe4c(o);
    if (t1 != 0) {
        if (o->f83 == -1) {
            o->f81 |= 1;
            o->f34 |= 0x200;
            t2 = operation_8c0dde00(o);
            o->f83 = t2;
        }
        t3 = operation_8c0ddf28(o->f83);
        o->f38 = t3->f00 - o->f40 * 0.5f;
        o->f3c = t3->f04 - o->f44 * 0.5f;
        if ((*(float *)0x8c4e2ba8 + 20.0f) > o->f38) {
            o->f38 = *(float *)0x8c4e2ba8 + 20.0f;
        }
        v = *(float *)0x8c4e2bb0 - 20.0f;
        k = 1.0f;
        v = v - k * o->f50;
        if (v < o->f38) {
            o->f38 = v;
        }
        if ((*(float *)0x8c4e2bac + 40.0f) > o->f3c) {
            o->f3c = *(float *)0x8c4e2bac + 40.0f;
        }
        v = *(float *)0x8c4e2bb4 - 40.0f;
        k = 1.0f;
        v = v - k * o->f54;
        if (v < o->f3c) {
            o->f3c = v;
        }
        return;
    }
    if (o->f83 != -1) {
        o->f81 = (unsigned int)o->f81 >> 1 << 1;
        o->f34 &= -0x201;
        operation_8c0ddef0((void *)(&o->f83));
    }
    v5 = (S_vv5 *)0;
    if (((o->f34 & 0x400)) == 0) {
        t4 = operation_8c0e0324(o, (void *)(&o->f38), (void *)(((char *)(&frame) + 0x18)));
        if (t4 != 0) {
            v5 = (S_vv5 *)((char *)(&frame) + 0x18);
        }
        t5 = call_8c0e0428(o, (void *)(((char *)(&frame) + 0x18)), (void *)(((char *)(&frame) + 0x10)));
        if (t5 == 0) {
            goto L_8c0e02b0;
        }
        v5 = (S_vv5 *)((char *)(&frame) + 0x10);
    } else {
        o->f34 &= -0x401;
        t6 = operation_8c0e0324(o, (void *)(&o->f38), (void *)(((char *)(&frame) + 0x18)));
        if (t6 != 0) {
            v5 = (S_vv5 *)((char *)(&frame) + 0x18);
        }
        t7 = call_8c0e0ac8(o, (void *)(((char *)(&frame) + 0x18)), (void *)(((char *)(&frame) + 0x8)));
        if (t7 != 0) {
            v5 = (S_vv5 *)((char *)(&frame) + 0x8);
        }
        if ((int)v5 != (int)(((char *)(&frame) + 0x8))) {
            t8 = call_8c0e0428(o, (void *)(((char *)(&frame) + 0x8)), (void *)(((char *)(&frame) + 0x10)));
            if (t8 != 0) {
                v5 = (S_vv5 *)((char *)(&frame) + 0x10);
            }
        }
        if (v5 == 0) {
            t9 = call_8c0e0edc(o, (void *)(&o->f38), (Frame *)((&frame)));
            if (t9 != 0) {
                v5 = (S_vv5 *)(&frame);
            }
        }
    }
L_8c0e02b0:;
    if (v5 != 0) {
        o->f38 = v5->f00;
        o->f3c = v5->f04;
    }
}
