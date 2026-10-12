typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
struct Object {
    short tag;
};
struct Frame {
    char unknown0[0x4];
    int f04;
    char unknown8[0x8];
};
extern int call_8c09de44(Object *, Frame *);
int operation_8c09ddd0(Object *o)
{
    Frame frame;
    int t1;
    int t2;
    if (o->tag != -1) {
        t1 = call_8c09de44(o, (&frame));
        if (t1 >= 0) {
            t2 = ((int (*)(void *))((&frame)->f04))(((char *)o + 0x4));
            return t2;
        }
    }
    return 0;
}
