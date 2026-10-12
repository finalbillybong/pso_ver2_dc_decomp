typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int call_8c18e768(int);
void operation_8c1a8060(int a0, int a1)
{
    int t1;
    t1 = call_8c18e768(*(int *)0x8c4df898 + a1 + -1);
    *(int *)0x8c4df898 = a1 * t1;
}
