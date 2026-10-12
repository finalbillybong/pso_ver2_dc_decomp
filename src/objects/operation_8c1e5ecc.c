typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_18 Arg0_18;
struct Object {
    char unknown0[0x18];
    Arg0_18 *dispatch;
};
extern void call_8c18de08(void *);
extern int call_8c257e2c(int);
extern int call_8c18de4c(int);
extern void call_8c12b154(void *, int, int);
void operation_8c1e5ecc(Object *o, int a1)
{
    int t1;
    int t2;
    call_8c18de08(o->dispatch);
    o->dispatch = (Arg0_18 *)0;
    if (a1 != 0) {
        t1 = call_8c257e2c(a1);
        t2 = call_8c18de4c(t1 + 1);
        o->dispatch = (Arg0_18 *)t2;
        call_8c12b154(o->dispatch, a1, t1 + 1);
    }
}
