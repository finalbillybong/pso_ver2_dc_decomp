typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c461ac8 S_L8c461ac8;
struct S_L8c461ac8 {
    char unknown0[0xc];
    char f0c;
};
extern S_L8c461ac8 g_8c461ac8;
extern void call_8c12b154(void *, int, int);
void operation_8c0354ac(int a0)
{
    call_8c12b154((void *)((void *)&g_8c461ac8), a0, 0xc);
    (&g_8c461ac8)->f0c = 0;
}
