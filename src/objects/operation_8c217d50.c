typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block188 {
    int words[47];
} Block188;
typedef struct S_x34528 S_x34528;
typedef struct S_x89392 S_x89392;
struct S_x89392 {
    char unknown0[0x4];
    int f04;
};
struct S_x34528 {
    Block188 f00;
};
void operation_8c217d50(int a0)
{
    int v2;
    int v1;
    v1 = (int)*(int *)0x8c505244;
    v2 = (int)0;
    while (v1 > v2) {
        if (a0 == ((S_x89392 *)(v2 * 0xbc + 0x8c505304))->f04) {
            goto L_8c217d70;
        }
        v2 = (int)(v2 + 1);
    }
L_8c217d70:;
    if (!(v2 >= v1)) {
        *(Block188 *)&*(Block188 *)0x8c505248 = *(Block188 *)&((S_x34528 *)(v2 * 0xbc + 0x8c505304))->f00;
    }
}
