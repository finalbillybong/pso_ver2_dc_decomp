/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0cc064
 * function: operation_8c0cc064
 * language: c
 * reference size: 140 bytes
 * compiled size: 124 bytes (-11.4%)
 * differing lines: 53 of 65 reference instruction lines
 * differing bytes: 133
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -16 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
float *operation_8c0cc064(int a0, short *a1, float *a2)
{
    float *v4;
    float *v3;
    short *v5;
    int v6;
    v3 = (float *)(a0 + 0x8c);
    v4 = (float *)(a0 + 8);
    v5 = (short *)(a0 + 0x110);
    for (v6 = 0; v6 < 0xb; v6++) {
        a1++;
        *a2++ = v4[0];
        *a2++ = v4[1];
        *a2++ = v4[2];
        *a2++ = v3[0];
        *a2++ = v3[1];
        *a2++ = v3[2];
        *a1++ = *v5++;
        *a1++ = *v5++;
        a1 += 3;
        v4 += 3;
        v3 += 3;
    }
    return v4;
}
