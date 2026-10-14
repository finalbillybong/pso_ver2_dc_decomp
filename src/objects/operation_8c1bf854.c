typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c1bf87c(int, int);
void operation_8c1bf854(int a0)
{
    int v1;
    v1 = (int)0;
    while (8 > v1) {
        call_8c1bf87c(a0, v1);
        v1 = (int)(v1 + 1);
    }
}
