typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c0552bc(int, int);
extern void call_8c0556f8(int, int);
extern void call_8c055a64(int, int);
extern void call_8c05605c(int, int);
extern void call_8c05659c(int, int);
extern void call_8c056e28(int, int);
extern void call_8c05716c(int, int);
extern void call_8c056b44(int, int);
extern void call_8c057048(int, int);
extern void operation_8c057438(void *, int);
void operation_8c054f50(int a0, int a1, int a2)
{
    switch (a1) {
    case 0:
        call_8c0552bc(a0, a2);
        return;
    case 1:
        call_8c0556f8(a0, a2);
        return;
    case 2:
        call_8c055a64(a0, a2);
        return;
    case 3:
        call_8c05605c(a0, a2);
        return;
    case 4:
        call_8c05659c(a0, a2);
        return;
    case 6:
        call_8c056e28(a0, a2);
        return;
    case 8:
        call_8c05716c(a0, a2);
        return;
    case 5:
        call_8c056b44(a0, a2);
        return;
    case 7:
        call_8c057048(a0, a2);
        return;
    case 9:
        operation_8c057438((void *)a0, a2);
        return;
    }
}
