typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c0f3918(int, int);
extern void call_8c011ed8(int);
int operation_8c0f3384(int a0, int a1)
{
    if (a0 != 0) {
        call_8c0f3918(a0, 0);
        if ((short)a1 > 0) {
            call_8c011ed8(a0);
        }
    }
    return a0;
}
