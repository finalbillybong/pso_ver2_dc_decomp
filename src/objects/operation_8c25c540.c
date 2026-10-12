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
extern int call_8c25c6a8(void);
extern void call_8c25c574(Object *);
extern void call_8c25c664(Object *);
void operation_8c25c540(Object *o)
{
    int t1;
    t1 = call_8c25c6a8();
    if (t1 == 0) {
        o->f20 = 0;
        return;
    }
    call_8c25c574(o);
    call_8c25c664(o);
}
