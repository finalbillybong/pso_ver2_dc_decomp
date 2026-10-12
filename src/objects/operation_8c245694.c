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
    int f10;
};
extern int call_8c011ecc(int);
extern void construct_random_state(void *);
extern int call_8c18de4c(int);
Object *operation_8c245694(Object *o, int a1)
{
    int t1;
    int t2;
    t1 = call_8c011ecc(0xe8);
    if (t1 != 0) {
        construct_random_state((void *)t1);
    }
    o->tag = t1;
    t2 = call_8c18de4c(a1 << 2);
    o->f04 = t2;
    o->f08 = 0;
    o->f0c = a1;
    o->f10 = a1;
    return o;
}
