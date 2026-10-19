typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_18c Arg0_18c;
struct Object {
    char unknown0[0x2c];
    int f2c;
    char unknown30[0x146];
    char f176;
    char unknown177[0x15];
    Arg0_18c *f18c;
};
extern int call_8c0ec9a4(Object *);
extern void call_8c05fbf8(int, int, int, int);
extern void request_resource_release(void *);
extern void operation_8c199b14(void);
extern void operation_8c1b0308(void);
void operation_8c0ed080(Object *o)
{
    int t1;
    t1 = call_8c0ec9a4(o);
    o->f2c = (int)(t1);
    switch (o->f2c) {
    case 1:
        call_8c05fbf8(0x50001, 0, 0, 0);
        o->f176 = 1;
        if (o->f18c != 0) {
            request_resource_release((void *)(o->f18c));
            o->f18c = (Arg0_18c *)0;
        }
        operation_8c199b14();
        operation_8c1b0308();
        return;
    case 2:
        call_8c05fbf8(0x50016, 0, 0, 0);
        o->f176 = 1;
        if (o->f18c != 0) {
            request_resource_release((void *)(o->f18c));
            o->f18c = (Arg0_18c *)0;
        }
        operation_8c199b14();
        operation_8c1b0308();
    }
}
