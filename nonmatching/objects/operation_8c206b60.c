/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c206b60
 * function: operation_8c206b60
 * language: c
 * reference size: 224 bytes
 * compiled size: 226 bytes (+0.9%)
 * differing lines: 106 of 112 reference instruction lines
 * differing bytes: 152
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by +2 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Frame {
    char f00;
    char unknown1[0xff];
};

int operation_8c206b60(Object *o, Arg1 *a1, int a2)
{
    Frame frame;
    int v1;
    int v7;
    int v6;
    int v4;
    int v3;
    int v2;
    int v8;
    int v9;
    int v10;
    char *p1;
    char *p0;
    int v11;
    (&frame)->f00 = 0x20;
    v1 = (int)a2;
    v3 = (int)0;
    while ((char)(v2 = *(char *)((char *)((char *)o + 0x0) + (v3))) != 0) {
        if (v1 != 0) {
            v4 = (int)0;
            if ((char)v2 >= 0x41) {
                v4 = (int)0;
                if (0x7a >= (char)v2) {
                    v4 = (int)1;
                }
            }
            if (v4 != 0) {
                v2 = (int)(((char)v2 & 0x5f) + 0x20);
            } else {
                v2 = (int)(char)v2;
            }
            *(char *)((char *)((char *)v3 + 0x0) + ((int)(((char *)(&frame) + 0x1)))) = v2;
        } else {
            *(char *)((char *)((char *)v3 + 0x0) + ((int)(((char *)(&frame) + 0x1)))) = v2;
        }
        v3 = (int)(v3 + 1);
    }
    *(char *)((char *)((char *)v3 + 0x0) + ((int)(((char *)(&frame) + 0x1)))) = 0x20;
    *(char *)((char *)((char *)v3 + 0x0) + ((int)(((char *)(&frame) + 0x2)))) = 0;
    v6 = (int)((int)a1 + 1);
    v7 = (int)0;
    while (*(char *)((char *)a1 + (v8 = v7 << 5)) != 0) {
        p1 = (char *)(v6 + v8);
        p0 = (char *)((int)a1 + v8);
        v9 = (int)0;
        while (((char *)&frame)[v9] != 0) {
            v10 = v9;
            v11 = (int)0;
            while (p0[v11] == ((char *)&frame)[v10]) {
                if (p1[v11] == 0) {
                    return (int)(v7);
                }
                v10 = (int)(v10 + 1);
                v11 = (int)(v11 + 1);
            }
            v9 = (int)(v9 + 1);
        }
        v7 = (int)(v7 + 1);
    }
    return -1;
}
