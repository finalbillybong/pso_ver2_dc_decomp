typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c41c61c S_g8c41c61c;
struct S_g8c41c61c {
    char unknown0[0x80];
    unsigned short f80;
};
extern int operation_8c1571f4(void *);
extern void call_8c016f50(void);
extern void call_8c017274(void);
extern void operation_8c017524(void);
extern void call_8c0176f8(void);
extern void operation_8c016950(S_g8c41c61c *);
void operation_8c015e2c(void)
{
    int t1;
    if (*(int *)0x8c41c61c != 0) {
        if ((((*(S_g8c41c61c **)0x8c41c61c)->f80 & 0xffff & 2)) != 0) {
            t1 = operation_8c1571f4((void *)(*(S_g8c41c61c **)0x8c41c61c));
            if (t1 != 0) {
                if (t1 == 1) {
                    goto L_8c015e6a;
                }
                if (t1 == 2) {
                    goto L_8c015e74;
                }
                if (t1 == 3) {
                    goto L_8c015e7e;
                }
                return;
            }
            call_8c016f50();
            return;
L_8c015e6a:;
            call_8c017274();
            return;
L_8c015e74:;
            operation_8c017524();
            return;
L_8c015e7e:;
            call_8c0176f8();
            return;
        }
        if ((((*(S_g8c41c61c **)0x8c41c61c)->f80 & 0xffff & 4)) == 0) {
            return;
        }
        operation_8c016950((S_g8c41c61c *)(*(S_g8c41c61c **)0x8c41c61c));
        return;
    }
    operation_8c016950((S_g8c41c61c *)(*(S_g8c41c61c **)0x8c41c61c));
}
