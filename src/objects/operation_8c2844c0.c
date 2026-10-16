typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c336040 S_L8c336040;
typedef struct S_L8c336064 S_L8c336064;
struct S_L8c336040 {
    char unknown0[0x18];
    int f18;
};
struct S_L8c336064 {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
};
extern float g_8c2e1624;
extern float g_8c2e1628;
extern float g_8c2e162c;
extern float g_8c2e1630;
extern int g_8c2e16f0;
extern float g_8c2e16fc;
extern S_L8c336040 g_8c336040;
extern S_L8c336064 g_8c336064;
void operation_8c2844c0(void)
{
    (&g_8c336040)->f18 = (int)(g_8c2e16f0);
    (&g_8c336064)->f00 = g_8c2e1624;
    (&g_8c336064)->f04 = g_8c2e1628;
    (&g_8c336064)->f08 = g_8c2e162c;
    (&g_8c336064)->f0c = g_8c2e1630;
    (&g_8c336064)->f10 = g_8c2e16fc;
}
