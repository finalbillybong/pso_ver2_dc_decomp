/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c171fac
 * function: quest_op_set_symbol_chat_collision_8c171fac
 * language: c
 * reference size: 244 bytes
 * compiled size: 248 bytes (+1.6%)
 * differing lines: 108 of 109 reference instruction lines
 * differing bytes: 152
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c513304 S_L8c513304;
typedef struct Frame Frame;
struct Frame {
    char unknown0[0xc];
    float f0c;
    float f10;
    float f14;
    char unknown18[0xc];
    float f24;
    char unknown28[0x8];
    int f30;
    int f34;
    int f38;
};
struct S_L8c513304 {
    int f00;
    int f04;
    int f08;
};
extern int g_8c4db400;
extern int g_8c4db404;
extern int g_8c4db408;
extern S_L8c513304 g_8c513304;
extern void initialize_resource_record(void *);
extern void TOSymbolchatColli_ctor_8c25638c(Frame *);
void quest_op_set_symbol_chat_collision_8c171fac(int a0)
{
    Frame frame;
    char *v1;
    int v4;
    char *v5;
    char *v3;
    int v2;
    initialize_resource_record((void *)(&frame));
    v1 = (char *)g_8c4db408;
    (&frame)->f0c = (float)*(int *)((char *)((char *)v1 + 0x0) + ((unsigned char)a0++ << 2));
    (&frame)->f10 = (float)*(int *)((char *)((char *)v1 + 0x0) + ((unsigned char)a0++ << 2));
    (&frame)->f14 = (float)*(int *)((char *)((char *)v1 + 0x0) + ((unsigned char)a0++ << 2));
    (&frame)->f24 = (float)*(int *)((char *)((char *)v1 + 0x0) + ((unsigned char)a0++ << 2));
    (&frame)->f30 = (int)(*(int *)((char *)((char *)v1 + 0x0) + ((unsigned char)a0++ << 2)));
    (&frame)->f34 = (int)(*(int *)((char *)((char *)v1 + 0x0) + ((unsigned char)a0++ << 2)));
    (&frame)->f38 = (int)(*(int *)((char *)((char *)v1 + 0x0) + ((unsigned char)a0++ << 2)));
    v4 = (int)g_8c4db400;
    v5 = (char *)g_8c4db404;
    (&g_8c513304)->f00 = *(int *)(v5 + ((unsigned short)*(int *)(v1 + ((unsigned char)a0++ << 2)) << 2)) + v4;
    (&g_8c513304)->f04 = *(int *)(v5 + ((unsigned short)*(int *)(v1 + ((unsigned char)a0++ << 2)) << 2)) + v4;
    (&g_8c513304)->f08 = *(int *)(v5 + ((unsigned short)*(int *)(v1 + ((unsigned char)a0++ << 2)) << 2)) + v4;
    TOSymbolchatColli_ctor_8c25638c((Frame *)((&frame)));
    (&g_8c513304)->f00 = 0;
    (&g_8c513304)->f04 = 0;
    (&g_8c513304)->f08 = 0;
}
