typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
struct Object {
    char unknown0[0x24];
    Arg0_24 *f24;
};
extern int call_8c1e2368(void *);
extern int call_8c18de4c(int);
extern void call_8c1e23d4(void *, int);
int operation_8c051d18(Object *o)
{
    int t1;
    int t2;
    t1 = call_8c1e2368(o->f24);
    t2 = call_8c18de4c(t1);
    call_8c1e23d4(o->f24, t2);
    return t2;
}
