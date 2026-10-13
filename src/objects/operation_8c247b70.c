typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db9e4 S_g8c4db9e4;
typedef struct S_g8c4db9e4_123c S_g8c4db9e4_123c;
extern int call_8c238458(void *);
int operation_8c247b70(int a0)
{
    int t1;
    if (a0 < 0 || a0 >= 0xa || *(int *)0x8c4db9e4 == 0) {
        return 0;
    }
    t1 = call_8c238458((void *)(*(S_g8c4db9e4_123c **)((char *)((char *)*(S_g8c4db9e4 **)0x8c4db9e4 + 0x123c) + (a0 << 2))));
    return (int)(t1);
}
