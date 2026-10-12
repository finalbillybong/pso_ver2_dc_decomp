typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c3827d8(void *);
extern void call_8c38aeb4(int);
extern void call_8c38af22(int, int);
extern void call_8c38b09e(int, float);
extern void call_8c38af12(void);
void operation_8c2264d0(int a0)
{
    call_8c3827d8((void *)0x8c33760c);
    call_8c38aeb4(1);
    call_8c38af22(2, -1);
    call_8c38b09e(a0 + 0x1950, 0.803f);
    call_8c38af12();
}
