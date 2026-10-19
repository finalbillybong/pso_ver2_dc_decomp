typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x30a];
    short f30a;
};
extern int try_or_forward_8c046104(void *, int, int);
int operation_8c1a1248(Object *o, int a1, int a2)
{
    int t1;
    if (o->f30a != 0) {
        t1 = try_or_forward_8c046104((void *)o, a1, a2);
        return (int)(t1);
    }
    return 0;
}
