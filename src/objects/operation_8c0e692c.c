typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x350];
    int f350;
    char unknown354[0x30];
    int f384;
    char unknown388[0x4];
    int f38c;
};
void operation_8c0e692c(Object *o)
{
    if (!(o->f350 >= 0)) {
        o->f350 = 0;
    } else {
        if (o->f350 > 2) {
            o->f350 = 2;
        }
    }
    switch (o->f350) {
    case 2:
        o->f384 = 0;
        o->f38c = 0x2b;
        return;
    case 1:
        o->f384 = 1;
        o->f38c = 0x2a;
        return;
    }
    o->f384 = 2;
    o->f38c = 0x29;
}
