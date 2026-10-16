typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c335f68 S_L8c335f68;
struct S_L8c335f68 {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
};
extern float g_8c2e16d0;
extern float g_8c2e16d4;
extern float g_8c2e16d8;
extern float g_8c2e16dc;
extern float g_8c2e170c;
extern S_L8c335f68 g_8c335f68;
void operation_8c2842d4(void)
{
    (&g_8c335f68)->f00 = g_8c2e16d0;
    (&g_8c335f68)->f04 = g_8c2e16d4;
    (&g_8c335f68)->f08 = g_8c2e16d8;
    (&g_8c335f68)->f0c = g_8c2e16dc;
    (&g_8c335f68)->f10 = g_8c2e170c;
}
