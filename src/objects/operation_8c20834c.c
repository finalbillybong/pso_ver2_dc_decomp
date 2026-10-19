typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be84 S_g8c44be84;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern S_g8c44be84 *g_8c44be84;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int allocate_block(void *, unsigned int);
extern void initialize_color_rise(int, void *, void *);
void operation_8c20834c(void)
{
    int t1;
    /* TODO 00000000..00000000
     * 00000000 walker stopped: instruction missing at the range end (data in the listing)
     */
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0x2c);
    if (t1 != 0) {
        initialize_color_rise(t1, g_8c44be84, (void *)((void *)0x8c208d20));
    }
    /* TODO 8c20834c..8c20836a
     * 8c20834c mov.l 0x8c208370,r0
     * 8c20834e sts.l PR,@-r15
     * 8c208350 mov.l @r0,r4
     * 8c208352 mov.l 0x8c208374,r0
     * 8c208354 jsr @r0
     * 8c208356 mov #0x2c,r5
     * 8c208358 tst r0,r0
     * 8c20835a bt 0x8c208368
     * 8c20835c mov.l 0x8c208378,r1
     * 8c20835e mov r0,r4
     * 8c208360 mov.l 0x8c20837c,r6
     * 8c208362 mov.l 0x8c208380,r0
     * 8c208364 jsr @r0
     * 8c208366 mov.l @r1,r5
     * 8c208368 lds.l @r15+,PR
     * 8c20836a rts
     */
}
