typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
};
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0x8];
    int f30;
};
extern void operation_8c220b34(int, int);
extern int allocate_block(void *, unsigned int);
extern void operation_8c2506a8(void *, int);
extern void call_8c220c40(int, int);
void operation_8c20866c(Object *o)
{
    Frame frame;
    int t1;
    (&frame)->f08 = 18.0f;
    (&frame)->f0c = 355.0f;
    (&frame)->f00 = 342.0f;
    (&frame)->f04 = 90.0f;
    operation_8c220b34((int)(&(&frame)->f08), (int)(&frame));
    if (*(int *)0x8c4dc800 == 0) {
        t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x84);
        if (t1 != 0) {
            operation_8c2506a8((void *)t1, (int)o);
        }
    }
    call_8c220c40(1, 1);
    o->f30 = 0;
    o->f24 = 3;
}
