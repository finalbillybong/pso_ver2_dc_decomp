typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c340764 S_L8c340764;
struct S_L8c340764 {
    char unknown0[0x10];
    char f10;
};
extern S_L8c340764 g_8c340764;
extern void call_8c12b154(void *, int, int);
void operation_8c25ff88(int a0)
{
    int v1;
    v1 = (int)0;
    while (0x14 > v1) {
        *(char *)((char *)((char *)v1 + 0x0) + ((int)((void *)&g_8c340764))) = 0;
        v1 = (int)(v1 + 1);
    }
    call_8c12b154((void *)((void *)&g_8c340764), a0, 0x10);
    (&g_8c340764)->f10 = 0;
}
