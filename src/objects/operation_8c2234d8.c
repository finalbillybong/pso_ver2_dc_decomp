typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
struct S_c8c021ef8 {
    char unknown0[0x350];
    int f350;
};
extern S_c8c021ef8 *lookup_low_id(int);
void operation_8c2234d8(int a0)
{
    S_c8c021ef8 *t1;
    t1 = lookup_low_id((int)((unsigned short)a0));
    if (t1 != 0) {
        t1->f350 |= 0x100000;
    }
}
