typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    unsigned char tag;
    char unknown1[0x3];
    unsigned char f04;
};
int operation_8c1c7524(Object *o)
{
    if (o->tag == 0) {
        if (((o->f04 & 0x80)) != 0) {
            return 0;
        }
    }
    return 1;
}
