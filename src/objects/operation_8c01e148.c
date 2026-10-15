typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41ccec S_L8c41ccec;
struct S_L8c41ccec {
    char unknown0[0x8];
    unsigned char f08;
};
extern char g_8c41cd04;
extern S_L8c41ccec g_8c41ccec;
int operation_8c01e148(int a0)
{
    int v2;
    int v3;
    if (g_8c41cd04 != 0) {
        return 0;
    }
    v2 = (int)0;
    while (6 > v2) {
        v3 = (int)v2;
        if (*(unsigned char *)((char *)&g_8c41ccec.f08 + (v2)) == a0) {
            return (int)(a0);
        }
        v2 = (int)(v3 + 1);
    }
    return 0;
}
