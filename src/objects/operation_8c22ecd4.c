typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xa0];
    int fa0;
    int fa4;
};
extern void call_8c22ed20(Object *);
void operation_8c22ecd4(Object *o, int a1, int a2)
{
    while (o->fa4 != 0) {
        call_8c22ed20(o);
    }
    o->fa0 = a2 | 2;
    o->fa4 = a1;
    call_8c22ed20(o);
}
