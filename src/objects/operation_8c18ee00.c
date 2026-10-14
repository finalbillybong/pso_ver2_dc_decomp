typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
int operation_8c18ee00(int a0)
{
    int v6;
    int v9;
    if ((char)a0 >= 0x61 && 0x7a >= (char)a0) {
        goto L_8c18ee1c;
    }
    v9 = (int)a0;
    if ((char)a0 >= 0xc0) {
        v6 = (int)a0;
        if (0xff >= (char)a0) {
L_8c18ee1c:;
            v6 = (int)(a0 + -0x20);
        }
        v9 = (int)v6;
    }
    return (int)(v9);
}
