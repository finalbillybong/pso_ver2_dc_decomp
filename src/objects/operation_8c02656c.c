typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x380];
    int f380;
};
extern int word_operation_8c02c32c(Object *);
void operation_8c02656c(Object *o)
{
    int t1;
    int t2;
    o->f380 = 0;
    t1 = word_operation_8c02c32c(o);
    if (((t1 & 2)) != 0) {
        t2 = word_operation_8c02c32c(o);
        if ((t2 & 0x84) == 0x84) {
            o->f380 = 2;
            return;
        }
        o->f380 = 1;
    }
}
