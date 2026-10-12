typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fe40 S_g8c46fe40;
extern void call_8c0de4c4(void *, int);
void operation_8c0de430(void)
{
    if (*(int *)0x8c46fe40 != 0) {
        call_8c0de4c4(*(S_g8c46fe40 **)0x8c46fe40, 1);
        *(int *)0x8c46fe40 = 0;
    }
}
