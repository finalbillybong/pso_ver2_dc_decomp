typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c505960 S_g8c505960;
struct S_g8c505960 {
    char unknown0[0x44];
    int f44;
    char unknown48[0x2c];
    int f74;
};
int operation_8c21dc9c(void)
{
    if (*(int *)0x8c505960 == 0) {
        return 0;
    }
    if ((*(S_g8c505960 **)0x8c505960)->f44 == 0) {
        return 0;
    }
    switch ((*(S_g8c505960 **)0x8c505960)->f74) {
    case 0:
        return 1;
    case 1:
    case 2:
        return 2;
    }
    return 0;
}
