typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c468900 S_g8c468900;
typedef struct S_g8c468904 S_g8c468904;
typedef struct S_g8c468918 S_g8c468918;
extern void call_8c05b97c(int, void *, void *, void *);
void operation_8c0671d8(int a0)
{
    call_8c05b97c(a0, *(S_g8c468900 **)((char *)0x8c468900 + (*(int *)0x8c2fce64 << 2)), *(S_g8c468904 **)((char *)0x8c468904 + (*(int *)0x8c2fce78 << 2)), *(S_g8c468918 **)((char *)0x8c468918 + (*(int *)0x8c2fce8c << 2)));
}
