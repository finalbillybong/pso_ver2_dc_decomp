typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    char unknown0[0x130];
    Vector3 f130;
    char unknown13c[0x1c];
    int f158;
};
struct Arg1 {
    Vector3 f00;
};
extern void request_mode_two(void *);
void operation_8c142230(Object *o, Arg1 *a1, int a2)
{
    int v3;
    if (a2 <= 0 || a2 >= 0x258) {
        v3 = (int)0x78;
    } else {
        v3 = (int)a2;
    }
    o->f158 = v3;
    o->f130 = a1->f00;
    request_mode_two((void *)o);
}
