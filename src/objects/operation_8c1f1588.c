typedef struct Object Object;
struct Object {
    float tag;
    char unknown4[0x14];
    int dispatch;
};
void operation_8c1f1588(Object *o)
{
    float v1;
    v1 = o->tag;
    if (o->dispatch == 0) {
        v1 += 0.04f;
        if (v1 > 0.0f) {
            v1 = 0.0f;
        }
    } else {
        v1 -= 0.04f;
        if (-1.0f > v1) {
            v1 = -1.0f;
        }
    }
    o->tag = v1;
}
