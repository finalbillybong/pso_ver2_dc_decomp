typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c1ee004(void);
extern void call_8c1ee010(void);
extern void operation_8c1ee014(void *);
extern void call_8c1ee03c(void);
extern void call_8c1ee040(void);
extern void operation_8c1ee0f8(void *);
extern void call_8c1ee154(void);
extern void call_8c1ee160(void);
void operation_8c1edf54(int a0, int a1)
{
    switch ((short)a1) {
    case 7:
        call_8c1ee004();
        return;
    case 2:
        call_8c1ee010();
        return;
    case 3:
        operation_8c1ee014((void *)a0);
        return;
    case 8:
        call_8c1ee03c();
        return;
    case 5:
        call_8c1ee040();
        return;
    case 0:
        operation_8c1ee0f8((void *)a0);
        return;
    case 1:
        call_8c1ee154();
        return;
    case 6:
        call_8c1ee160();
        return;
    case 4:
        break;
    }
}
