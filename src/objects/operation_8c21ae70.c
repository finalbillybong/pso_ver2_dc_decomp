typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c50595c S_g8c50595c;
extern void call_8c3843a8(void *);
void operation_8c21ae70(void)
{
    switch (*(int *)0x8c505940) {
    case 59:
        call_8c3843a8((void *)(*(S_g8c50595c **)0x8c50595c));
        break;
    case 58:
        call_8c3843a8((void *)(*(int *)0x8c50595c + 0x40));
    }
    *(int *)0x8c505940 += 1;
}
