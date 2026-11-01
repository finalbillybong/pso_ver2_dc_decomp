/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c16eddc
 * function: quest_op_npc_talk_pl_8c16eddc
 * language: c
 * reference size: 188 bytes
 * compiled size: 188 bytes (+0.0%)
 * differing lines: 76 of 84 reference instruction lines
 * differing bytes: 106
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
struct Frame {
    char unknown0[0xc];
    float f0c;
    float f10;
    float f14;
    char unknown18[0x4];
    int f1c;
    char unknown20[0x4];
    float f24;
    char unknown28[0x8];
    int f30;
    int f34;
    int f38;
};
extern int g_8c4db408;
extern void initialize_resource_record(void *);
extern void spawn_object_0893a8_8c1aa2dc(void *);
void quest_op_npc_talk_pl_8c16eddc(int a0)
{
    Frame frame;
    char *v1;
    initialize_resource_record((void *)(&frame));
    v1 = (char *)g_8c4db408;
    (&frame)->f0c = (float)*(int *)((char *)((char *)v1 + 0x0) + (a0++ << 2));
    (&frame)->f10 = (float)*(int *)((char *)((char *)v1 + 0x0) + (a0++ << 2));
    (&frame)->f14 = (float)*(int *)((char *)((char *)v1 + 0x0) + (a0++ << 2));
    (&frame)->f24 = (float)*(int *)((char *)((char *)v1 + 0x0) + (a0++ << 2));
    (&frame)->f1c = (int)((float)*(int *)((char *)((char *)v1 + 0x0) + (a0++ << 2)) * 65536.0f / 360.0f);
    (&frame)->f30 = (int)(*(int *)((char *)((char *)v1 + 0x0) + (a0++ << 2)));
    (&frame)->f34 = (int)(*(int *)((char *)((char *)v1 + 0x0) + (a0++ << 2)));
    (&frame)->f38 = (int)(*(int *)((char *)((char *)v1 + 0x0) + (a0 << 2)));
    spawn_object_0893a8_8c1aa2dc((void *)(&frame));
}
