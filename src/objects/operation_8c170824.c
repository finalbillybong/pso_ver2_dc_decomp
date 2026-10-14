typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4db494 S_L8c4db494;
struct S_L8c4db494 {
    char unknown0[0x1c];
    int f1c;
};
extern S_L8c4db494 g_8c4db494;
void operation_8c170824(unsigned int a0)
{
    int v1;
    int v3;
    v3 = (int)a0;
    if (a0 != -1) {
        v1 = (int)a0;
        if (a0 > (unsigned int)0x1d) {
            v1 = (int)0;
        }
        v3 = (int)v1;
    }
    (&g_8c4db494)->f1c = (int)(v3);
}
