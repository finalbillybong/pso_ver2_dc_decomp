typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_34 Arg0_34;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    Arg0_34 *f34;
};
extern int operation_8c1cdc80(void *);
extern void call_8c1d4ba4(int, int);
void operation_8c1d4b78(Object *o)
{
    int t1;
    int t2;
    t1 = operation_8c1cdc80(o->f30);
    t2 = operation_8c1cdc80(o->f34);
    call_8c1d4ba4(t1, t2);
}
