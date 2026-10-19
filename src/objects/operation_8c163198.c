typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x1];
    unsigned char f01;
};
int operation_8c163198(Object *o)
{
    char *v6;
    int t1;
    if (o != 0 && (unsigned int)4 > (unsigned int)o->f01) {
        v6 = (char *)*(int *)((char *)0x8c317320 + (o->f01 << 2));
        if (v6 != 0) {
            t1 = ((int (*)(void))(v6))();
            return (int)(t1);
        }
    }
    return 0;
}
