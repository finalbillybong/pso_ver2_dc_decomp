typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x3c];
    int f3c;
    unsigned short f40;
    char unknown42[0xe];
    int f50;
};
extern int lookup_low_id(int);
extern void call_8c168670(Object *);
extern void call_8c168608(Object *);
void operation_8c1685c8(Object *o)
{
    int t1;
    t1 = lookup_low_id((int)(o->f40));
    o->f3c = (int)(t1);
    if (o->f50 != 0) {
        call_8c168670(o);
        return;
    }
    call_8c168608(o);
}
