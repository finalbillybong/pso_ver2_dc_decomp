typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dbf40 S_g8c4dbf40;
extern int call_8c257e3c(int, int);
extern void call_8c12b154(void *, int, int);
void operation_8c18ea4c(int a0)
{
    int t1;
    t1 = call_8c257e3c(a0, 0xff);
    call_8c12b154(*(S_g8c4dbf40 **)0x8c4dbf40, a0, t1);
    *(char *)((char *)((char *)*(S_g8c4dbf40 **)0x8c4dbf40 + 0x0) + (t1)) = 0;
    *(int *)0x8c4dbf40 += t1;
}
