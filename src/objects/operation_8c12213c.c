typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_54 Arg0_54;
struct Object {
    char unknown0[0x44];
    float f44;
    char unknown48[0xc];
    Arg0_54 *f54;
};
extern float call_8c12b570(float);
int operation_8c12213c(Object *o)
{
    float t1;
    t1 = call_8c12b570(o->f44);
    return (int)(&*(int *)((char *)((char *)o->f54 + 0x0) + ((int)t1 << 2)));
}
