typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c1e90c8(void);
extern void call_8c1e90d4(void);
extern void call_8c1e9178(void);
extern void call_8c1e917c(void);
extern void call_8c1e9180(void);
extern void operation_8c1e9528(void *);
extern void operation_8c1e9568(int);
extern void call_8c1e958c(void);
void operation_8c1e9018(int a0, int a1)
{
    switch ((short)a1) {
    case 7:
        call_8c1e90c8();
        return;
    case 2:
        call_8c1e90d4();
        return;
    case 3:
        call_8c1e9178();
        return;
    case 8:
        call_8c1e917c();
        return;
    case 5:
        call_8c1e9180();
        return;
    case 0:
        operation_8c1e9528((void *)a0);
        return;
    case 1:
        operation_8c1e9568(a0);
        return;
    case 6:
        call_8c1e958c();
        return;
    case 4:
        break;
    }
}
