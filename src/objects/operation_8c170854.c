typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4db494 S_L8c4db494;
struct S_L8c4db494 {
    char unknown0[0x24];
    int f24;
};
extern S_L8c4db494 g_8c4db494;
void operation_8c170854(unsigned int a0)
{
    int v1;
    v1 = (int)a0;
    if (a0 > (unsigned int)0x278d0) {
        v1 = (int)0;
    }
    (&g_8c4db494)->f24 = (int)(v1);
}
