typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    float dispatch;
    float f1c;
};
int operation_8c1430e0(Object *o)
{
    if (o->tag != 0) {
        if (o->tag == 1) {
            goto L_8c143116;
        }
        if (o->tag == 2) {
            goto L_8c14313c;
        }
    } else {
        o->f10 += o->f04;
        if (o->f0c < o->f10) {
            o->f10 = o->f0c;
            o->tag = 1;
            goto L_8c14315a;
L_8c143116:;
            if (o->dispatch > o->f1c) {
                o->f10 -= o->f08;
                o->tag = 2;
                goto L_8c14315a;
L_8c14313c:;
                o->f10 -= o->f08;
                if (0.0f > o->f10) {
                    o->f10 = 0.0f;
                    o->tag = 3;
                }
            }
        }
    }
L_8c14315a:;
    o->dispatch += o->f10;
    if (o->f14 < o->dispatch) {
        o->dispatch = o->f14;
    }
    return (int)(o->tag);
}
