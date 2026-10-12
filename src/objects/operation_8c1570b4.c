typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x44];
    float f44;
    char unknown48[0x8];
    float f50;
    float f54;
    char unknown58[0x10];
    float f68;
    float f6c;
    char unknown70[0x1c];
    float f8c;
};
extern void call_8c15700c(void);
extern void operation_8c157690(void *);
extern void call_8c0dc854(Object *);
extern void call_8c157764(Object *);
void operation_8c1570b4(Object *o, float f0, float f1)
{
    call_8c15700c();
    if (o->f44 > f1) {
        operation_8c157690((void *)o);
    }
    o->f44 = f1;
    o->f8c = f1 - 26.0f;
    call_8c0dc854(o);
    o->f68 = o->f50 * 0.5f;
    o->f6c = o->f54 * 0.5f;
    call_8c157764(o);
}
