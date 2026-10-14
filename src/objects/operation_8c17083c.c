typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4db494 S_L8c4db494;
struct S_L8c4db494 {
    char unknown0[0x20];
    int f20;
};
extern S_L8c4db494 g_8c4db494;
void operation_8c17083c(unsigned int a0)
{
    int v1;
    v1 = (int)a0;
    if (a0 > (unsigned int)0xc7) {
        v1 = (int)0;
    }
    (&g_8c4db494)->f20 = (int)(v1);
}
