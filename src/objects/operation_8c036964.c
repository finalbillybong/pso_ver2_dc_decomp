typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418258 S_g8c418258;
typedef struct S_g8c418a00 S_g8c418a00;
typedef struct Object Object;
struct Object {
    char unknown0[0x1];
    unsigned char f01;
};
extern int call_8c01c25c(void);
extern void call_8c036d04(int);
extern void call_8c02f138(void *, void *, Object *, int);
void operation_8c036964(Object *o)
{
    int t1;
    t1 = call_8c01c25c();
    if (t1 == 0xf) {
        *(int *)0x8c4627c8 = 1;
        call_8c036d04((int)o);
        *(int *)0x8c4627c8 = 0;
        return;
    }
    if (*(int *)0x8c418a00 != 0) {
        call_8c02f138(*(S_g8c418a00 **)0x8c418a00, *(S_g8c418258 **)0x8c418258, o, o->f01 << 2);
    }
}
