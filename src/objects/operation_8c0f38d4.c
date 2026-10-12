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
extern void process_entries_8c0731d8(void *);
Object *operation_8c0f38d4(Object *o, int a1, int a2)
{
    int t1;
    if (a1 > 0) {
        t1 = call_8c18de4c(a1 << 2);
        o->tag = t1;
    } else {
        o->tag = 0;
    }
    o->f04 = a2;
    o->f08 = 0;
    o->f0c = a1;
    process_entries_8c0731d8((void *)o);
    return o;
}
