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
extern int call_8c1c9398(Object *);
int operation_8c163138(Object *o)
{
    char *v27;
    int t1;
    int t2;
    int t3;
    if (o != 0) {
        if ((unsigned int)0x89 > (unsigned int)o->f01) {
            v27 = (char *)*(int *)((char *)0x8c3170c0 + (o->f01 << 2));
            if (v27 == 0) {
                goto L_8c16317e;
            }
            t1 = ((int (*)(void))(v27))();
            return (int)(t1);
        }
        t2 = call_8c1c9398(o);
        if ((unsigned int)0xf > (unsigned int)(unsigned char)t2) {
            v27 = (char *)*(int *)((char *)0x8c3172e4 + ((unsigned char)t2 << 2));
            if (v27 != 0) {
                t3 = ((int (*)(Object *))(v27))(o);
                return (int)(t3);
            }
        }
    }
L_8c16317e:;
    return 0;
}
