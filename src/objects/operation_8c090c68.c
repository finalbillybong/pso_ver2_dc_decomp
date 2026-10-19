typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x370];
    float f370;
};
extern float call_8c12b570(float);
extern void call_8c0911a4(Object *);
extern void call_8c0911c8(Object *);
void operation_8c090c68(Object *o)
{
    float t1;
    t1 = call_8c12b570(o->f370);
    if ((int)t1 == 0) {
        call_8c0911a4(o);
        return;
    }
    call_8c0911c8(o);
}
