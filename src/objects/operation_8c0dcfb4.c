typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct Arg0_34 Arg0_34;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x12];
    Arg0_34 *f34;
};
struct Arg0_34 {
    char unknown0[0x4];
    unsigned short f04;
};
extern int lookup_low_id(int);
extern void operation_8c0dc79c(void *);
extern void operation_8c0dc710(void *);
void operation_8c0dcfb4(Object *o)
{
    int t1;
    if (o->f34 != 0 && ((o->f34->f04 & 4)) == 0) {
        t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
        if (t1 == 0 || ((o->f20 & 1)) != 0 || ((o->f20 & 0x40)) != 0) {
            operation_8c0dc79c((void *)(o->f34));
            return;
        }
        operation_8c0dc710((void *)(o->f34));
    }
}
