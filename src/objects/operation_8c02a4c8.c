typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv5 S_vv5;
struct Object {
    char unknown0[0x2];
    unsigned short f02;
    int f04;
    Vector3 f08;
};
struct S_vv5 {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x1a];
    Vector3 f3c;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x2e8];
    int f350;
    char unknown354[0x3c];
    int f390;
};
extern int g_8c418248;
extern int call_8c0c4f08(void *);
extern void update_object_center(void *);
extern void operation_8c02b1e0(int);
extern void create_timed_actor_callback(unsigned short, short, void *);
extern void operation_8c0a1b78(void *);
extern void operation_8c02a594();
void operation_8c02a4c8(Object *o)
{
    Object *self = o;
    S_vv5 *v5;
    int t1;
    t1 = call_8c0c4f08((void *)(&self->f08)) == 0;
    if (t1) {
        if ((int)self->f02 == 0xffff) {
            v5 = (S_vv5 *)0;
        } else {
            t1 = (int)self->f02;
            if (0xc <= t1) {
                v5 = (S_vv5 *)0;
            } else {
                v5 = *(S_vv5 **)((char *)0x8c41ce2c + ((int)self->f02 << 2));
            }
        }
        if (v5 != 0) {
            char *v67;
            *(&v5->f3c) = *(Vector3 *)&self->f08;
            v67 = (char *)self->f04;
            v5->f390 = (int)(v67);
            v5->f64 = (int)(v67);
            update_object_center((void *)v5);
            v5->f350 |= 0x20000;
            operation_8c02b1e0((int)v5);
            create_timed_actor_callback(((int)v5->f20), 2, operation_8c02a594);
            t1 = (int)v5->f20 == g_8c418248;
            if (0 != (t1)) {
                operation_8c0a1b78((void *)v5);
            }
        }
    }
}
