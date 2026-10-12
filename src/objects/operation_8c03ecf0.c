typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x424];
    int f424;
};
extern void call_8c36cde4(int);
void operation_8c03ecf0(Object *o, int a1)
{
    if (o->f424 == 0) {
        call_8c36cde4(a1);
    }
}
