typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_9c Arg0_9c;
struct Object {
    char unknown0[0x9c];
    Arg0_9c *f9c;
};
extern void operation_8c156838(void *);
extern int operation_192b4c(void *);
extern void operation_8c1571d4(void *, int);
extern void operation_8c207160(void *);
void operation_8c207028(Object *o)
{
    int t1;
    operation_8c156838((void *)o);
    t1 = operation_192b4c((void *)(o->f9c));
    if (t1 != 0) {
        operation_8c1571d4((void *)o, 0);
        operation_8c207160((void *)o);
    }
}
