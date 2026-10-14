typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dbc44 S_g8c4dbc44;
struct S_g8c4dbc44 {
    char unknown0[0x24];
    int f24;
};
extern void operation_8c220ca8(int, int);
void operation_8c187f8c(void)
{
    operation_8c220ca8(0xd, 1);
    (*(S_g8c4dbc44 **)0x8c4dbc44)->f24 = 4;
}
