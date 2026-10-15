typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    int f20;
};
extern void call_8c231df0(void);
extern void operation_8c231e98(void *);
extern void call_8c231ebc(Object *);
extern void operation_8c231f60(void *);
void operation_8c231d9c(Object *o)
{
    call_8c231df0();
    if (o->f20 != 0) {
        if (o->f20 == 1) {
            goto L_8c231dc4;
        }
        if (o->f20 == 2) {
            goto L_8c231dce;
        }
        return;
    }
    operation_8c231e98((void *)o);
    return;
L_8c231dc4:;
    call_8c231ebc(o);
    return;
L_8c231dce:;
    operation_8c231f60((void *)o);
}
