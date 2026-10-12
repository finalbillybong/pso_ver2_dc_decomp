typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c053d84 S_c8c053d84;
struct S_c8c053d84 {
    char unknown0[0x308];
    short f308;
};
extern S_c8c053d84 *lookup_object_by_id(unsigned short);
int operation_8c225c84(int a0)
{
    int v1;
    int v2;
    S_c8c053d84 *t1;
    t1 = lookup_object_by_id((unsigned short)a0);
    if (t1 == 0) {
        return 0;
    }
    v1 = (int)(t1->f308 == 2);
    if (v1 == 0) {
        v2 = (int)(t1->f308 == 1);
        if (v2 == 0) {
            return 0;
        }
    }
    if (((char *)t1 + 0x7e4) == 0) {
        return 0;
    }
    return (int)(((char *)t1 + 0x7e4));
}
