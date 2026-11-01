/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1c9a74
 * function: operation_8c1c9a74
 * language: c
 * reference size: 316 bytes
 * compiled size: 316 bytes (+0.0%)
 * differing lines: 120 of 144 reference instruction lines
 * differing bytes: 96
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation; review found and fixed behaviour defects of the generator draft; not
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
typedef struct S_vv9 S_vv9;
struct Object {
    char tag;
    char f01;
    char f02;
    char f03;
    char f04;
    char f05;
    char unknown6[0x6];
    int f0c;
    int f10;
};
struct Frame {
    char f00;
    char unknown1[0xb];
};
struct S_vv9 {
    char f00;
    char f01;
    char f02;
};
extern int rand(void);
extern void memset_8c12b880(Frame *, int, int);
extern void strncpy_8c12b154(void *, int, int);
extern int operation_8c1c9a38(int, char);
void operation_8c1c9a74(Object *o, int a1, int a2)
{
    Frame frame;
    int v1;
    char t3;
    char t2;
    int v2;
    int t1;
    S_vv9 *v9;
    int v8;
    char t4;
    int w;
    o->tag = 0;
    o->f01 = 0;
    o->f02 = 0;
    o->f03 = 0;
    o->f04 = 0;
    o->f05 = 0;
    o->f10 = 0;
    v1 = (int)0;
    while (v1 != 3) {
        *(char *)((char *)((char *)o + 0x6) + (v1 << 1)) = 0;
        *(char *)((char *)((char *)o + 0x7) + (v1 << 1)) = 0;
        v1 = (int)(v1 + 1);
    }
    o->f0c = -1;
    if ((unsigned int)0x1a > (unsigned int)(unsigned char)a2 && a1 != 0) {
        o->tag = 0;
        if ((unsigned char)a2 == 0) {
            v2 = (int)1;
            t1 = rand();
            o->f01 = (int)((float)t1 / 32768.0f * 25.0f);
        } else {
            o->f01 = a2 + -1;
            v2 = (int)0;
        }
        o->f01 += 0x70;
        o->f02 = 0;
        memset_8c12b880((Frame *)((&frame)), 0, 0xa);
        (&frame)->f00 = v2 + 0x41;
        strncpy_8c12b154((void *)(((char *)(&frame) + 0x1)), a1, 8);
        if ((&frame) != 0) {
            v8 = (int)0;
            while (v8 != 3) {
                v9 = (S_vv9 *)(v8 * 3 + (int)(&frame));
                t2 = operation_8c1c9a38((int)o, v9->f00);
                t3 = operation_8c1c9a38((int)o, v9->f01);
                t4 = operation_8c1c9a38((int)o, v9->f02);
                w = (unsigned short)(t2 << 0xa | t3 << 5 | t4);
                *(char *)((char *)((char *)o + 0x6) + (v8 << 1)) = w >> 8 | 0x80;
                *(char *)((char *)((char *)o + 0x7) + (v8 << 1)) = w & 0xff;
                v8 = (int)(v8 + 1);
            }
        }
    }
}
