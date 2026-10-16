typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
extern void call_8c38cf80(int, void *, ...);
void operation_8c032dd4(Object *o)
{
    int v4;
    int v1;
    int v2;
    int v3;
    v1 = (int)0x10a8;
    v2 = (int)0x10a4;
    v4 = (int)0;
    v3 = (int)0x10a0;
    while (*(int *)((char *)((char *)o + 0x0) + (v3)) > v4) {
        call_8c38cf80((int)(*(int *)((char *)((char *)o + 0x0) + (v2)) << 0x10 | (int)*(int *)((char *)((char *)o + 0x0) + (v1)) + v4), (void *)(((char *)o + (v4 << 5) + 0x20)));
        v4 = (int)(v4 + 1);
    }
}
