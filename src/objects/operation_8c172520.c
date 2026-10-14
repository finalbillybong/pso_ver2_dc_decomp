typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db9e8 S_g8c4db9e8;
struct S_g8c4db9e8 {
    char unknown0[0x320c];
    int f320c;
};
void operation_8c172520(void)
{
    if (*(int *)0x8c4db9e8 != 0) {
        *(int *)0x8c4db4d4 = (int)((*(S_g8c4db9e8 **)0x8c4db9e8)->f320c);
        return;
    }
    *(int *)0x8c4db4d4 = 0;
}
