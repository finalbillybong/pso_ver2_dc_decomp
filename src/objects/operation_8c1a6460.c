typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x68];
    int f68;
};
extern void call_8c1a6480(void);
void operation_8c1a6460(Object *o, int a1)
{
    if (o->f68 != a1) {
        o->f68 = a1;
        call_8c1a6480();
    }
}
