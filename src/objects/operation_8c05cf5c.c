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
extern void operation_8c05d018(void *);
extern void reset_segments_8c05a124(void *);
extern void operation_8c059ea4(void *, int);
void operation_8c05cf5c(Object *o)
{
    if (o->f30a != 9) {
        if (o->f30a == 8) {
            operation_8c05d018((void *)o);
            reset_segments_8c05a124((void *)o);
            return;
        }
        operation_8c059ea4((void *)o, 9);
    }
}
