typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x16];
    char f1a;
};
extern void call_8c12b154(int, int, int);
void operation_8c21f66c(Object *o, int a1)
{
    call_8c12b154((int)((char *)o + 0x4), a1, 0x16);
    o->f1a = 0;
    o->tag |= 1;
}
