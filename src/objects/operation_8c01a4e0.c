typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c41c614 S_g8c41c614;
extern S_g8c41c614 *g_8c41c614;
extern void request_resource_release(void *);
extern void clear_group_flag_08(void *);
void operation_8c01a4e0(void)
{
    /* TODO 00000000..00000000
     * 00000000 walker stopped: instruction missing at the range end (data in the listing)
     */
    if (g_8c41c614 != 0) {
        request_resource_release(g_8c41c614);
        g_8c41c614 = (S_g8c41c614 *)0;
    }
    clear_group_flag_08((void *)((void *)0x8c44bec8));
    /* TODO 8c01a4e0..8c01a500
     * 8c01a4e0 mov.l 0x8c01a504,r0
     * 8c01a4e2 sts.l PR,@-r15
     * 8c01a4e4 mov.l @r0,r4
     * 8c01a4e6 tst r4,r4
     * 8c01a4e8 bt 0x8c01a4f6
     * 8c01a4ea mov.l 0x8c01a508,r0
     * 8c01a4ec jsr @r0
     * 8c01a4ee nop
     * 8c01a4f0 mov.l 0x8c01a504,r1
     * 8c01a4f2 mov #0x0,r0
     * 8c01a4f4 mov.l r0,@r1
     * 8c01a4f6 mov.l 0x8c01a50c,r4
     * 8c01a4f8 mov.l 0x8c01a510,r0
     * 8c01a4fa jsr @r0
     * 8c01a4fc nop
     * 8c01a4fe lds.l @r15+,PR
     * 8c01a500 rts
     */
}
