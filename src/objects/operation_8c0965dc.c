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
};
struct Arg0_24 {
    char unknown0[0x20];
    int f20;
};
extern int call_8c09a72c(int);
extern void call_8c05fbf8(int, int, int, int);
extern int operation_8c09a640(int);
void operation_8c0965dc(Object *o)
{
    int t1;
    int t2;
    int t3;
    t1 = call_8c09a72c(0x80);
    if (t1 != 0) {
        if (++*(int *)0x8c469e40 >= 9) {
            *(int *)0x8c469e40 = 0;
        }
        call_8c05fbf8(0x50000, 0, 0, 0);
    } else {
        t2 = call_8c09a72c(0x40);
        if (t2 != 0) {
            if (!(--*(int *)0x8c469e40 >= 0)) {
                *(int *)0x8c469e40 = 8;
            }
            call_8c05fbf8(0x50000, 0, 0, 0);
        }
    }
    t3 = operation_8c09a640(4);
    if (t3 != 0) {
        call_8c05fbf8(0x50001, 0, 0, 0);
        o->f24->f20 = 1;
        o->f20 = 1;
    }
}
