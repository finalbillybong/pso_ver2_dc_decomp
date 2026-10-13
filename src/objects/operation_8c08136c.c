typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xec];
    int fec;
};
extern void call_8c0813dc(void);
extern void operation_8c0813a0(void *);
void operation_8c08136c(Object *o)
{
    if (o->fec != 0) {
        if (o->fec != 1) {
            return;
        }
    } else {
        call_8c0813dc();
        return;
    }
    operation_8c0813a0((void *)o);
}
