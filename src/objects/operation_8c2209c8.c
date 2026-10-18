typedef struct Object Object;
struct Object {
    char unknown0[0x818];
    int f818;
};
int operation_8c2209c8(Object *o)
{
    int v2;
    int v1;
    v1 = (int)o->f818;
    v2 = (int)0;
    if (((v1 & 0x20)) != 0) {
        v2 = (int)0;
    }
    if (((v1 & 0x40)) != 0) {
        v2 = (int)1;
    }
    if (((v1 & 0x80)) != 0) {
        v2 = (int)2;
    }
    return (int)(v2);
}
