typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
int operation_8c18b904(int a0)
{
    if (a0 >= 1 && 0xa >= a0) {
        return 0;
    }
    if (a0 >= 0xb && 0x11 >= a0) {
        return 1;
    }
    if (a0 >= 0x12 && 0x19 >= a0) {
        return 2;
    }
    if (a0 >= 0x1a && 0x23 >= a0) {
        return 3;
    }
    if (a0 >= 0x24 && 0x2d >= a0) {
        return 4;
    }
    if (a0 >= 0x2e && 0x3c >= a0) {
        return 5;
    }
    if (a0 >= 0x3d && 0x4b >= a0) {
        return 6;
    }
    if (a0 >= 0x4c && 0x64 >= a0) {
        return 7;
    }
    if (a0 >= 0x65) {
        return 7;
    }
    return -1;
}
