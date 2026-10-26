typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x6a];
    char f6a;
};
int operation_8c198000(Object *o)
{
    switch (o->f6a) {
    case 1:
        break;
    case 0:
        return 0;
    }
    return 1;
}
