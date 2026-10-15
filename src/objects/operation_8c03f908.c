typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x30];
    int f30;
};
extern int call_8c01018c(void *);
int operation_8c03f908(Object *o)
{
    int t1;
    t1 = call_8c01018c((void *)((void *)0x8c319870));
    switch (t1) {
    case -1:
        o->f30 = 0;
        if (*(char *)0x8c466dc2 != 1) {
            goto L_8c03f944;
        }
        if (*(int *)0x8c466de4 != 2) {
            goto L_8c03f944;
        }
        *(char *)0x8c466dc2 = 0;
        break;
    case -2:
        return -1;
    default:
        o->f30 = 1;
        break;
    }
L_8c03f944:;
    return 0;
}
