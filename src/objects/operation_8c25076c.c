typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int operation_8c02b9e4(void);
extern void call_8c2507a4(int);
extern void call_8c250878(int);
void operation_8c25076c(int a0)
{
    int t1;
    t1 = operation_8c02b9e4();
    if (*(int *)0x8c511120 != (int)t1) {
        *(int *)0x8c511120 = (int)(t1);
        call_8c2507a4(a0);
    }
    call_8c250878(a0);
}
