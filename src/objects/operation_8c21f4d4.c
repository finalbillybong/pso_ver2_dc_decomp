typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
};
extern int call_8c21f5b0(int, int);
extern void call_8c21f524(int, int, int, int, int, int, int);
void operation_8c21f4d4(Object *o, int a1, int a2, int a3, int a4, int a5)
{
    int t1;
    t1 = call_8c21f5b0((int)o, 0);
    if (!(t1 >= 0xc)) {
        call_8c21f524((int)o, t1, a1, a2, a3, a4, a5);
        o->tag |= 1;
    }
}
