/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0874a4
 * function: operation_8c0874a4
 * language: c
 * reference size: 372 bytes
 * compiled size: 372 bytes (+0.0%)
 * differing lines: 154 of 157 reference instruction lines
 * differing bytes: 195
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c467184 S_g8c467184;
typedef struct S_x70864 S_x70864;
struct S_x70864 {
    float f00;
};
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
};
extern S_g8c467184 *g_8c467184;
extern int g_8c469d20;
extern void restore_child_blend(void);
extern void sq_select_8c38aeb4(int);
extern void call_8c3827d8(void *);
extern void sq_header_8c38af22(int, int);
extern int call_8c18e8a0(int, int);
extern void sq_quad_8c38b09e(Frame *, float);
extern int call_8c18e768(int, int);
extern void sq_flush_8c38af12(void);
void operation_8c0874a4(int a0, int a1, int a2, float f0, float f1, float f2)
{
    Frame frame;
    int v6;
    int v3;
    int v1;
    char *v7;
    char *q;
    float v8;
    float v9;
    int t2;
    int t1;
    int v2;
    restore_child_blend();
    sq_select_8c38aeb4(1);
    call_8c3827d8(g_8c467184);
    sq_header_8c38af22(0, a0);
    v2 = (int)-0x100;
    v1 = (int)(unsigned short)a2;
    v6 = (int)0;
    v3 = (int)-0x20;
    while (v1 > v6) {
        q = (char *)g_8c469d20;
        v7 = q;
        t1 = call_8c18e8a0((int)((short)a1), 0xa);
        v8 = (float)((S_x70864 *)(q + v2 + ((unsigned char)(t1 + 0x30) << 3)))->f00;
        v9 = (float)(f0 - (float)(int)v8);
        (&frame)->f00 = v9;
        (&frame)->f04 = f1;
        (&frame)->f04 += *(float *)((char *)((char *)v7 + 0x4) + ((unsigned char)(t1 + 0x30) + v3 << 3));
        (&frame)->f08 = (&frame)->f00 + *(float *)((char *)((char *)v7 + 0x0) + ((unsigned char)(t1 + 0x30) + v3 << 3));
        (&frame)->f0c = (&frame)->f04 + 15.0f;
        (&frame)->f10 = (float)(((unsigned char)(t1 + 0x30) & 0xf) << 4) / 256.0f;
        (&frame)->f14 = (float)((unsigned char)(t1 + 0x30) & 0xf0) / 256.0f;
        (&frame)->f18 = ((float)(((unsigned char)(t1 + 0x30) & 0xf) << 4) + *(float *)((char *)((char *)v7 + 0x0) + ((unsigned char)(t1 + 0x30) + v3 << 3))) / 256.0f;
        (&frame)->f1c = ((float)((unsigned char)(t1 + 0x30) & 0xf0) + 15.0f) / 256.0f;
        sq_quad_8c38b09e((Frame *)((&frame)), f2);
        t2 = call_8c18e768((int)((short)a1), 0xa);
        f0 = (float)v9;
        a1 = (int)t2;
        v6 = (int)(v6 + 1);
    }
    sq_flush_8c38af12();
}
