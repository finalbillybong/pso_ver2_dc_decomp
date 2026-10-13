typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c380ab8(int, int);
extern void call_8c03fadc(int);
extern void call_8c03fb60(int);
void operation_8c03fa60(int a0)
{
    call_8c380ab8(0, 8);
    call_8c380ab8(1, 0xa);
    switch (*(int *)0x8c466de4) {
    case 1:
        call_8c03fadc(a0);
        break;
    case 2:
    case 3:
    case 4:
        call_8c03fb60(a0);
    case 0:
        break;
    }
    call_8c380ab8(0, 8);
    call_8c380ab8(1, 6);
}
