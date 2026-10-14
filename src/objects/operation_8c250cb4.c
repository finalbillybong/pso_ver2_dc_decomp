typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_238 Arg0_238;
struct Object {
    char unknown0[0x238];
    Arg0_238 *f238;
};
extern void operation_172c14(void *, int);
void operation_8c250cb4(Object *o)
{
    operation_172c14((void *)(((char *)o + 0x234)), (int)(o->f238));
}
