typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
struct S_c8c122700 {
    int f00;
    char unknown4[0x14];
    void *f18;
    char unknown1c[0x2];
    short f1e;
};
extern int g_8c306e18;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_c8c122700 *allocate_block(void *, unsigned int);
extern void initialize_position_controller(void *, void *);
void operation_8c0d0268(void)
{
    S_c8c122700 *t1;
    /* TODO 00000000..00000000
     * 00000000 walker stopped: instruction missing at the range end (data in the listing)
     */
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0x3c);
    if (t1 != 0) {
        initialize_position_controller((void *)t1, g_8c44be98);
        t1->f18 = (void *)0x8c266ec4;
        t1->f00 = (int)(g_8c306e18);
        t1->f1e = 0x3c;
    }
    /* TODO 8c0d0268..8c0d0296
     * 8c0d0268 mov.l r14,@-r15
     * 8c0d026a mov.l 0x8c0d029c,r0
     * 8c0d026c sts.l PR,@-r15
     * 8c0d026e mov.l @r0,r4
     * 8c0d0270 mov.l 0x8c0d02a0,r0
     * 8c0d0272 jsr @r0
     * 8c0d0274 mov #0x3c,r5
     * 8c0d0276 mov r0,r14
     * 8c0d0278 tst r14,r14
     * 8c0d027a bt 0x8c0d0294
     * 8c0d027c mov.l 0x8c0d02a4,r0
     * 8c0d027e mov.l @r0,r5
     * 8c0d0280 mov.l 0x8c0d02a8,r0
     * 8c0d0282 jsr @r0
     * 8c0d0284 mov r14,r4
     * 8c0d0286 mov.l 0x8c0d02ac,r0
     * 8c0d0288 mov.l r0,@(0x18,r14)
     * 8c0d028a mov.l 0x8c0d02b0,r0
     * 8c0d028c mov.l @r0,r1
     * 8c0d028e mov.l r1,@r14
     * 8c0d0290 mov #0x3c,r0
     * 8c0d0292 mov.w r0,@(0x1e,r14)
     * 8c0d0294 lds.l @r15+,PR
     * 8c0d0296 rts
     */
}
