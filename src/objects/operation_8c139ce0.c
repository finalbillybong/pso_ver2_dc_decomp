typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c053d84 S_c8c053d84;
struct S_c8c053d84 {
    char unknown0[0x30a];
    short f30a;
};
extern S_c8c053d84 *lookup_object_by_id(unsigned short);
int operation_8c139ce0(void)
{
    int v1;
    S_c8c053d84 *t1;
    t1 = lookup_object_by_id((unsigned short)(*(short *)0x8c313118));
    if (t1 != 0) {
        v1 = (int)(t1->f30a == 0);
        if (v1 != 0) {
            return 1;
        }
    }
    return 0;
}
