typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_x34208 S_x34208;
struct S_x34208 {
    float f00;
};
extern int g_8c469d20;
int operation_8c087248(int a0)
{
    return (int)((S_x34208 *)(g_8c469d20 + -0x100 + ((unsigned char)a0 << 3)))->f00;
}
