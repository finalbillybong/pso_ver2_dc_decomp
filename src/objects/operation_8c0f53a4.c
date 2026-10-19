typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void operation_8c0f5484(int, int);
extern void call_8c0f54d4(int, int);
extern void call_8c0f559c(int, int);
extern void operation_8c0f5884(void *, int);
extern void call_8c0f59c4(int, int);
extern void call_8c0f5c54(int, int);
extern void call_8c0f6214(int, int);
extern void operation_8c0f651c(void *, int);
extern void call_8c0f665c(int, int);
extern void call_8c0f6c0c(int, int);
extern void call_8c0f6d2c(int, int);
void operation_8c0f53a4(int a0, int a1, int a2)
{
    switch (a1) {
    case 0:
        operation_8c0f5484(a0, a2);
        return;
    case 1:
        call_8c0f54d4(a0, a2);
        return;
    case 2:
        call_8c0f559c(a0, a2);
        return;
    case 3:
        operation_8c0f5884((void *)a0, a2);
        return;
    case 4:
        call_8c0f59c4(a0, a2);
        return;
    case 5:
        call_8c0f5c54(a0, a2);
        return;
    case 6:
        call_8c0f6214(a0, a2);
        return;
    case 7:
        operation_8c0f651c((void *)a0, a2);
        return;
    case 8:
        call_8c0f665c(a0, a2);
        return;
    case 9:
        call_8c0f6c0c(a0, a2);
        return;
    case 10:
        call_8c0f6d2c(a0, a2);
        return;
    }
}
