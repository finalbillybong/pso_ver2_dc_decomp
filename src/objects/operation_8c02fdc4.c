typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xb1d0];
    int fb1d0;
};
void operation_8c02fdc4(Object *o, int a1)
{
    char *v21;
    v21 = (char *)o->fb1d0;
    if (v21 != 0) {
        ((void (*)(int, int))(v21))((int)(a1 + 4), (int)(a1 + 4));
    }
}
