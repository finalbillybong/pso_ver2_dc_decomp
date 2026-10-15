typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4daaa8 S_g8c4daaa8;
extern int call_8c219834(void *, int, int);
extern float call_8c1589e4(int);
int operation_8c158980(int a0, int a1)
{
    float v3;
    int t1;
    float t2;
    if (*(int *)0x8c4daaa8 != 0) {
        t1 = call_8c219834((void *)(*(S_g8c4daaa8 **)0x8c4daaa8), a0, a1);
        return (int)(t1);
    }
    t2 = call_8c1589e4(a1);
    v3 = (float)(float)(unsigned int)a0;
    return (unsigned int)(v3 * t2);
}
