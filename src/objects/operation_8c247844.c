typedef struct Object Object;
struct Object {
    char unknown0[0x2];
    char f02;
};
char operation_8c247844(Object *o)
{
    int v1;
    char c;
    c = o->f02;
    v1 = (int)0;
    if (c >= 0) {
        if (0xf >= c) {
            v1 = (int)1;
        }
    }
    if (v1 == 0) {
        c = 0;
    }
    return c;
}
