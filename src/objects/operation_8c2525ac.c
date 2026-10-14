typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x238];
    int f238;
};
extern void operation_8c172c30(void *, int, int);
void operation_8c2525ac(Object *o)
{
    if (0x2000 > o->f238) {
        operation_8c172c30((void *)(&o->f238), 0x2d8, 0x2000);
    }
}
