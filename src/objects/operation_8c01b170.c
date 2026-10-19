typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c41bce4;
extern int g_8c4d8288;
extern void call_8c12b77c(void *, int, int);
void operation_8c01b170(int a0)
{
    /* TODO 00000000..00000000
     * 00000000 walker stopped: instruction missing at the range end (data in the listing)
     */
    if (g_8c4d8288 == 0 && (unsigned int)1 >= (unsigned int)(g_8c41bce4 + -0xe)) {
        call_8c12b77c((void *)((void *)0x8c4db6e0), (int)(a0 + 4), 0x200);
    }
    /* TODO 8c01b170..8c01b196
     * 8c01b170 sts.l PR,@-r15
     * 8c01b172 mov.l 0x8c01b19c,r0
     * 8c01b174 mov.l @r0,r0
     * 8c01b176 tst r0,r0
     * 8c01b178 bf 0x8c01b194
     * 8c01b17a mov.l 0x8c01b1a0,r0
     * 8c01b17c mov.l @r0,r1
     * 8c01b17e mov #0x1,r0
     * 8c01b180 add #-0xe,r1
     * 8c01b182 cmp/hs r1,r0
     * 8c01b184 bf 0x8c01b194
     * 8c01b186 add #0x4,r4
     * 8c01b188 mov r4,r5
     * 8c01b18a mov.l 0x8c01b1a4,r6
     * 8c01b18c mov.l 0x8c01b1a8,r4
     * 8c01b18e mov.l 0x8c01b1ac,r0
     * 8c01b190 jsr @r0
     * 8c01b192 nop
     * 8c01b194 lds.l @r15+,PR
     * 8c01b196 rts
     */
}
