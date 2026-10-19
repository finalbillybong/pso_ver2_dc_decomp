typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c1b0848(void);
extern void call_8c14b7f0(void);
extern void call_8c142ffc(void);
void operation_8c141ea8(void)
{
    /* TODO 00000000..00000000
     * 00000000 walker stopped: instruction missing at the range end (data in the listing)
     */
    call_8c1b0848();
    call_8c14b7f0();
    call_8c142ffc();
    /* TODO 8c141ea8..8c141ebe
     * 8c141ea8 mov.l 0x8c141ec4,r0
     * 8c141eaa sts.l PR,@-r15
     * 8c141eac jsr @r0
     * 8c141eae nop
     * 8c141eb0 mov.l 0x8c141ec8,r0
     * 8c141eb2 jsr @r0
     * 8c141eb4 nop
     * 8c141eb6 mov.l 0x8c141ecc,r0
     * 8c141eb8 jsr @r0
     * 8c141eba nop
     * 8c141ebc lds.l @r15+,PR
     * 8c141ebe rts
     */
}
