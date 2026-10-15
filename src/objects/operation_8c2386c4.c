typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c510bac S_L8c510bac;
struct S_L8c510bac {
    char unknown0[0x1f];
    char f1f;
};
extern S_L8c510bac g_8c510bac;
extern void call_8c12b154(void *, int, int);
void operation_8c2386c4(int a0)
{
    call_8c12b154((void *)((void *)&g_8c510bac), a0, 0x1f);
    (&g_8c510bac)->f1f = 0;
}
