typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void operation_8c1cc690(void);
extern void call_8c0eccd8(int);
extern void call_8c0ecd94(int);
extern void operation_8c0ed180(void *);
void operation_8c0ecafc(int a0)
{
    operation_8c1cc690();
    call_8c0eccd8(a0);
    call_8c0ecd94(a0);
    operation_8c0ed180((void *)a0);
}
