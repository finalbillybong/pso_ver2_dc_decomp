typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
int operation_8c18b894(int a0)
{
    if (a0 >= 1 && 3 >= a0) {
        return 0;
    }
    if (a0 >= 4 && 0xa >= a0) {
        return 1;
    }
    if (a0 >= 0xb && 0x19 >= a0) {
        return 2;
    }
    if (a0 >= 0x1a && 0x28 >= a0) {
        return 3;
    }
    if (a0 >= 0x29 && 0x37 >= a0) {
        return 4;
    }
    if (a0 >= 0x38 && 0x64 >= a0) {
        return 5;
    }
    if (a0 >= 0x65) {
        return 5;
    }
    return -1;
}
