typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_50 Arg0_50;
struct Object {
    char unknown0[0x24];
    Arg0_24 *f24;
    char unknown28[0x28];
    Arg0_50 *f50;
};
extern int operation_8c1cdc80(void *);
extern void operation_8c1dc6e4(int);
extern void call_8c217ed8(void *);
void operation_8c2177c0(Object *o)
{
    int t1;
    t1 = operation_8c1cdc80((void *)(o->f24));
    operation_8c1dc6e4(t1);
    call_8c217ed8((void *)(o->f50));
}
