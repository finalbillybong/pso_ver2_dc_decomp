typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_2c Arg0_2c;
struct Object {
    char unknown0[0x20];
    char f20;
    char unknown21[0x7];
    Arg0_28 *f28;
    Arg0_2c *f2c;
};
extern int lookup_low_id(int);
extern void call_8c024570(int);
extern void request_resource_release(void *);
void operation_8c1a3c8c(Object *o, int a1)
{
    int t1;
    t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    if (t1 != 0) {
        if (a1 != 0) {
            if (a1 == 1) {
                goto L_8c1a3cc2;
            }
            return;
        }
        call_8c024570(t1);
        o->f20 = 0x16;
        return;
L_8c1a3cc2:;
        if (o->f2c != 0) {
            request_resource_release((void *)(o->f2c));
            o->f2c = (Arg0_2c *)0;
        }
        if (o->f28 != 0) {
            request_resource_release((void *)(o->f28));
            o->f28 = (Arg0_28 *)0;
        }
        o->f20 = 0xa;
    }
}
