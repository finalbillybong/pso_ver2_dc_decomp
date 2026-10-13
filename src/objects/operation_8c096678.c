typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
struct Object {
    char unknown0[0x20];
    int f20;
    Arg0_24 *f24;
    int f28;
};
struct Arg0_24 {
    char unknown0[0x20];
    int f20;
};
extern int call_8c09a640(int);
extern void call_8c05fbf8(int, int, int, int);
void operation_8c096678(Object *o)
{
    int t1;
    int t2;
    t1 = call_8c09a640(2);
    if (t1 != 0) {
        call_8c05fbf8(0x50004, 0, 0, 0);
        o->f24->f20 = 0;
        o->f20 = 0;
        return;
    }
    t2 = call_8c09a640(4);
    if (t2 != 0) {
        call_8c05fbf8(0x50001, 0, 0, 0);
        o->f24->f20 = 2;
        o->f28 = 0xa;
        o->f20 = 2;
    }
}
