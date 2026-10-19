typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x30a];
    short f30a;
};
extern int operation_8c03d338(void);
extern void operation_8c257dec(Object *);
extern void operation_8c25784c(void *);
extern void operation_8c2578f4(void *);
void operation_8c2577f0(Object *o)
{
    int t1;
    t1 = operation_8c03d338();
    if (t1 == 1) {
        operation_8c257dec(o);
        return;
    }
    if (o->f30a != 0) {
        if (o->f30a == 1) {
            goto L_8c25782a;
        }
        o->f30a = 0;
    }
    operation_8c25784c((void *)o);
    return;
L_8c25782a:;
    operation_8c2578f4((void *)o);
}
