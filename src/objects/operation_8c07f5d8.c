typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_x3520_0 S_x3520_0;
typedef struct S_x55312_0 S_x55312_0;
struct S_x3520_0 {
    char unknown0[0x5];
    char f05;
};
struct S_x55312_0 {
    char unknown0[0x3];
    char f03;
};
extern void call_8c1f2908(int, int);
void operation_8c07f5d8(Object *o)
{
    int v5;
    int v1;
    int v7;
    int v6;
    int v2;
    int v8;
    int v3;
    int v4;
    v1 = (int)0x1f4;
    v2 = (int)0x1d8;
    v5 = (int)0;
    v3 = (int)0x1fc;
    v4 = (int)-1;
    while (v5 != 2) {
        v6 = (int)(v5 << 2);
        v7 = (int)*(int *)((char *)((char *)((int)o + v1) + 0x0) + (v6));
        if (v7 != 0) {
            v8 = (int)(*(int *)((char *)((char *)o + 0x0) + (v2)) & 0xf);
            if ((short)v8 > 0 && 6 > (short)v8) {
                call_8c1f2908(v7, (int)(*(char *)((char *)((char *)(*(int *)((char *)((char *)((int)o + v3) + 0x0) + (v6)) + v4) + 0x0) + ((short)v8))));
                goto L_8c07f666;
            }
            if ((short)v8 >= 6 && 8 > (short)v8) {
                call_8c1f2908(v7, (int)((*(S_x3520_0 **)((char *)((char *)((int)o + v3) + 0x0) + (v6)))->f05));
                goto L_8c07f666;
            }
            if ((short)v8 == 8) {
                call_8c1f2908(v7, (int)((*(S_x55312_0 **)((char *)((char *)((int)o + v3) + 0x0) + (v6)))->f03));
            }
        }
L_8c07f666:;
        v5 = (int)(v5 + 1);
    }
}
