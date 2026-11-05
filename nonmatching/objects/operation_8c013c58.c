/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c013c58
 * function: operation_8c013c58
 * language: c
 * reference size: 540 bytes
 * compiled size: 540 bytes (+0.0%)
 * differing lines: 16 of 247 reference instruction lines
 * differing bytes: 16
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   instruction scheduling, instruction or operand order, constant loading; review found and fixed
 *   behaviour defects of the generator draft; not proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2; offline start: Pioneer 2 office
 *   walk and NPC dialogue (emulator A/B: RAM, trace and sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c4189dc;
extern int g_8c4189e0;
extern char g_8c418280[];
extern char g_8c4182fc[];
extern char g_8c41887c[];
extern void call_8c3a9cb4(float, float, float);
extern void call_8c3a9cfa(float, float, float);
extern void call_8c3a9cec(float, float);
extern int get_current_area_8c032b10(void);
extern void call_8c3a8b38(float, float, float);
extern void call_8c3a8b7e(float, float, float);
void operation_8c013c58(int a0)
{
    int v7;
    int v35;
    float y;
    int v2;
    int v6;
    int v36;
    int v37;
    int v1;
    int v32;
    int v29;
    unsigned short *v30;
    v1 = (int)g_8c4189e0;
    v6 = (int)0;
    v2 = (int)0x2c;
    while (v1 > v6) {
        v7 = (int)(v6 * v2);
        if (*(unsigned short *)(a0 + 0x20) == *(int *)((char *)(g_8c41887c + 0x28) + v7)) {
            v36 = *(int *)((char *)(g_8c41887c + 0x24) + v7);
            v37 = v36 & 1;
            if (v37 != 0 && (v36 & 2) != 0) {
                call_8c3a9cb4(*(float *)(v7 + g_8c41887c), *(float *)((char *)(g_8c41887c + 4) + v7), *(float *)((char *)(g_8c41887c + 8) + v7));
                y = *(float *)(v7 + (char *)(g_8c41887c + 0x14));
                call_8c3a9cfa(*(float *)(v7 + (char *)(g_8c41887c + 0x10)), y, *(float *)(v7 + (char *)(g_8c41887c + 0x18)));
                call_8c3a9cec(*(float *)((char *)(g_8c41887c + 0x1c) + v7), *(float *)((char *)(g_8c41887c + 0x20) + v7));
                return;
            }
            if (v37 != 0) {
                call_8c3a9cec(*(float *)((char *)(g_8c41887c + 0x1c) + v7), *(float *)((char *)(g_8c41887c + 0x20) + v7));
                return;
            }
            if (get_current_area_8c032b10() == 0xf) {
                call_8c3a8b38(*(float *)(v7 + g_8c41887c), *(float *)((char *)(g_8c41887c + 0x4) + v7), *(float *)((char *)(g_8c41887c + 0x8) + v7));
                y = *(float *)(v7 + (char *)(g_8c41887c + 0x14));
                call_8c3a8b7e(*(float *)(v7 + (char *)(g_8c41887c + 0x10)), y, *(float *)(v7 + (char *)(g_8c41887c + 0x18)));
            } else {
                call_8c3a9cb4(*(float *)(v7 + g_8c41887c), *(float *)((char *)(g_8c41887c + 0x4) + v7), *(float *)((char *)(g_8c41887c + 0x8) + v7));
                y = *(float *)(v7 + (char *)(g_8c41887c + 0x14));
                call_8c3a9cfa(*(float *)(v7 + (char *)(g_8c41887c + 0x10)), y, *(float *)(v7 + (char *)(g_8c41887c + 0x18)));
            }
            return;
        }
        v6 = (int)(v6 + 1);
    }
    v29 = (int)g_8c4189dc;
    v30 = (unsigned short *)(a0 + 0x20);
    v32 = (int)0;
    while (v29 > v32) {
        v35 = (int)(v32 * 0x2c);
        if (*v30 == *(int *)((char *)(g_8c4182fc + 0x28) + v35)) {
            call_8c3a9cb4(*(float *)(v35 + g_8c4182fc), *(float *)((char *)(g_8c4182fc + 4) + v35), *(float *)((char *)(g_8c4182fc + 8) + v35));
            y = *(float *)(v35 + (char *)(g_8c4182fc + 0x14));
            call_8c3a9cfa(*(float *)(v35 + (char *)(g_8c4182fc + 0x10)), y, *(float *)(v35 + (char *)(g_8c4182fc + 0x18)));
            return;
        }
        v32 = (int)(v32 + 1);
    }
    call_8c3a9cb4(*(float *)(g_8c418280 + 0xc), *(float *)(g_8c418280 + 0x10), *(float *)(g_8c418280 + 0x14));
    call_8c3a9cfa(*(float *)(g_8c418280 + 0x28), *(float *)(g_8c418280 + 0x2c), *(float *)(g_8c418280 + 0x30));
    call_8c3a9cec(*(float *)(g_8c418280 + 0x1c), *(float *)(g_8c418280 + 0x20));
}
