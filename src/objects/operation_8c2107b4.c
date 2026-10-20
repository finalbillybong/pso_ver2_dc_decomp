typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
int operation_8c2107b4(int a0)
{
    int v3;
    int v1;
    int v6;
    v6 = 0;
    v3 = 0;
    v1 = 0;
    if ((short)a0 >= 0x263 && 0x275 >= (short)a0) {
        v1 = 1;
    }
    if (v1 != 0 && (short)a0 != 0x273) {
        v3 = 1;
    }
    if (v3 != 0 && (short)a0 != 0x274) {
        v6 = 1;
    }
    return v6;
}
