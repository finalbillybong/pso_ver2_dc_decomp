typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dc6a0 S_g8c4dc6a0;
extern S_g8c4dc6a0 *g_8c4dc6a0;
extern void call_8c03dc40(void *, int);
void operation_8c1a2384(void)
{
    /* TODO 00000000..00000000
     * 00000000 walker stopped: instruction missing at the range end (data in the listing)
     */
    call_8c03dc40(g_8c4dc6a0, 1);
    g_8c4dc6a0 = (S_g8c4dc6a0 *)0;
    /* TODO 8c1a2384..8c1a2398
     * 8c1a2384 mov.l 0x8c1a239c,r0
     * 8c1a2386 sts.l PR,@-r15
     * 8c1a2388 mov.l @r0,r4
     * 8c1a238a mov.l 0x8c1a23a0,r0
     * 8c1a238c jsr @r0
     * 8c1a238e mov #0x1,r5
     * 8c1a2390 mov.l 0x8c1a239c,r1
     * 8c1a2392 mov #0x0,r0
     * 8c1a2394 mov.l r0,@r1
     * 8c1a2396 lds.l @r15+,PR
     * 8c1a2398 rts
     */
}
