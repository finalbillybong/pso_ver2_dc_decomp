typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4da36c S_g8c4da36c;
struct S_g8c4da36c {
    char unknown0[0x8];
    float f08;
};
extern S_g8c4da36c *g_8c4da36c;
float operation_8c14491c(void)
{
    return g_8c4da36c->f08;
}
