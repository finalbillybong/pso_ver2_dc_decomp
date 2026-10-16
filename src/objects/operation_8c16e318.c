typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c4db408 S_g8c4db408;
struct S_c8c021ef8 {
    char unknown0[0x198];
    short f198;
    char unknown19a[0x196];
    short f330;
};
extern S_c8c021ef8 *lookup_low_id(int);
void operation_8c16e318(int a0, int a1)
{
    int v1;
    float v2;
    float v3;
    S_c8c021ef8 *t1;
    v1 = (int)(a0 << 2);
    if ((float)*(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + (v1)) == 0.0f) {
        *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + (v1)) = 0;
        return;
    }
    v2 = (float)1.0f;
    v3 = (float)(v2 / (float)*(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + (v1)));
    t1 = lookup_low_id(a1);
    if (t1 != 0 && v3 > ((float)t1->f330 / (float)t1->f198)) {
        *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + (v1)) = 1;
        return;
    }
    *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + (v1)) = 0;
}
