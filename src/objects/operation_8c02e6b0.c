typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xb1b4];
    int fb1b4;
};
void operation_8c02e6b0(Object *o, int a1)
{
    char *v21;
    v21 = (char *)o->fb1b4;
    if (v21 != 0) {
        ((void (*)(int))(v21))(a1);
    }
}
