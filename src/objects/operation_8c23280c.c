typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
char operation_8c23280c(int a0)
{
    int v2;
    int v1;
    v1 = (int)(char)a0;
    if (((*(unsigned char *)((char *)0x8c285e40 + ((unsigned char)v1)) & 2)) != 0) {
        v1 = v1 + -0x20;
    }
    a0 = (char)v1;
    if (((*(unsigned char *)((char *)0x8c285e40 + ((unsigned char)a0)) & 0x80)) != 0) {
        v2 = (int)0;
        while (0x10 > v2) {
            if (*(char *)((char *)((char *)v2 + 0x0) + ((int)((void *)0x8c338c60))) == a0) {
                return *(char *)((char *)((char *)v2 + 0x0) + ((int)((void *)0x8c338c71)));
            }
            v2 = (int)(v2 + 1);
        }
    }
    return 0;
}
