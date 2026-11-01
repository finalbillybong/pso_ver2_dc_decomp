/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c2185ac
 * function: operation_8c2185ac
 * language: c
 * reference size: 120 bytes
 * compiled size: 120 bytes (+0.0%)
 * differing lines: 4 of 50 reference instruction lines
 * differing bytes: 7
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
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_34 Arg0_34;
struct Object {
    char unknown0[0x20];
    int f20;
    char unknown24[0xc];
    Arg0_30 *f30;
    Arg0_34 *f34;
};
struct Frame {
    char unknown0[0x14];
};
extern int operation_8c051d18(void *);
extern void operator_delete_8c18de08(int);
extern void operation_8c04b21c(int, float, float);
void operation_8c2185ac(Object *o)
{
    Frame frame;
    int v1;
    int t1;
    if (o->f20 == 1) {
        t1 = operation_8c051d18((void *)(o->f30));
        o->f34 = (Arg0_34 *)0;
        while (*(char *)((char *)((char *)t1 + 0x0) + ((int)(o->f34))) != 0) {
            o->f34 = (Arg0_34 *)((int)o->f34 + 1);
        }
        operator_delete_8c18de08(t1);
        v1 = (int)0;
        while ((int)(o->f34) > (unsigned char)v1) {
            *(char *)((char *)((char *)(&frame) + 0x0) + ((unsigned char)v1)) = 0x2a;
            v1 = (int)(v1 + 1);
        }
        ((char *)&frame)[(int)o->f34] = 0;
        operation_8c04b21c((int)(&frame), 224.0f, 253.0f);
    }
}
