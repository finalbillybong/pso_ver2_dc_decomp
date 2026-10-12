typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
struct Frame {
    int f00;
};
struct Object {
    char unknown0[0x22];
    short f22;
    short f24;
};
extern int call_8c011e9c(int);
extern void call_8c379038(int);
extern void call_8c37908a(Frame *);
extern void call_8c37904a(void);
extern void call_8c011ec0(int);
void operation_8c2273f8(Object *o)
{
    Frame frame;
    int t1;
    t1 = call_8c011e9c(0x4000);
    call_8c379038(t1);
    call_8c37908a((&frame));
    o->f22 = (&frame)->f00;
    o->f24 = (&frame)->f00;
    call_8c37904a();
    call_8c011ec0(t1);
}
