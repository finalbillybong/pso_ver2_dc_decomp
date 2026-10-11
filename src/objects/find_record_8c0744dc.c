typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4689f8 S_g8c4689f8;
struct S_g8c4689f8 {
    char unknown0[0xe8];
    int fe8;
};
S_g8c4689f8 *find_record_8c0744dc(int a0)
{
    int v2;
    int v1;
    int v4;
    int v5;
    S_g8c4689f8 *p;
    v1 = (int)0;
    v2 = (int)(*(int *)0x8c4689ec + -1);
    while (v2 > v1) {
        if (a0 > (*(S_g8c4689f8 **)((char *)0x8c4689f8 + (v1 + v2 >> 1 << 2)))->fe8) {
            v4 = (int)((v1 + v2 >> 1) + 1);
            v5 = (int)v2;
        } else {
            v4 = (int)v1;
            v5 = (int)(v1 + v2 >> 1);
        }
        v1 = (int)v4;
        v2 = (int)v5;
    }
    p = *(S_g8c4689f8 **)((char *)0x8c4689f8 + (v1 << 2));
    if (p != 0 && p->fe8 == a0) {
        return p;
    }
    return 0;
}
