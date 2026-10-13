typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c41c620 S_g8c41c620;
struct S_g8c41c620 {
    char unknown0[0x80];
    unsigned short f80;
};
extern int operation_8c1571f4(void *);
extern void call_8c017010(void);
extern void call_8c0170dc(void);
extern void call_8c017268(void);
extern void operation_8c016950(void);
void operation_8c015ec8(void)
{
    int t1;
    if (*(int *)0x8c41c620 != 0) {
        t1 = operation_8c1571f4((void *)(*(S_g8c41c620 **)0x8c41c620));
        if ((((*(S_g8c41c620 **)0x8c41c620)->f80 & 0xffff & 2)) != 0) {
            if (t1 != 0) {
                if (t1 == 1) {
                    goto L_8c015f0a;
                }
                if (t1 == 2) {
                    goto L_8c015f14;
                }
                return;
            }
            call_8c017010();
            return;
L_8c015f0a:;
            call_8c0170dc();
            return;
L_8c015f14:;
            call_8c017268();
            return;
        }
        if ((((*(S_g8c41c620 **)0x8c41c620)->f80 & 0xffff & 4)) == 0) {
            return;
        }
        operation_8c016950();
        return;
    }
    ((void (*)(S_g8c41c620 *))operation_8c016950)(*(S_g8c41c620 **)0x8c41c620);
}
