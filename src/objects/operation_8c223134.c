typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x22e6];
    int f22ec;
};
extern int call_8c03ed64(void);
extern void call_8c03ed70(void *);
void operation_8c223134(Object *o)
{
    int t1;
    if (o->f22ec != 0) {
        ((void (*)(void))(o->f22ec))();
    }
    t1 = call_8c03ed64();
    if (t1 == 0) {
        call_8c03ed70((void *)0x8c2e198b);
    }
    o->f04 |= 1;
}
