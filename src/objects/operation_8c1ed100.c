typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c1ed1b0(void);
extern void call_8c1ed1bc(void);
extern void call_8c1ed1c0(void);
extern void call_8c1ed238(void);
extern void call_8c1ed284(void);
extern void call_8c1ed644(void);
extern void call_8c1ed7c0(void);
extern void operation_8c1ed9b0(void *);
void operation_8c1ed100(int a0, int a1)
{
    switch ((short)a1) {
    case 7:
        call_8c1ed1b0();
        return;
    case 2:
        call_8c1ed1bc();
        return;
    case 3:
        call_8c1ed1c0();
        return;
    case 8:
        call_8c1ed238();
        return;
    case 5:
        call_8c1ed284();
        return;
    case 0:
        call_8c1ed644();
        return;
    case 1:
        call_8c1ed7c0();
        return;
    case 6:
        operation_8c1ed9b0((void *)a0);
        return;
    case 4:
        break;
    }
}
