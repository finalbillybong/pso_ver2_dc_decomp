typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c41c614 S_g8c41c614;
typedef struct S_g8c41c620 S_g8c41c620;
struct S_g8c41c620 {
    char unknown0[0x80];
    unsigned short f80;
};
extern void request_resource_release(void *);
extern int operation_8c1571f4(void *);
extern void call_8c017334(void);
extern void call_8c017454(void);
extern void operation_8c016950(void);
void operation_8c016070(void)
{
    int t1;
    if (*(int *)0x8c41c620 != 0) {
        if ((((*(S_g8c41c620 **)0x8c41c620)->f80 & 0xffff & 2)) != 0) {
            if (*(int *)0x8c41c614 != 0) {
                request_resource_release((void *)(*(S_g8c41c614 **)0x8c41c614));
                *(int *)0x8c41c614 = 0;
            }
            t1 = operation_8c1571f4((void *)(*(S_g8c41c620 **)0x8c41c620));
            if (t1 != 0) {
                if (t1 == 1) {
                    goto L_8c0160be;
                }
                return;
            }
            call_8c017334();
            return;
L_8c0160be:;
            call_8c017454();
            return;
        }
        if ((((*(S_g8c41c620 **)0x8c41c620)->f80 & 0xffff & 4)) == 0) {
            return;
        }
        operation_8c016950();
        return;
    }
    operation_8c016950();
}
