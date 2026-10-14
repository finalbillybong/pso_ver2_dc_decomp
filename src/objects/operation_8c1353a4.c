typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x70];
    float f70;
    char unknown74[0xac];
    float f120;
    char unknown124[0x8];
    int f12c;
};
void operation_8c1353a4(Object *o)
{
    if (o->f12c == 1) {
        o->f120 += 0.1f;
        if (1.0f > o->f120) {
            goto L_8c1353ec;
        }
        o->f12c = 0;
    } else {
        o->f120 -= 0.1f;
        if (!(o->f120 > 0.0f)) {
            o->f12c = 1;
        }
    }
L_8c1353ec:;
    if (0.0f > o->f70) {
        o->f70 -= -0.0233333334f;
    }
}
