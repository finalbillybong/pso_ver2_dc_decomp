typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be84 S_g8c44be84;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
};
extern void call_8c09cc48(void);
extern int allocate_block(void *, unsigned int);
extern void initialize_color_rise(int, void *, void *);
void operation_8c09cddc(Object *o)
{
    int v1;
    int t1;
    call_8c09cc48();
    v1 = (int)(*(int *)0x8c46ec2c == 3);
    if (v1 != 0) {
        t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x2c);
        if (t1 != 0) {
            initialize_color_rise(t1, (void *)(*(S_g8c44be84 **)0x8c44be84), (void *)(o->f20));
        }
    }
}
