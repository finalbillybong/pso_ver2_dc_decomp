typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dbde0 S_g8c4dbde0;
struct S_g8c4dbde0 {
    char unknown0[0x4];
    short f04;
};
void operation_8c18bae0(void)
{
    if (*(int *)0x8c4dbde0 != 0) {
        (*(S_g8c4dbde0 **)0x8c4dbde0)->f04 |= 1;
        *(int *)0x8c4dbde0 = 0;
    }
}
