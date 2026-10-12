typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x78];
    char f78;
};
extern void call_8c12b154(int, int, int);
void operation_8c1dc824(Object *o, int a1)
{
    call_8c12b154((int)((char *)o + 0x20), a1, 0x58);
    o->f78 = 0;
}
