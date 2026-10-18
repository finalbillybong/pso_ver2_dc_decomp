typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
struct S_c8c021ef8 {
    char unknown0[0x34];
    int f34;
};
extern S_c8c021ef8 *lookup_low_id(int);
int operation_8c244bfc(void)
{
    int v2;
    int v1;
    S_c8c021ef8 *t1;
    v1 = (int)0x2000000;
    v2 = (int)0;
    while (4 > v2) {
        t1 = lookup_low_id(v2);
        if (t1 != 0 && ((t1->f34 & v1)) != 0) {
            return 0;
        }
        v2 = (int)(v2 + 1);
    }
    return 1;
}
