/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c171a60
 * function: quest_op_set_chat_callback_8c171a60
 * language: c
 * reference size: 148 bytes
 * compiled size: 148 bytes (+0.0%)
 * differing lines: 2 of 66 reference instruction lines
 * differing bytes: 4
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
    char unknown18[0xc];
    float f24;
    char unknown28[0x8];
    int f30;
    char unknown34[0x8];
};
extern int g_8c4db408;
extern void initialize_resource_record(void *);
extern int TOChatSensor_create_8c25d8b8(int);
extern void operation_8c25dd0c(void *, int);
void quest_op_set_chat_callback_8c171a60(unsigned char a0, int a1)
{
    Frame frame;
    char *v1;
    int t1;
    initialize_resource_record((void *)(&frame));
    v1 = (char *)g_8c4db408;
    (&frame)->f0c = (float)*(int *)((char *)((char *)v1 + 0x0) + (a0++ << 2));
    (&frame)->f10 = (float)*(int *)((char *)((char *)v1 + 0x0) + (a0++ << 2));
    (&frame)->f14 = (float)*(int *)((char *)((char *)v1 + 0x0) + (a0++ << 2));
    (&frame)->f24 = (float)*(int *)((char *)((char *)v1 + 0x0) + (a0++ << 2));
    (&frame)->f30 = (int)(*(int *)((char *)((char *)v1 + 0x0) + (a0 << 2)));
    t1 = TOChatSensor_create_8c25d8b8((int)(&frame));
    if (t1 != 0) {
        operation_8c25dd0c((void *)t1, a1);
    }
}
