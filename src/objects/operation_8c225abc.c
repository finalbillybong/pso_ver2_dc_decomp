typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x44];
    float f44;
    char unknown48[0x10];
    int f58;
};
void operation_8c225abc(Object *o, float f0)
{
    int v1;
    if (f0 != o->f44) {
        o->f44 = f0;
        v1 = (int)3;
        o->f58 = (int)(v1);
    }
}
