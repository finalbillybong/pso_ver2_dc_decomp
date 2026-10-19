typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    float tag;
    char unknown4[0xc];
    float f10;
    char unknown14[0x4];
    float dispatch;
};
int operation_8c1148c8(Object *o)
{
    int v12;
    o->dispatch += o->f10;
    if (!(o->dispatch > 0.0f)) {
        o->tag = -1.0f;
    } else {
        if (1.0f > o->dispatch) {
            o->tag = o->dispatch - 1.0f;
        } else {
            if (2.0f > o->dispatch) {
                o->tag = 1.0f - o->dispatch;
            } else {
                o->tag = -1.0f;
            }
        }
    }
    v12 = (int)(2.0f <= o->dispatch);
    return (int)(v12);
}
