typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x81];
    char f81;
    char unknown82[0x4];
    short f86;
};
extern int call_8c21f468(void);
extern int call_8c21f454(void);
extern void call_8c2254ec(Object *);
void operation_8c224b6c(Object *o)
{
    int v1;
    int t1;
    int t2;
    t2 = call_8c21f468();
    v1 = (int)(0xc - t2);
    t1 = call_8c21f454();
    o->f86 = t1 + v1;
    call_8c2254ec(o);
    o->f81 = 2;
}
