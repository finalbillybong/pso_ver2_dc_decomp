typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c462ce4 S_g8c462ce4;
extern void call_8c1a7e10(void);
extern void call_8c011ec0(void *);
void operation_8c03e300(void)
{
    call_8c1a7e10();
    call_8c011ec0(*(S_g8c462ce4 **)0x8c462ce4);
    *(int *)0x8c462ce4 = 0;
}
