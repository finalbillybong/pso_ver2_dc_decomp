typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    short f06;
    short f08;
    short f0a;
};
extern int call_8c18e768(int, int);
int operation_8c207304(Object *o)
{
    int t1;
    int t2;
    int t3;
    int t4;
    t4 = call_8c18e768((int)(o->f08), 0x64);
    t3 = call_8c18e768((int)(o->f0a), 0x64);
    t1 = call_8c18e768((int)(o->f04), 0x64);
    t2 = call_8c18e768((int)(o->f06), 0x64);
    return t1 + t2 + t3 + t4;
}
