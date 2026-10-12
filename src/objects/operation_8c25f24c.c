typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    int f20;
    int f24;
    int f28;
};
extern int call_8c25f314(void);
extern int call_8c25f3b0(Object *);
extern void call_8c25f2cc(Object *);
void operation_8c25f24c(Object *o)
{
    int t1;
    int t2;
    if (o->f24 == 0) {
        t1 = call_8c25f314();
        if (t1 != 0) {
            t2 = call_8c25f3b0(o);
            if (t2 != 0) {
                call_8c25f2cc(o);
                o->f28 = 0x12c;
                o->f20 = 1;
            }
        }
    }
}
