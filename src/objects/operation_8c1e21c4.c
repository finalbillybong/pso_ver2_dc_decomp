typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xbc];
    int fbc;
};
void operation_8c1e21c4(Object *o)
{
    switch (*(int *)0x8c467188) {
    case 0:
        o->fbc = 5;
        return;
    case 1:
    case 2:
    case 3:
    case 4:
        o->fbc = 6;
    }
}
