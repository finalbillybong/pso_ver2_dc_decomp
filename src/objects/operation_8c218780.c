typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
    int f04;
    int f08;
    int f0c;
};
extern int call_8c18de4c(int);
extern void call_8c2187e8(Object *);
Object *operation_8c218780(Object *o, int a1, int a2)
{
    int t1;
    o->f0c = 0;
    o->f04 = a1;
    o->tag = a2;
    t1 = call_8c18de4c(a2);
    o->f08 = t1;
    call_8c2187e8(o);
    return o;
}
