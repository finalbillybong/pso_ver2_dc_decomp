typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x30a];
    short f30a;
    char unknown30c[0xd8];
    int f3e4;
};
extern void operation_8c059ea4(void *, int);
extern void reset_segments_8c05a124(void *);
void operation_8c0c9134(Object *o)
{
    if (o->f30a != 8) {
        if (((o->f3e4 & 8)) == 0) {
            operation_8c059ea4((void *)o, 8);
            return;
        }
        reset_segments_8c05a124((void *)o);
    }
}
