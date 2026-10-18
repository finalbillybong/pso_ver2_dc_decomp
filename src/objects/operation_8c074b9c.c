typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_x3120 S_x3120;
struct S_x3120 {
    char unknown0[0x2];
    short f02;
};
struct S_c8c021ef8 {
    char unknown0[0x19e];
    short f19e;
};
extern S_c8c021ef8 *lookup_low_id(int);
extern int call_8c03b55c(int, int);
short operation_8c074b9c(int a0)
{
    S_c8c021ef8 *t1;
    short v1;
    short v5;
    int v4;
    int v2;
    int v3;
    int t2;
    t1 = lookup_low_id((int)((unsigned short)a0));
    v1 = 0;
    if (t1 != 0) {
        v2 = (int)0xbcc;
        v4 = (int)9;
        v3 = (int)0x1b8;
        while (v4 != 0xd) {
            t2 = call_8c03b55c((int)((int)t1 + v2), v4);
            if (t2 != 0) {
                v5 = (short)(v1 + ((S_x3120 *)(t2 + v3))->f02);
                v1 = v5;
            }
            v4 = (int)(v4 + 1);
        }
        return t1->f19e - v1;
    }
    return v1;
}
