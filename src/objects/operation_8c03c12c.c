typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
int operation_8c03c12c(Object *o, int a1)
{
    int v6;
    int v4;
    if (0x63 > a1) {
        v4 = (int)0xa;
    } else {
        if (a1 >= 0x63 && 0x95 > a1) {
            v4 = (int)0xf;
            goto L_8c03c156;
        }
        if (a1 >= 0x95 && 0xc7 >= a1) {
            v4 = (int)0x14;
            goto L_8c03c156;
        }
        v4 = (int)0;
    }
L_8c03c156:;
    v6 = (int)0;
    while (4 > v6) {
        if (v6 != 2 && v4 > *(char *)((char *)((char *)o + 0x0) + (v6))) {
            return 0;
        }
        v6 = (int)(v6 + 1);
    }
    return 1;
}
