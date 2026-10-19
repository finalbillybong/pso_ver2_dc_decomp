typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4da36c S_g8c4da36c;
struct S_g8c4da36c {
    char unknown0[0x1c];
    int f1c;
};
extern S_g8c4da36c *g_8c4da36c;
int operation_8c14492c(void)
{
    return (int)(g_8c4da36c->f1c);
}
