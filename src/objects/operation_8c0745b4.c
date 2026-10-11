typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xe6];
    short fe6;
    char unknowne8[0x54];
    void *f13c;
};
extern void *lookup_low_id(int);
void operation_8c0745b4(Object *o, int a1)
{
    void *t1;
    o->fe6 = a1;
    t1 = lookup_low_id((unsigned short)a1);
    o->f13c = t1;
}
