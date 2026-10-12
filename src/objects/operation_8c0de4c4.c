typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c011ed8(int);
int operation_8c0de4c4(int a0, int a1)
{
    if (a0 != 0) {
        if (*(int *)0x8c46fe40 == a0) {
            *(int *)0x8c46fe40 = 0;
        }
        if ((short)a1 > 0) {
            call_8c011ed8(a0);
        }
    }
    return a0;
}
