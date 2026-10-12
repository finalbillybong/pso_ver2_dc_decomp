typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c38ae68(void);
extern void call_8c37b5c4(int);
extern void call_8c21ada4(int);
extern void call_8c38ad10(void);
void operation_8c21ad68(int a0)
{
    *(int *)0x8c505940 = 0;
    call_8c38ae68();
    call_8c37b5c4(0);
    call_8c21ada4(a0);
    call_8c38ad10();
}
