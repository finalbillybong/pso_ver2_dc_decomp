typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x28];
    int f28;
};
extern void call_8c25fba0(void);
extern void operation_8c25fbdc(void *);
void operation_8c25fb70(Object *o)
{
    if (o->f28 != 0) {
        if (o->f28 != 1) {
            return;
        }
    } else {
        call_8c25fba0();
        return;
    }
    operation_8c25fbdc((void *)o);
}
