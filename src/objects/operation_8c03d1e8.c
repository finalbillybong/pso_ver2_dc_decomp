typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be88 S_g8c44be88;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern S_g8c44be88 *g_8c44be88;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int allocate_block(void *, unsigned int);
extern void call_8c177250(int, void *);
void operation_8c03d1e8(void)
{
    int t1;
    /* TODO 00000000..00000000
     * 00000000 walker stopped: instruction missing at the range end (data in the listing)
     */
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0x54);
    if (t1 != 0) {
        call_8c177250(t1, g_8c44be88);
    }
    /* TODO 8c03d1e8..8c03d204
     * 8c03d1e8 mov.l 0x8c03d208,r0
     * 8c03d1ea sts.l PR,@-r15
     * 8c03d1ec mov.l @r0,r4
     * 8c03d1ee mov.l 0x8c03d20c,r0
     * 8c03d1f0 jsr @r0
     * 8c03d1f2 mov #0x54,r5
     * 8c03d1f4 tst r0,r0
     * 8c03d1f6 bt 0x8c03d202
     * 8c03d1f8 mov.l 0x8c03d210,r1
     * 8c03d1fa mov r0,r4
     * 8c03d1fc mov.l 0x8c03d214,r0
     * 8c03d1fe jsr @r0
     * 8c03d200 mov.l @r1,r5
     * 8c03d202 lds.l @r15+,PR
     * 8c03d204 rts
     */
}
