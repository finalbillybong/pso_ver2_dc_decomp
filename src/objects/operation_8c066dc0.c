typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x698];
    int f698;
};
void operation_8c066dc0(Object *o, int a1)
{
    if (a1 == 0) {
        o->f698 = 0;
        return;
    }
    o->f698 = 0x32;
}
