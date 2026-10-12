typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c07435c(void);
extern int call_8c011ecc(int);
extern void operation_194c74(void *);
extern void call_8c162cd8(void);
void operation_8c0731f4(void)
{
    int t1;
    *(int *)0x8c4689e0 = 0;
    call_8c07435c();
    t1 = call_8c011ecc(1);
    if (t1 != 0) {
        operation_194c74((void *)t1);
    }
    *(int *)0x8c4689e4 = t1;
    call_8c162cd8();
}
