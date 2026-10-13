typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c1ea608(void);
extern void operation_8c1ea614(int);
extern void call_8c1ea648(void);
extern void call_8c1ea71c(void);
extern void call_8c1ea720(void);
extern void call_8c1ea8c4(void);
extern void call_8c1ea980(void);
extern void reset_slot_8c1ea98c(void *);
void operation_8c1ea558(int a0, int a1)
{
    switch ((short)a1) {
    case 7:
        call_8c1ea608();
        return;
    case 2:
        operation_8c1ea614(a0);
        return;
    case 3:
        call_8c1ea648();
        return;
    case 8:
        call_8c1ea71c();
        return;
    case 5:
        call_8c1ea720();
        return;
    case 0:
        call_8c1ea8c4();
        return;
    case 1:
        call_8c1ea980();
        return;
    case 6:
        reset_slot_8c1ea98c((void *)a0);
        return;
    case 4:
        break;
    }
}
