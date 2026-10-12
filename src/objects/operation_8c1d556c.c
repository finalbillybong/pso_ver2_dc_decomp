typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void operation_8c1cdcdc(void *);
extern void call_8c1cdc94(int);
extern void call_8c1d51dc(int, int, int);
extern void call_8c1cdd08(int);
void operation_8c1d556c(int a0, int a1, int a2)
{
    operation_8c1cdcdc((void *)a0);
    call_8c1cdc94(a0);
    call_8c1d51dc(a0, a1, a2);
    call_8c1cdd08(a0);
}
