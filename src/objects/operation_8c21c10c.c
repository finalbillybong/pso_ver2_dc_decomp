typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x354];
    int f354;
    char unknown358[0x2c];
    int f384;
    char unknown388[0xc];
    float f394;
    float f398;
};
void operation_8c21c10c(Object *o)
{
    if (*(int *)0x8c4703c0 == 3) {
        if (o->f354 >= 0x78) {
            if (o->f398 > (o->f394 * 2.5f)) {
                o->f384 = 1;
            }
        }
    }
}
