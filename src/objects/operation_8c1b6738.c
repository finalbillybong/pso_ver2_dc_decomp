typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x39c];
    int f39c;
};
extern void call_8c1adcfc(Object *, int, float);
extern void call_8c1ae010(Object *, int);
void operation_8c1b6738(Object *o)
{
    int v1;
    float v2;
    v1 = (int)o->f39c;
    if (v1 > 0x71) {
        call_8c1adcfc(o, 0xffffff, (float)(v1 + -0x71) / 7.0f * ((float)(v1 + -0x71) / 7.0f));
    } else {
        if (0x20 > v1) {
            v2 = (float)(1.0f - (float)(v1 + -2) / 30.0f);
            if ((1.0f - (float)(v1 + -2) / 30.0f) > 1.0f) {
                v2 = (float)1.0f;
            }
            call_8c1adcfc(o, 0xffffff, v2 * v2);
        }
    }
    if (!(--o->f39c >= 0)) {
        call_8c1ae010(o, 3);
    }
}
