typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fe40 S_g8c46fe40;
extern void call_8c0de560(void *, int, int);
int operation_8c0de534(int a0, int a1)
{
    if (*(int *)0x8c46fe40 == 0) {
        return 0;
    }
    call_8c0de560(*(S_g8c46fe40 **)0x8c46fe40, a0, a1);
    return *(int *)0x8c46fe40;
}
