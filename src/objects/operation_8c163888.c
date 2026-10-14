typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db25c S_g8c4db25c;
typedef struct S_g8c4db25c_4 S_g8c4db25c_4;
struct S_g8c4db25c {
    char unknown0[0x4];
    S_g8c4db25c_4 *f04;
};
struct S_g8c4db25c_4 {
    int f00;
};
void operation_8c163888(void)
{
    ((void (*)(void))((*(S_g8c4db25c **)0x8c4db25c)->f04->f00))();
}
