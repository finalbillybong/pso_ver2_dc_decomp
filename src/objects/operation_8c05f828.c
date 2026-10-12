typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467a20 S_g8c467a20;
typedef struct S_g8c467a78 S_g8c467a78;
extern void call_8c34838c(void *);
extern void call_8c344c04(void *);
extern void call_8c100288(void);
void operation_8c05f828(void)
{
    int v1;
    call_8c34838c(*(S_g8c467a20 **)0x8c467a20);
    v1 = (int)0;
    while (0x36 > v1) {
        call_8c344c04(*(S_g8c467a78 **)((char *)0x8c467a78 + (v1 << 2)));
        v1 = (int)(v1 + 1);
    }
    call_8c100288();
    *(int *)0x8c4687f8 = 0;
}
