typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_98 Arg0_98;
struct Object {
    char unknown0[0x80];
    unsigned short f80;
    char unknown82[0x16];
    Arg0_98 *f98;
};
extern void call_8c1ccdc8(void);
extern int operation_192b4c(void *);
extern void call_8c21cac8(Object *);
void operation_8c21c904(Object *o)
{
    int t1;
    call_8c1ccdc8();
    if (((o->f80 & 0xffff & 2)) == 0) {
        t1 = operation_192b4c((void *)(o->f98));
        if (t1 != 0) {
            call_8c21cac8(o);
        }
    }
}
