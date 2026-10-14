typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c5062a0 S_g8c5062a0;
extern void call_8c011ec0(void *);
extern void call_8c37d534(void *);
void operation_8c22ab14(void)
{
    if (*(int *)0x8c5062a0 != 0) {
        call_8c011ec0((void *)(*(S_g8c5062a0 **)0x8c5062a0));
        *(int *)0x8c5062a0 = 0;
        call_8c37d534((void *)((void *)0x8c5062b0));
    }
}
