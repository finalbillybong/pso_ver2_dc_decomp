typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x394];
    int f394;
    int f398;
};
extern int operation_8c03d338(void);
extern void call_8c1ae010(Object *, int);
extern void operation_8c1adfe4(void *);
extern void call_8c1ae104(Object *);
extern void call_8c1ae154(Object *);
extern void call_8c1ad94c(Object *);
void operation_8c1ad870(Object *o)
{
    int t1;
    if (o->f398 != 0) {
        t1 = operation_8c03d338();
        if (t1 != 0) {
            call_8c1ae010(o, 0);
        }
    }
    operation_8c1adfe4((void *)o);
    if (o->f394 == 0) {
        call_8c1ae104(o);
    }
    call_8c1ae154(o);
    call_8c1ad94c(o);
}
