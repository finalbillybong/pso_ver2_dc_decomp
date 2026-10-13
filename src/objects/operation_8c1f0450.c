typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c1f0500(void);
extern void call_8c1f0504(void);
extern void operation_8c1f0508(void *);
extern void call_8c1f0530(void);
extern void call_8c1f0534(void);
extern void call_8c1f06bc(void);
extern void call_8c1f0764(void);
extern void operation_8c1f091c(int);
void operation_8c1f0450(int a0, int a1)
{
    switch ((short)a1) {
    case 7:
        call_8c1f0500();
        return;
    case 2:
        call_8c1f0504();
        return;
    case 3:
        operation_8c1f0508((void *)a0);
        return;
    case 8:
        call_8c1f0530();
        return;
    case 5:
        call_8c1f0534();
        return;
    case 0:
        call_8c1f06bc();
        return;
    case 1:
        call_8c1f0764();
        return;
    case 6:
        operation_8c1f091c(a0);
        return;
    case 4:
        break;
    }
}
