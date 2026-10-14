typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x84];
    short f84;
    char unknown86[0x12];
    short f98;
};
extern void call_8c1cd854(void);
void operation_8c1d039c(Object *o, int a1)
{
    o->f98 = a1;
    o->f84 = a1;
    call_8c1cd854();
}
