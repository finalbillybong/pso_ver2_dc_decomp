typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x68];
    short f68;
};
void operation_8c1bddbc(Object *o)
{
    unsigned short v1;
    v1 = (unsigned short)o->f68;
    if ((((unsigned short)v1 & 8)) == 0 && (((unsigned short)v1 & 2)) == 0) {
        o->f68 = v1 | 4;
    }
}
