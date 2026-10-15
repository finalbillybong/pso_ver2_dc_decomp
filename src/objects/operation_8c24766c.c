typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x6];
    short f06;
};
extern void call_8c247720(Object *, int, int, int);
void operation_8c24766c(Object *o)
{
    int v2;
    int v1;
    o->f06 = 0;
    v2 = (int)0;
    v1 = (int)0xffff;
    while (0xa > v2) {
        call_8c247720(o, v2, v1, 0);
        v2 = (int)(v2 + 1);
    }
}
