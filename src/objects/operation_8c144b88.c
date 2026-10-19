typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x3dc];
    int f3dc;
};
extern void operation_8c05b744(void *);
extern int operation_8c05bbf8(void);
extern void call_8c144c30(Object *);
void operation_8c144b88(Object *o)
{
    int t1;
    operation_8c05b744((void *)o);
    if (((o->f3dc & 8)) == 0) {
        t1 = operation_8c05bbf8();
        if (t1 == 0) {
            return;
        }
    }
    call_8c144c30(o);
}
