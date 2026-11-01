/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c171938
 * function: quest_op_set_cmode_grave_rates_8c171938
 * language: c
 * reference size: 296 bytes
 * compiled size: 308 bytes (+4.1%)
 * differing lines: 112 of 143 reference instruction lines
 * differing bytes: 289
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +12 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
extern int *g_8c4db408;
extern void call_8c2474f8(float *);
void quest_op_set_cmode_grave_rates_8c171938(int a0)
{
    float frame[10];
    int *p;
    int i;
    p = (int *)((char *)g_8c4db408 + ((unsigned char)a0 << 2));
    frame[0] = (float)*p++ / (float)*p++;
    frame[1] = (float)*p++ / (float)*p++;
    frame[2] = (float)*p++ / (float)*p++;
    frame[3] = (float)*p++ / (float)*p++;
    frame[4] = (float)*p++ / (float)*p++;
    frame[5] = (float)*p++ / (float)*p++;
    frame[6] = (float)*p++ / (float)*p++;
    frame[7] = (float)*p++ / (float)*p++;
    frame[8] = (float)*p++ / (float)*p++;
    frame[9] = (float)*p++ / (float)*p++;
    call_8c2474f8(frame);
}
