typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int operation_8c01c25c(void);
extern void call_8c031c98(int);
extern int current_effect_mode(void);
extern void call_8c031f34(int);
extern void call_8c031790(int);
extern void call_8c0318c0(int);
void operation_8c0316ec(int a0)
{
    int t1;
    int t2;
    int t3;
    if (*(char *)0x8c44be18 == 1) {
        t1 = operation_8c01c25c();
        if (t1 == 0xf) {
            call_8c031c98(a0);
        }
        if (t1 == 0x10) {
            t2 = current_effect_mode();
            switch (t2) {
            case 1:
            case 2:
                call_8c031f34(a0);
                break;
            default:
                call_8c031c98(a0);
                break;
            }
        }
        if (t1 == 0xf) {
            call_8c031790(a0);
        }
        if (t1 == 0x10) {
            t3 = current_effect_mode();
            switch (t3) {
            case 1:
            case 2:
                call_8c0318c0(a0);
                return;
            default:
                call_8c031790(a0);
                return;
            }
        }
    }
}
