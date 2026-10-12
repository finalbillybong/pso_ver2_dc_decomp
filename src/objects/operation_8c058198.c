typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x30a];
    short f30a;
    char unknown30c[0xb8];
    int f3c4;
};
extern void call_8c059ea4(Object *, int);
void operation_8c058198(Object *o)
{
    if (o->f30a != 9 && o->f30a != 8 && o->f30a != 4) {
        if (o->f3c4 == 0) {
            call_8c059ea4(o, 4);
            return;
        }
        call_8c059ea4(o, 8);
    }
}
