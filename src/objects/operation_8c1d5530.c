typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void operation_8c1cdcdc(void *);
extern void call_8c1cdc94(int);
extern void call_8c1d5120(int, int);
extern void call_8c1cdd08(int);
void operation_8c1d5530(int a0, int a1)
{
    operation_8c1cdcdc((void *)a0);
    call_8c1cdc94(a0);
    call_8c1d5120(a0, a1);
    call_8c1cdd08(a0);
}
