typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c1ef868(void);
extern void call_8c1ef86c(void);
extern void call_8c1ef870(void);
extern void call_8c1ef968(void);
extern void call_8c1efa50(void);
extern void call_8c1efb0c(void);
extern void call_8c1efbf4(void);
extern void operation_8c1efc00(void *);
void operation_8c1ef7b8(int a0, int a1)
{
    switch ((short)a1) {
    case 7:
        call_8c1ef868();
        return;
    case 2:
        call_8c1ef86c();
        return;
    case 3:
        call_8c1ef870();
        return;
    case 8:
        call_8c1ef968();
        return;
    case 5:
        call_8c1efa50();
        return;
    case 0:
        call_8c1efb0c();
        return;
    case 1:
        call_8c1efbf4();
        return;
    case 6:
        operation_8c1efc00((void *)a0);
        return;
    case 4:
        break;
    }
}
