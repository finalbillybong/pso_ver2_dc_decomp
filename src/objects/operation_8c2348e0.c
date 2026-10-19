typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int allocate_block(void *, unsigned int);
extern void call_8c23490c(int);
void operation_8c2348e0(void)
{
    int t1;
    /* TODO 00000000..00000000
     * 00000000 walker stopped: instruction missing at the range end (data in the listing)
     */
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0x5c);
    if (t1 != 0) {
        call_8c23490c(t1);
    }
    /* TODO 8c2348e0..8c2348fa
     * 8c2348e0 mov.l 0x8c234900,r0
     * 8c2348e2 sts.l PR,@-r15
     * 8c2348e4 mov.l @r0,r4
     * 8c2348e6 mov.l 0x8c234904,r0
     * 8c2348e8 jsr @r0
     * 8c2348ea mov #0x5c,r5
     * 8c2348ec tst r0,r0
     * 8c2348ee bt 0x8c2348f8
     * 8c2348f0 mov r0,r4
     * 8c2348f2 mov.l 0x8c234908,r0
     * 8c2348f4 jsr @r0
     * 8c2348f6 nop
     * 8c2348f8 lds.l @r15+,PR
     * 8c2348fa rts
     */
}
