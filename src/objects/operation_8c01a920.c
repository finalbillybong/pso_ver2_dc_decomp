typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c053d84 S_c8c053d84;
struct S_c8c053d84 {
    char unknown0[0xe8];
    int fe8;
};
extern S_c8c053d84 *lookup_object_by_id(unsigned short);
void operation_8c01a920(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
    S_c8c053d84 *t1;
    t1 = lookup_object_by_id((unsigned short)a5);
    if (t1 != 0) {
        t1->fe8 = a7;
    }
}
