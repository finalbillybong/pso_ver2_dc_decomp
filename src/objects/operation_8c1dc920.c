typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x78];
    char f78;
    char f79;
    char f7a;
    char f7b;
    char f7c;
};
int operation_8c1dc920(Object *o)
{
    int v1;
    if (o->f78 != 0) {
        return 1;
    }
    if (o->f79 != 1) {
        return 1;
    }
    if (!(o->f7a >= 0)) {
        return 1;
    }
    if (!(o->f7b >= 0)) {
        return 1;
    }
    v1 = (int)(0 > o->f7c);
    return (int)(v1);
}
