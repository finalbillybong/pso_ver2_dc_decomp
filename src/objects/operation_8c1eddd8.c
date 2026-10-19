typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Object Object;
struct Object {
    char unknown0[0x2];
    unsigned short f02;
};
struct S_c8c021ef8 {
    char unknown0[0x310];
    int f310;
};
extern S_c8c021ef8 *lookup_low_id(int);
extern int call_8c02a6d4(S_c8c021ef8 *);
extern int object_ready(void *);
extern void operation_8c1e8e60(int, int, int);
void operation_8c1eddd8(Object *o)
{
    int v1;
    S_c8c021ef8 *t1;
    int t2;
    int t3;
    /* TODO 00000000..00000000
     * 00000000 walker stopped: instruction missing at the range end (data in the listing)
     */
    t1 = lookup_low_id((int)(o->f02));
    t2 = call_8c02a6d4(t1);
    if (t2 != 0) {
        t3 = object_ready((void *)t1);
        if (t3 != 0) {
            v1 = (int)(((t1->f310 & 0x8000)) != 0);
            if (v1 == 0) {
                operation_8c1e8e60((int)t1, 0xa, 0);
            }
        }
    }
    /* TODO 8c1eddd8..8c1ede1c
     * 8c1eddd8 mov.l r14,@-r15
     * 8c1eddda mov.l r13,@-r15
     * 8c1edddc sts.l PR,@-r15
     * 8c1eddde mov.w @(0x2,r4),r0
     * 8c1edde0 mov.l 0x8c1ede20,r1
     * 8c1edde2 jsr @r1
     * 8c1edde4 extu.w r0,r4
     * 8c1edde6 mov r0,r13
     * 8c1edde8 mov.l 0x8c1ede24,r0
     * 8c1eddea jsr @r0
     * 8c1eddec mov r13,r4
     * 8c1eddee tst r0,r0
     * 8c1eddf0 bt 0x8c1ede18
     * 8c1eddf2 mov.l 0x8c1ede28,r0
     * 8c1eddf4 jsr @r0
     * 8c1eddf6 mov r13,r4
     * 8c1eddf8 tst r0,r0
     * 8c1eddfa bt 0x8c1ede18
     * 8c1eddfc mov.l 0x8c1ede2c,r0
     * 8c1eddfe mov.l @(r0,r13),r1
     * 8c1ede00 mov.l 0x8c1ede30,r0
     * 8c1ede02 and r0,r1
     * 8c1ede04 tst r1,r1
     * 8c1ede06 subc r14,r14
     * 8c1ede08 add #0x1,r14
     * 8c1ede0a tst r14,r14
     * 8c1ede0c bf 0x8c1ede18
     * 8c1ede0e mov.l 0x8c1ede34,r0
     * 8c1ede10 mov r13,r4
     * 8c1ede12 mov #0x0,r6
     * 8c1ede14 jsr @r0
     * 8c1ede16 mov #0xa,r5
     * 8c1ede18 lds.l @r15+,PR
     * 8c1ede1a mov.l @r15+,r13
     * 8c1ede1c rts
     */
}
