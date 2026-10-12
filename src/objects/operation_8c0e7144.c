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
extern int call_8c0e717c(void);
int operation_8c0e7144(Object *o)
{
    int t1;
    int t2;
    if (o != 0) {
        if ((unsigned int)0xf > (unsigned int)o->f01) {
            t1 = ((int (*)(void))(*(int *)((char *)0x8c307fe4 + (o->f01 << 2))))();
            return t1;
        }
        t2 = call_8c0e717c();
        return t2;
    }
    return 0;
}
