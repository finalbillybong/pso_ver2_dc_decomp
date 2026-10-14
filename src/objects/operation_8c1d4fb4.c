typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void operation_8c1cdcdc(void *);
extern void operation_8c1cdc94(void *);
extern void call_8c1d4e10(int);
extern void call_8c1cdd08(int);
void operation_8c1d4fb4(int a0)
{
    operation_8c1cdcdc((void *)a0);
    operation_8c1cdc94((void *)a0);
    call_8c1d4e10(a0);
    call_8c1cdd08(a0);
}
