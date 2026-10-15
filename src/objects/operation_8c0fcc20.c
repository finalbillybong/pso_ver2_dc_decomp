typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x1c];
    int f20;
    float f24;
    float f28;
    float f2c;
};
extern void call_8c05fd7c(int, Object *, int, int, int);
extern float call_8c12c714(float);
void operation_8c0fcc20(Object *o)
{
    float t1;
    float t2;
    if (o->f28 != o->f24) {
        if (((o->tag & 8)) != 0) {
            call_8c05fd7c(0x40003, o, 0, 0, 0);
        }
        t2 = call_8c12c714(o->f28 - o->f24);
        t1 = call_8c12c714(o->f2c);
        if (t1 > t2) {
            o->f24 = o->f28;
        } else {
            o->f24 += o->f2c;
        }
        o->f20 = (int)o->f24;
    }
}
