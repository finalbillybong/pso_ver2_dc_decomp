typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x30a];
    short f30a;
    char unknown30c[0xdc];
    int f3e8;
};
extern void reset_segments_8c05a124(void *);
extern void operation_8c059ea4(void *, int);
void operation_8c0c7ccc(Object *o)
{
    if (o->f30a != 5) {
        if (((o->f3e8 & 0x1000)) != 0) {
            reset_segments_8c05a124((void *)o);
            return;
        }
        operation_8c059ea4((void *)o, 5);
    }
}
