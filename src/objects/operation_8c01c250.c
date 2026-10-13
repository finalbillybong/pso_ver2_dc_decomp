typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cb00 S_L8c41cb00;
struct S_L8c41cb00 {
    char unknown0[0xc];
    int f0c;
};
extern S_L8c41cb00 g_8c41cb00;
void operation_8c01c250(int a0)
{
    (&g_8c41cb00)->f0c = a0;
}
