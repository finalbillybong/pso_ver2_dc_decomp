typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c4db408 S_g8c4db408;
typedef struct S_g8c4db408_0 S_g8c4db408_0;
struct S_c8c021ef8 {
    char unknown0[0x308];
    short f308;
    char unknown30a[0x20e];
    float f518;
    float f51c;
    float f520;
    float f524;
};
extern S_c8c021ef8 *lookup_low_id(int);
void operation_8c1720a0(int a0, int a1)
{
    int v1;
    int v3;
    int v5;
    int v2;
    int v4;
    float v7;
    S_c8c021ef8 *t1;
    t1 = lookup_low_id((int)(*(S_g8c4db408_0 **)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a0 << 2))));
    if (t1 != 0) {
        v1 = (int)(t1->f308 == 2);
        if (v1 == 0) {
            v2 = (int)*(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a1 << 2));
            v3 = (int)(a1 + 1);
            v4 = (int)*(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)v3 << 2));
            v3 = (int)(v3 + 1);
            v5 = (int)*(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)v3 << 2));
            if (v5 > 0) {
                v7 = (float)((float)v4 / (float)v5 + (float)v2);
            } else {
                v7 = (float)(float)v2;
            }
            t1->f518 = v7;
            t1->f524 = v7;
            t1->f520 = v7;
            t1->f51c = v7;
        }
    }
}
