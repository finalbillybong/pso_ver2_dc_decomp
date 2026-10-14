typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x13c];
    int f13c;
    unsigned char f140;
};
extern int call_8c03b55c(int, int);
extern void raise_level_8c07653c(void *, unsigned char);
void operation_8c24d108(Object *o)
{
    int t1;
    t1 = call_8c03b55c((int)((int)o->f13c + 0xbcc), 6);
    if (t1 != 0) {
        raise_level_8c07653c((void *)t1, (unsigned char)(o->f140));
    }
}
