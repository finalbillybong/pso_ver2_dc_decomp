typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void handle_actor_idle_event_8c0d22bc(void *, int);
extern void call_8c0d22e4(int, int);
extern void operation_8c0d23dc(void *, int);
extern void call_8c0d262c(int, int);
extern void operation_8c0d2770(void *, int);
extern void call_8c0d28f4(int, int);
extern void call_8c0d2d3c(int, int);
extern void call_8c0d3220(int, int);
extern void call_8c0d36b0(int, int);
extern void call_8c0d3880(int, int);
extern void call_8c0d39a0(int, int);
extern void call_8c0d3ab4(int, int);
void operation_8c0d21c8(int a0, int a1, int a2)
{
    switch (a1) {
    case 0:
        handle_actor_idle_event_8c0d22bc((void *)a0, a2);
        return;
    case 1:
        call_8c0d22e4(a0, a2);
        return;
    case 3:
        operation_8c0d23dc((void *)a0, a2);
        return;
    case 2:
        call_8c0d262c(a0, a2);
        return;
    case 8:
        operation_8c0d2770((void *)a0, a2);
        return;
    case 4:
        call_8c0d28f4(a0, a2);
        return;
    case 5:
        call_8c0d2d3c(a0, a2);
        return;
    case 6:
        call_8c0d3220(a0, a2);
        return;
    case 7:
        call_8c0d36b0(a0, a2);
        return;
    case 9:
        call_8c0d3880(a0, a2);
        return;
    case 10:
        call_8c0d39a0(a0, a2);
        return;
    case 11:
        call_8c0d3ab4(a0, a2);
        return;
    }
}
