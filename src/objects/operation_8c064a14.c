typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4688ac S_g8c4688ac;
extern int g_8c4688a8;
extern S_g8c4688ac *g_8c4688ac;
extern void call_8c37df90(int, void *);
void operation_8c064a14(void)
{
    if (g_8c4688a8 >= 0x16 && 0x18 > g_8c4688a8) {
        call_8c37df90(0, g_8c4688ac);
    }
    g_8c4688a8 += 1;
}
