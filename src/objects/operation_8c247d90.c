typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x2];
    unsigned short f02;
};
extern int get_field_8c247ea4(int);
int operation_8c247d90(Object *o)
{
    int t1;
    if (o == 0) {
        return -1;
    }
    t1 = get_field_8c247ea4(o->f02);
    return t1;
}
