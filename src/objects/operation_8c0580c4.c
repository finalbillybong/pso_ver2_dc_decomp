typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c0585d8(int, int);
extern void call_8c058390(int, int);
extern void operation_8c0588a4(void *, int);
extern void call_8c058960(int, int);
extern void call_8c058b1c(int, int);
extern void operation_8c058cec(void *, int);
extern void call_8c058dac(int, int);
extern void call_8c058f84(int, int);
extern void call_8c0590c4(int, int);
extern void handle_event_8c059348(void *, int);
void operation_8c0580c4(int a0, int a1, int a2)
{
    switch (a1) {
    case 1:
        call_8c0585d8(a0, a2);
        return;
    case 0:
        call_8c058390(a0, a2);
        return;
    case 2:
        operation_8c0588a4((void *)a0, a2);
        return;
    case 3:
        call_8c058960(a0, a2);
        return;
    case 4:
        call_8c058b1c(a0, a2);
        return;
    case 5:
        operation_8c058cec((void *)a0, a2);
        return;
    case 6:
        call_8c058dac(a0, a2);
        return;
    case 7:
        call_8c058f84(a0, a2);
        return;
    case 8:
        call_8c0590c4(a0, a2);
        return;
    case 9:
        handle_event_8c059348((void *)a0, a2);
        return;
    }
}
