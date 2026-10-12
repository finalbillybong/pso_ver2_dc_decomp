typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int call_8c0787cc(int, int);
void operation_8c21db24(int a0)
{
    int t1;
    if (*(int *)0x8c505964 != 0) {
        t1 = call_8c0787cc(a0, *(int *)0x8c505964);
        *(int *)0x8c50596c = (int)(*(int *)0x8c505964);
        *(int *)0x8c505974 = (int)(t1);
    }
}
