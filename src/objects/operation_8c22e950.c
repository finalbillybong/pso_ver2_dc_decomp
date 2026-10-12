typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x8c];
    int f8c;
};
extern void operation_8c220b5c(void);
void operation_8c22e950(Object *o)
{
    if (o->f8c != 0) {
        operation_8c220b5c();
        o->f8c = 0;
    }
}
