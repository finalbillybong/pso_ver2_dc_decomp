typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4df894 S_g8c4df894;
extern void call_8c34d6ae(void);
extern int call_8c34da3c(int);
extern void operation_8c104c60(void);
void operation_8c1a8088(int a0, int a1)
{
    int t1;
    call_8c34d6ae();
L_8c1a8098:;
    t1 = call_8c34da3c(a0);
    if (t1 != 3) {
        operation_8c104c60();
        goto L_8c1a8098;
    }
    *(void **)0x8c4df894 = &*(int *)((char *)((char *)*(S_g8c4df894 **)0x8c4df894 + 0x0) + (a1 << 11));
}
