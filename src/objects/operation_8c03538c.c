typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block80 {
    int words[20];
} Block80;
typedef struct S_vv2 S_vv2;
typedef struct S_x26672 S_x26672;
typedef struct Block_vv2_0 {
    char unknown0[0x30];
    char f30;
    char unknown31[0x1f];
} Block_vv2_0;
struct S_vv2 {
    Block_vv2_0 f00;
};
struct S_x26672 {
    Block80 f00;
};
void operation_8c03538c(void)
{
    S_vv2 *v2;
    int v1;
    v1 = (int)0;
    v2 = (S_vv2 *)(*(int *)0x8c4db9e0 + 0x370);
    if (v1 < 0 || v1 >= 0xa) {
        v1 = (int)0;
    } else {
    }
    *(Block80 *)&v2->f00 = *(Block80 *)&((S_x26672 *)(v1 * 0x50 + 0x8c2f5da0))->f00;
    v2->f00.f30 = -1;
}
