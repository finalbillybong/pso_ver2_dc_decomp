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
extern void operation_8c1add7c(void *);
void operation_8c1b7190(Object *o)
{
    float v1;
    float v2;
    if (o->f39c > 0x1bc) {
        v1 = (float)((float)((int)o->f39c + -0x1bc) / 6.0f);
        v2 = (float)v1;
        if (v1 > 1.0f) {
            v2 = (float)1.0f;
        }
        call_8c1adcfc(o, 0xffffff, v2);
    }
    if (!(--o->f39c >= 0)) {
        operation_8c1add7c((void *)o);
    }
}
