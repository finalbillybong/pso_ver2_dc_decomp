typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x30a];
    short f30a;
    char unknown30c[0x74];
    int f380;
};
extern void call_8c027090(Object *);
void operation_8c0852dc(Object *o)
{
    switch (o->f30a) {
    case 1:
        break;
    case 0:
        if (o->f380 != 0) {
            call_8c027090(o);
        }
    }
}
