typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x310];
    int f310;
};
extern int call_8c03b55c(int, int);
int operation_8c022ce0(Object *o)
{
    int t1;
    t1 = call_8c03b55c((int)((char *)o + 0xbcc), 6);
    if (t1 == 0) {
        return 0;
    }
    if (((o->f310 & 0xe0)) != 0) {
        return 0;
    }
    return 0;
}
