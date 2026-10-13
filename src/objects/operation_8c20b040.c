typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c5051f0 S_g8c5051f0;
typedef struct S_g8c505200 S_g8c505200;
typedef struct S_g8c50520c S_g8c50520c;
int operation_8c20b040(int a0)
{
    int v7;
    if ((short)a0 >= 0x457 && 0x462 >= (short)a0) {
        return (int)(*(int *)((char *)((char *)*(S_g8c5051f0 **)0x8c5051f0 - 0x115c) + ((short)a0 << 2)));
    }
    v7 = (int)(short)a0;
    if ((short)a0 == 0x463) {
        return 0;
    }
    return (int)(*(int *)((char *)((char *)*(S_g8c505200 **)0x8c505200 + 0x0) + (*(short *)((char *)((char *)*(S_g8c50520c **)0x8c50520c + 0x0) + (v7 << 1)) << 2)));
}
