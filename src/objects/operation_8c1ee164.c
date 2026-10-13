typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c1ee214(void);
extern void call_8c1ee220(void);
extern void operation_8c1ee224(void *);
extern void call_8c1ee24c(void);
extern void call_8c1ee250(void);
extern void operation_8c1ee2a8(void *);
extern void call_8c1ee304(void);
extern void call_8c1ee310(void);
void operation_8c1ee164(int a0, int a1)
{
    switch ((short)a1) {
    case 7:
        call_8c1ee214();
        return;
    case 2:
        call_8c1ee220();
        return;
    case 3:
        operation_8c1ee224((void *)a0);
        return;
    case 8:
        call_8c1ee24c();
        return;
    case 5:
        call_8c1ee250();
        return;
    case 0:
        operation_8c1ee2a8((void *)a0);
        return;
    case 1:
        call_8c1ee304();
        return;
    case 6:
        call_8c1ee310();
        return;
    case 4:
        break;
    }
}
