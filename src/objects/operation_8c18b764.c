typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
int operation_8c18b764(int a0)
{
    if (a0 >= 1 && 0xa >= a0) {
        return 0xa;
    }
    if (a0 >= 0xb && 0x19 >= a0) {
        return 0xc;
    }
    if (a0 >= 0x1a && 0x2a >= a0) {
        return 0xc;
    }
    if (a0 >= 0x2b && 0x64 >= a0) {
        return 0x10;
    }
    if (a0 >= 0x65) {
        return 0x10;
    }
    return 0;
}
