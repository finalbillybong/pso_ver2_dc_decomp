typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x2b];
    char f2b;
};
extern void call_8c12b880(void *, int, int);
void operation_8c011148(Object *o)
{
    call_8c12b880((void *)(((char *)o + 0x74)), 0, 0x800);
    o->f2b = 1;
}
