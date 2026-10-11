typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c504964 S_g8c504964;
typedef struct S_g8c505960 S_g8c505960;
struct S_g8c505960 {
    char unknown0[0x4c];
    int f4c;
};
struct S_g8c504964 {
    char unknown0[0x1];
    unsigned char f01;
};
int operation_8c21dc28(void)
{
    if (*(int *)0x8c505960 != 0) {
        if ((*(S_g8c505960 **)0x8c505960)->f4c != 0) {
            return (*(S_g8c504964 **)0x8c504964)->f01;
        }
    }
    return -1;
}
