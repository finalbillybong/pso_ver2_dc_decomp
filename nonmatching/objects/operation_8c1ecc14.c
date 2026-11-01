/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1ecc14
 * function: operation_8c1ecc14
 * language: c
 * reference size: 232 bytes
 * compiled size: 232 bytes (+0.0%)
 * differing lines: 10 of 96 reference instruction lines
 * differing bytes: 109
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
typedef struct S_c8c0adc1c S_c8c0adc1c;
typedef struct Frame Frame;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0x2e6];
    short f308;
    char unknown30a[0x2];
    short f30c;
    char unknown30e[0x24];
    short f332;
};
struct S_c8c0adc1c {
    char unknown0[0x10];
    int f10;
};
struct Frame {
    char unknown0[0x1];
    char f01;
    char f02;
    char f03;
    short f04;
    short f06;
    short f08;
    char unknowna[0x2];
};
extern int object_ready(void *);
extern int operation_8c247888(void *);
extern int call_8c247818(void *);
extern S_c8c0adc1c *call_8c0adc1c(int, int);
extern void split14_8c247870(signed char, void *, void *);
extern void operation_8c0368a8(void *);
void operation_8c1ecc14(Object *o)
{
    Frame frame;
    int v1;
    int t1;
    int t2;
    int t3;
    S_c8c0adc1c *t4;
    int t5;
    t1 = object_ready((void *)o);
    if (t1 != 0) {
        if (o != 0) {
            v1 = (int)(o->f308 == 2);
            if (v1 != 0) {
                return;
            }
        }
        o->f30c = 4;
        t2 = operation_8c247888((void *)(((char *)o + 0x3bc)));
        t3 = call_8c247818((void *)(((char *)o + 0x3bc)));
        t4 = call_8c0adc1c((int)((short)t2), (int)((char)t3));
        t5 = t4->f10;
        *(short *)((char *)o + 0x332) -= t5;
        if (!(o->f332 >= 0)) {
            o->f332 = 0;
        }
        t5 = call_8c247818((void *)(((char *)o + 0x3bc)));
        split14_8c247870((signed char)t5, (void *)(&(&frame)->f01), (void *)(&frame));
        (&frame)->f02 = 0x1a;
        (&frame)->f03 = 1;
        (&frame)->f02 = 0x3d;
        (&frame)->f03 = 1;
        (&frame)->f08 = 0;
        (&frame)->f06 = 0;
        (&frame)->f02 = 0x48;
        (&frame)->f03 = 2;
        (&frame)->f04 = o->f20;
        (&frame)->f06 = t2;
        (&frame)->f08 = (&frame)->f01;
        operation_8c0368a8((void *)(&(&frame)->f02));
    }
}
