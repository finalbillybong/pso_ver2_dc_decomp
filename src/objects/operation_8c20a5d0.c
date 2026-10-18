typedef struct S_x33488 S_x33488;
struct S_x33488 {
    char unknown0[0x4];
    int f04;
};
int operation_8c20a5d0(int a0)
{
    int v2;
    int v1;
    int v3;
    v1 = (int)*(int *)0x8c504a24;
    v2 = (int)0;
    while (v1 > v2) {
        v3 = (int)0x8c504a28;
        v3 += v2 * 0xb4;
        if (a0 == ((S_x33488 *)v3)->f04) {
            return v3;
        }
        v2 = (int)(v2 + 1);
    }
    return 0;
}
