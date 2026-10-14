typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_98 Arg0_98;
typedef struct Arg0_9c Arg0_9c;
struct Object {
    char unknown0[0x94];
    float f94;
    Arg0_98 *f98;
    Arg0_9c *f9c;
    int fa0;
};
extern int operation_8c100e14(int, float);
extern void call_8c05fd7c(void *, Object *, void *, int, int);
void operation_8c100c7c(Object *o)
{
    int t1;
    t1 = operation_8c100e14((int)o, (float)(o->f94 * o->f94));
    if (t1 != 0 && o->fa0 != 0) {
        if (o->fa0 != 1) {
            if (o->fa0 != 2) {
                return;
            }
        } else {
            call_8c05fd7c((void *)(o->f9c), o, (void *)(((char *)o + 0x3c)), 0, 0);
            return;
        }
        call_8c05fd7c((void *)(o->f9c), o, (void *)(((char *)o + 0x3c)), (int)(o->f98), 0);
    }
}
