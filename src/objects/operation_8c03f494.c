typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void operation_8c17b8ac(void);
extern void word_operation_8c1ddaf0(unsigned int);
extern void operation_8c01c1a4(int);
void operation_8c03f494(void)
{
    /* TODO 00000000..00000000
     * 00000000 walker stopped: instruction missing at the range end (data in the listing)
     */
    operation_8c17b8ac();
    word_operation_8c1ddaf0((unsigned int)1);
    operation_8c01c1a4(0xd);
    /* TODO 8c03f494..8c03f4aa
     * 8c03f494 mov.l 0x8c03f4b0,r0
     * 8c03f496 sts.l PR,@-r15
     * 8c03f498 jsr @r0
     * 8c03f49a nop
     * 8c03f49c mov.l 0x8c03f4b4,r0
     * 8c03f49e jsr @r0
     * 8c03f4a0 mov #0x1,r4
     * 8c03f4a2 mov.l 0x8c03f4b8,r0
     * 8c03f4a4 jsr @r0
     * 8c03f4a6 mov #0xd,r4
     * 8c03f4a8 lds.l @r15+,PR
     * 8c03f4aa rts
     */
}
