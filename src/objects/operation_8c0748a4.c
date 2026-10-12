typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
};
extern int call_8c192738(void);
extern void attach_and_insert_object(void *);
extern void operation_8c05428c(void *, int, int);
void operation_8c0748a4(Object *o, int a1)
{
    int t1;
    if (o->f20 == 0xffff) {
        t1 = call_8c192738();
        o->f20 = t1;
        attach_and_insert_object((void *)o);
        if (a1 != 0) {
            operation_8c05428c((void *)o, 0, 1);
        }
    }
}
