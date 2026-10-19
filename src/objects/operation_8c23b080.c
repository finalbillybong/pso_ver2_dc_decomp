typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x234];
    int f234;
    int f238;
};
void operation_8c23b080(Object *o)
{
    int v1;
    if (o->f238 != 0) {
        *(int *)((char *)o + 0x234) += 0x38e;
        v1 = (int)0x1555;
        if (!(o->f234 >= v1)) {
            return;
        }
        o->f234 = (int)(v1);
        o->f238 = 0;
        return;
    }
    *(int *)((char *)o + 0x234) -= 0x38e;
    if (!(o->f234 > 0)) {
        o->f234 = 0x1555;
        o->f238 = 1;
    }
}
