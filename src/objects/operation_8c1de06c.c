typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e3060 S_g8c4e3060;
typedef struct S_g8c4e3064 S_g8c4e3064;
typedef struct S_g8c4e3064_0 S_g8c4e3064_0;
extern S_g8c4e3060 *g_8c4e3060;
extern S_g8c4e3064 *g_8c4e3064;
extern void call_8c37d534(void *);
extern void call_8c011ec0(void *);
extern void call_8c18de08(void *);
extern void operation_8c105320(int);
void operation_8c1de06c(void)
{
    int v2;
    int v1;
    v1 = (int)2;
    while (v1 >= 0) {
        v2 = (int)(v1 << 2);
        call_8c37d534((void *)(*(S_g8c4e3064_0 **)((char *)((char *)g_8c4e3064 + 0x0) + (v2))));
        call_8c011ec0((void *)(*(S_g8c4e3064_0 **)((char *)((char *)g_8c4e3064 + 0x0) + (v2))));
        v1 = (int)(v1 + -1);
    }
    if (g_8c4e3064 != 0) {
        call_8c18de08(g_8c4e3064);
        g_8c4e3064 = (S_g8c4e3064 *)0;
    }
    if (g_8c4e3060 != 0) {
        operation_8c105320((int)g_8c4e3060);
        g_8c4e3060 = (S_g8c4e3060 *)0;
    }
}
