typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c1ec250(void);
extern void call_8c1ec25c(void);
extern void operation_8c1ec260(void *);
extern void operation_8c1ec298(void *);
extern void call_8c1ec2d0(void);
extern void call_8c1ec62c(void);
extern void call_8c1ec7d0(void);
extern void call_8c1ec9b0(void);
void operation_8c1ec1a0(int a0, int a1)
{
    switch ((short)a1) {
    case 7:
        call_8c1ec250();
        return;
    case 2:
        call_8c1ec25c();
        return;
    case 3:
        operation_8c1ec260((void *)a0);
        return;
    case 8:
        operation_8c1ec298((void *)a0);
        return;
    case 5:
        call_8c1ec2d0();
        return;
    case 0:
        call_8c1ec62c();
        return;
    case 1:
        call_8c1ec7d0();
        return;
    case 6:
        call_8c1ec9b0();
        return;
    case 4:
        break;
    }
}
