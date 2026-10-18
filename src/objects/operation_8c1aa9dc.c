typedef struct Object Object;
struct Object {
    char unknown0[0xc];
    int f0c;
    char unknown10[0xc];
    int f1c;
};
int operation_8c1aa9dc(Object *o)
{
    int v1;
    v1 = (int)(((o->f0c & 8)) != 0);
    if (v1 != 0) {
        return !(--o->f1c >= 0) ? (o->f0c |= 1, 1) : 0;
    }
    return 0;
}
