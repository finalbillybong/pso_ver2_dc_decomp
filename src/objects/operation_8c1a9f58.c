typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c324d68 S_g8c324d68;
extern void call_8c1003d0(void *);
void operation_8c1a9f58(int a0)
{
    if (*(int *)0x8c4e2f80 == 0 && a0 != *(int *)0x8c4e1a40) {
        *(int *)0x8c4e1a40 = a0;
        call_8c1003d0(*(S_g8c324d68 **)((char *)0x8c324d68 + (a0 << 2)));
    }
}
