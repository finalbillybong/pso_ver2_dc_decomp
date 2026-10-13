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
extern void call_8c080dac(void);
extern void operation_8c080d70(void *);
void operation_8c080d3c(Object *o)
{
    if (o->fec != 0) {
        if (o->fec != 1) {
            return;
        }
    } else {
        call_8c080dac();
        return;
    }
    operation_8c080d70((void *)o);
}
