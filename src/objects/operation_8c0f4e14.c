typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x30a];
    short f30a;
    char unknown30c[0xd0];
    int f3dc;
};
extern void operation_8c0f5348(void *);
extern void reset_segments_8c05a124(void *);
extern void operation_8c059ea4(void *, int);
void operation_8c0f4e14(Object *o)
{
    if (o->f30a != 9 && o->f30a != 8) {
        operation_8c0f5348((void *)o);
    }
    if (((o->f3dc & 4)) != 0) {
        reset_segments_8c05a124((void *)o);
        return;
    }
    if (o->f30a != 9) {
        operation_8c059ea4((void *)o, 9);
    }
}
