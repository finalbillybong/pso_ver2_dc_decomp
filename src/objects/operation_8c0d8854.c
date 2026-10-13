typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x30a];
    short f30a;
};
extern void operation_8c059ea4(void *, int);
extern void reset_segments_8c05a124(void *);
void operation_8c0d8854(Object *o)
{
    if (o->f30a != 0xf) {
        operation_8c059ea4((void *)o, 0xf);
    }
    reset_segments_8c05a124((void *)o);
}
