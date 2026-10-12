typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x270];
    int f270;
};
extern void call_8c244730(void);
void operation_8c244710(Object *o)
{
    call_8c244730();
    o->f270 = 1;
}
