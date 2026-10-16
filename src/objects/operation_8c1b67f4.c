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
void operation_8c1b67f4(Object *o)
{
    float v1;
    v1 = (float)((float)o->f39c / 30.0f);
    call_8c1adcfc(o, 0xffffff, v1 * v1 * v1 * v1);
    if (!(--o->f39c > 0)) {
        call_8c1ae010(o, 4);
    }
}
