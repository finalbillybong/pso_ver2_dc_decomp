typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41ccec S_L8c41ccec;
struct S_L8c41ccec {
    char unknown0[0x2];
    unsigned char f02;
};
extern S_L8c41ccec g_8c41ccec;
int operation_8c09a5a8(int a0)
{
    int v1;
    int v2;
    v1 = (int)0;
    while (6 > v1) {
        v2 = (int)v1;
        if (*(unsigned char *)((char *)&g_8c41ccec.f02 + (v1)) == a0) {
            return 1;
        }
        v1 = (int)(v2 + 1);
    }
    return 0;
}
