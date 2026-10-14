typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x2c];
    int f2c;
};
extern void operation_8c1afac8(void *);
extern void call_8c1afb74(void);
void operation_8c1afa58(Object *o)
{
    if (o->f2c != 0) {
        if (o->f2c != 1) {
            if (o->f2c != 2) {
                return;
            }
        } else {
            operation_8c1afac8((void *)o);
            return;
        }
        call_8c1afb74();
    }
}
