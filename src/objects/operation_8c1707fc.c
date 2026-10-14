typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4db494 S_L8c4db494;
struct S_L8c4db494 {
    char unknown0[0xa];
    char f0a;
};
extern S_L8c4db494 g_8c4db494;
void operation_8c1707fc(unsigned int a0)
{
    if ((unsigned int)1 >= a0) {
        (&g_8c4db494)->f0a = a0;
    }
}
