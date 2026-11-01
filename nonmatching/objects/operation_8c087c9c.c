/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c087c9c
 * function: operation_8c087c9c
 * language: c
 * reference size: 240 bytes
 * compiled size: 248 bytes (+3.3%)
 * differing lines: 134 of 108 reference instruction lines
 * differing bytes: 235
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by +8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4db9e8 S_g8c4db9e8;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
struct Frame {
    char unknown0[0x4];
    unsigned char f04;
    unsigned char f05;
    unsigned char f06;
    char unknown7[0x5];
};
struct Object {
    char unknown0[0xc];
    char f0c;
    char f0d;
    char unknowne[0x1];
    char f0f;
    char f10;
    char unknown11[0x1];
    char f12;
    char f13;
};
struct S_vv1 {
    char unknown0[0x3208];
    int f3208;
};
extern S_g8c4db9e8 *g_8c4db9e8;
extern void call_8c36d3ca(Frame *);
void operation_8c087c9c(Object *o)
{
    Frame frame;
    S_vv1 *v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int ft;
    char *p;
    int h;
    int m;
    int sec;
    v1 = (S_vv1 *)g_8c4db9e8;
    if (v1 != 0) {
        call_8c36d3ca((Frame *)((&frame)));
        v3 = (int)-0x30;
        v2 = (int)((&frame)->f04 * 0x3c);
        v2 = (int)(((&frame)->f05 + v2) * 0x3c);
        ft = (int)((float)((&frame)->f06 + v2) * 30.0f);
        p = (char *)o + 0xc;
        h = (*p + v3) * 0xa;
        p++;
        h = h + (*p - 0x30);
        p = (char *)o + 0xf;
        m = (*p - 0x30) * 0xa;
        p++;
        m = m + (*p - 0x30);
        p = (char *)o + 0x12;
        sec = (*p - 0x30) * 0xa;
        p++;
        sec = sec + (*p - 0x30);
        v4 = (int)((float)((int)((float)((h * 0x3c + m) * 0x3c + sec) * 30.0f) - ft) + 108000.0f);
        while (!(v4 >= 0)) {
            v5 = (int)(int)((float)v4 + 2592000.0f);
            v4 = (int)v5;
        }
        v1->f3208 = (int)(v4);
    }
}
