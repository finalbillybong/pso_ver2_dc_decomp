/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c207378
 * function: operation_8c207378
 * language: c
 * reference size: 248 bytes
 * compiled size: 248 bytes (+0.0%)
 * differing lines: 2 of 117 reference instruction lines
 * differing bytes: 4
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   first-16-call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c2e14f0 S_L8c2e14f0;
typedef struct S_L8c2e14f3 S_L8c2e14f3;
typedef struct Frame Frame;
typedef struct Object Object;
struct Object {
    char unknown0[0xc];
    unsigned char f0c;
    unsigned char f0d;
};
struct S_L8c2e14f3 {
    unsigned char f00;
    unsigned char f01;
    unsigned char f02;
};
struct S_L8c2e14f0 {
    unsigned char f00;
    unsigned char f01;
    unsigned char f02;
};
struct Frame {
    char unknown0[0x8];
};
extern S_L8c2e14f0 g_8c2e14f0;
extern S_L8c2e14f3 g_8c2e14f3;
extern void memset_8c12b880(Frame *, int, int);
int operation_8c207378(Object *o, int a1)
{
    Frame frame;
    int v1;
    int v2;
    int v4;
    int v5;
    if (a1 != 0) {
        if (a1 == 1) {
            goto L_8c2073b4;
        }
        if (a1 == 2) {
            goto L_8c2073da;
        }
    } else {
        if (((o->f0c & (&g_8c2e14f3)->f00)) != 0) {
            return o->f0d & (&g_8c2e14f0)->f00;
L_8c2073b4:;
            if (((o->f0c & (&g_8c2e14f3)->f01)) != 0) {
                return (o->f0d & (&g_8c2e14f0)->f01) >> 1 >> 1 >> 1;
L_8c2073da:;
                if (((o->f0c & (&g_8c2e14f3)->f02)) != 0) {
                    memset_8c12b880((Frame *)((&frame)), 0, 6);
                    *(char *)((char *)((char *)(&frame) + 0x0) + ((unsigned char)(o->f0d & (&g_8c2e14f0)->f00))) = 1;
                    v5 = (o->f0d & (&g_8c2e14f0)->f01) >> 1 >> 1 >> 1;
                    *(char *)((char *)((char *)(&frame) + 0x0) + ((unsigned char)v5)) = 1;
                    v1 = (int)0;
                    v2 = (int)((o->f0d & (&g_8c2e14f0)->f02) >> 1 >> 1 >> 1 >> 1 >> 1 >> 1);
                    while (v1 != 6) {
                        v4 = (int)v2;
                        if (*(unsigned char *)((char *)((char *)v1 + 0x0) + ((int)((&frame)))) != 1) {
                            if ((unsigned char)v2 == 0) {
                                return (int)(v1);
                            }
                            v4 = (int)(v2 + -1);
                        }
                        v2 = (int)v4;
                        v1 = (int)(v1 + 1);
                    }
                }
            }
        }
    }
    return -1;
}
