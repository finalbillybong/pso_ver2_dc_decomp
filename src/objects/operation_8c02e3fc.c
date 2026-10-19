typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
struct Arg1 {
    char unknown0[0x2];
    unsigned short f02;
};
extern void call_8c036c38(void *, int);
void operation_8c02e3fc(int a0, Arg1 *a1)
{
    call_8c036c38((void *)(((char *)a1 + 0x4)), (int)(a1->f02 + -4));
}
