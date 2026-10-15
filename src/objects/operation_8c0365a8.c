typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block292 {
    int words[73];
} Block292;
typedef struct S_x22160 S_x22160;
struct S_x22160 {
    Block292 f00;
};
extern int g_8c462000;
extern char g_8c461c04[];
extern void call_8c12b880(void *, int, int);
extern void call_8c12b154(void *, void *, int);
void operation_8c0365a8(int a0)
{
    g_8c462000 = a0;
    *(Block292 *)&*(Block292 *)(g_8c461c04 + 0x248) = *(Block292 *)&((S_x22160 *)(a0 * 0x124 + g_8c461c04))->f00;
    call_8c12b880((void *)((void *)0x8c4621e9), 0, 0x11);
    call_8c12b154((void *)((void *)0x8c4621e9), (void *)((g_8c461c04 + 0x265)), 0x10);
}
