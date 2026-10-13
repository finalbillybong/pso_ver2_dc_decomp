typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    unsigned char tag;
    unsigned char f01;
};
int operation_8c1ccb10(Object *o)
{
    if (o->tag != 3) {
        return 0;
    }
    switch ((unsigned int)(o->f01)) {
    case 0:
    case 1:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
        return 1;
    case 2:
        break;
    }
    return 0;
}
