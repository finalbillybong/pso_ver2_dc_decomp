typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x234];
    float f234;
};
extern int g_8c4689f0;
extern void call_8c3829bc(int, float, float, float);
void operation_8c175804(Object *o)
{
    if (g_8c4689f0 == 1) {
        call_8c3829bc(0, 0.0f, o->f234 * -1.0f, 0.0f);
    }
}
