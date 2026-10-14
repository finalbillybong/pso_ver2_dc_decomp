typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e2d08 S_g8c4e2d08;
extern void call_8c37df90(int, void *);
void operation_8c1c3fd8(void)
{
    if (*(int *)0x8c4e2d04 == 6) {
        call_8c37df90(0, (void *)(*(S_g8c4e2d08 **)0x8c4e2d08));
    }
    *(int *)0x8c4e2d04 += 1;
}
