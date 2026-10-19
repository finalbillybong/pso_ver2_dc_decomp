typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void handle_actor_wait_event(void *, int);
extern void call_8c0c995c(int, int);
extern void call_8c0c9acc(int, int);
extern void call_8c0c9dd8(int, int);
extern void operation_8c0c9ffc(void *, int);
extern void call_8c0ca124(int, int);
extern void call_8c0ca628(int, int);
extern void call_8c0ca9b0(int, int);
extern void call_8c0cadc4(int, int);
extern void call_8c0caeac(int, int);
void operation_8c0c9840(int a0, int a1, int a2)
{
    switch (a1) {
    case 0:
        handle_actor_wait_event((void *)a0, a2);
        return;
    case 1:
        call_8c0c995c(a0, a2);
        return;
    case 2:
        call_8c0c9acc(a0, a2);
        return;
    case 3:
        call_8c0c9dd8(a0, a2);
        return;
    case 4:
        operation_8c0c9ffc((void *)a0, a2);
        return;
    case 5:
        call_8c0ca124(a0, a2);
        return;
    case 6:
        call_8c0ca628(a0, a2);
        return;
    case 7:
        call_8c0ca9b0(a0, a2);
        return;
    case 8:
        call_8c0cadc4(a0, a2);
        return;
    case 9:
        call_8c0caeac(a0, a2);
        return;
    }
}
