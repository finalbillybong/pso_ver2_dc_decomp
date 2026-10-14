typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x39c];
    int f39c;
};
extern void call_8c1adadc(void);
extern void call_8c1ae374(Object *, int);
extern void refresh_records_8c1ada14(Object *);
extern void operation_8c22b530(int);
extern void operation_8c100618(int);
void operation_8c1b66ec(Object *o)
{
    call_8c1adadc();
    call_8c1ae374(o, 1);
    refresh_records_8c1ada14(o);
    operation_8c22b530((int)o);
    operation_8c100618(1);
    o->f39c = 0x78;
}
