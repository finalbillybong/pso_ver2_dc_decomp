typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x3a0];
    int f3a0;
};
extern void operation_8c1b1668(void *, int);
void operation_8c1b2ea0(Object *o)
{
    if (!(--o->f3a0 >= 0)) {
        operation_8c1b1668((void *)o, 1);
    }
}
