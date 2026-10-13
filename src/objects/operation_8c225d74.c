typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c5060c0 S_g8c5060c0;
typedef struct S_g8c5060c4 S_g8c5060c4;
extern void call_8c122774(void *, void *);
void operation_8c225d74(void)
{
    if (*(int *)0x8c5060c4 != 0) {
        call_8c122774((void *)(*(S_g8c5060c0 **)0x8c5060c0), (void *)(*(S_g8c5060c4 **)0x8c5060c4));
        *(int *)0x8c5060c4 = 0;
    }
}
