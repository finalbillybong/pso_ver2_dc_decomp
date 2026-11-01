/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c102d80
 * function: operation_8c102d80
 * language: c
 * reference size: 184 bytes
 * compiled size: 184 bytes (+0.0%)
 * differing lines: 20 of 82 reference instruction lines
 * differing bytes: 28
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
typedef struct S_L8c4d5958 S_L8c4d5958;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_x39440 S_x39440;
typedef struct S_x39952 S_x39952;
typedef struct S_x89920 S_x89920;
struct Frame {
    float f00;
    char unknown4[0x4];
    float f08;
};
struct S_L8c4d5958 {
    float f00;
    char unknown4[0x4];
    float f08;
};
struct S_x89920 {
    float f00;
};
struct Object {
    float tag;
    char unknown4[0x4];
    float f08;
};
struct S_x39952 {
    float f00;
};
struct S_x39440 {
    float f00;
};
extern int g_8c4d5948;
extern S_L8c4d5958 g_8c4d5958;
extern char g_8c4d5448[];
extern float distance_xz(void *, void *);
int operation_8c102d80(Object *o, int a1, int a2, int a3, short a4)
{
    Frame frame;
    int v6;
    if (g_8c4d5948 > 0x3f) {
        return 0;
    }
    if (((a4 & 1)) == 0) {
        (&frame)->f00 = (&g_8c4d5958)->f00;
        (&frame)->f08 = (&g_8c4d5958)->f08;
        if (distance_xz((void *)o, (void *)(&frame)) > 90000.0f) {
            return 0;
        }
    }
    v6 = (int)(g_8c4d5948 * 0x14);
    ((S_x89920 *)(v6 + g_8c4d5448))->f00 = o->tag;
    ((S_x39952 *)(v6 + (char *)(g_8c4d5448 + 0x4)))->f00 = o->f08;
    ((S_x39440 *)(v6 + (char *)(g_8c4d5448 + 0x8)))->f00 = 1.0f;
    *(int *)((char *)(g_8c4d5448 + 0x10) + (v6)) = a1;
    *(short *)((char *)(g_8c4d5448 + 0xe) + (v6)) = a3;
    *(short *)((char *)(g_8c4d5448 + 0xc) + (v6)) = a2;
    g_8c4d5948 += 1;
    return 1;
}
