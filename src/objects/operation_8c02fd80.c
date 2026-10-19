typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xb1cc];
    int fb1cc;
};
void operation_8c02fd80(Object *o, int a1)
{
    char *v21;
    v21 = (char *)o->fb1cc;
    if (v21 != 0) {
        ((void (*)(int))(v21))(a1);
    }
}
