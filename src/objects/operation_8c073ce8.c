typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xc];
    int f0c;
};
extern int operation_194d60(unsigned short);
extern void call_8c073d18(Object *, int);
void operation_8c073ce8(Object *o, int a1)
{
    int t1;
    if (o->f0c == -1) {
        t1 = operation_194d60((unsigned short)a1);
        o->f0c = t1;
    }
    call_8c073d18(o, a1);
}
