typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c1f1588(int);
extern void dispatch64_8c112fb0(void *);
void operation_8c113a24(int a0)
{
    call_8c1f1588((int)(a0 + 0x124));
    dispatch64_8c112fb0((void *)a0);
}
