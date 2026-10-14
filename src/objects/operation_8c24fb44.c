typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x234];
    int f234;
    char unknown238[0x4];
    float f23c;
    char unknown240[0x1c];
    int f25c;
    int f260;
};
void operation_8c24fb44(Object *o)
{
    if (o->f234 != 1) {
        if (o->f234 == 2) {
            goto L_8c24fb7c;
        }
        if (o->f234 == 3) {
            goto L_8c24fba0;
        }
        return;
    }
    o->f23c -= 0.299999982f;
    if (!(o->f23c > 0.0f)) {
        o->f23c = 0.0f;
        o->f234 = 0;
        return;
L_8c24fb7c:;
        o->f23c += 0.299999982f;
        if (!(0.9f > o->f23c)) {
            o->f23c = 0.9f;
            o->f234 = 3;
            return;
L_8c24fba0:;
            o->f234 = 1;
            o->f260 = 1;
            o->f25c = 1;
        }
    }
}
