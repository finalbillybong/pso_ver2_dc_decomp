typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418a00 S_g8c418a00;
typedef struct S_g8c41c620 S_g8c41c620;
struct S_g8c41c620 {
    char unknown0[0x80];
    unsigned short f80;
};
extern int operation_8c1571f4(void *);
extern void call_8c02fd98(void *, int);
extern void operation_8c016950(void);
void operation_8c01780c(void)
{
    int t1;
    if (*(int *)0x8c41c620 != 0) {
        t1 = operation_8c1571f4((void *)*(S_g8c41c620 **)0x8c41c620);
        if ((((*(S_g8c41c620 **)0x8c41c620)->f80 & 0xffff & 2)) != 0) {
            call_8c02fd98(*(S_g8c418a00 **)0x8c418a00, t1);
            operation_8c016950();
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
