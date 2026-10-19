typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
struct Object {
    char unknown0[0x3e0];
    int f3e0;
};
struct Frame {
    Vector3 f00;
};
extern Vector3 g_8c3071a8;
extern void call_8c05ba9c(Object *);
void operation_8c0d4dfc(Object *o)
{
    Frame frame;
    if (((o->f3e0 & 0x80000)) == 0) {
        {
            Vector3 *p_ = (Vector3 *)&g_8c3071a8;
            *(Vector3 *)&(&frame)->f00 = *p_;
        }
        call_8c05ba9c(o);
    }
}
