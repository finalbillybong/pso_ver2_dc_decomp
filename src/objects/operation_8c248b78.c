typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x23c];
    float f23c;
    int f240;
};
void operation_8c248b78(Object *o)
{
    if (o->f240 != 1) {
        if (o->f240 == 2) {
            goto L_8c248bb4;
        }
        if (o->f240 == 3) {
            goto L_8c248bdc;
        }
        return;
    }
    if (o->f23c > 0.0f) {
        o->f23c -= 0.5f;
        if (!(o->f23c > 0.0f)) {
            o->f23c = 0.0f;
            o->f240 = 0;
            return;
L_8c248bb4:;
            if (1.4f > o->f23c) {
                o->f23c += 0.5f;
                if (!(1.4f > o->f23c)) {
                    o->f23c = 1.4f;
                    o->f240 = 3;
                    return;
L_8c248bdc:;
                    o->f240 = 1;
                }
            }
        }
    }
}
