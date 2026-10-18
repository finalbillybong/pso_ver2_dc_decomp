typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x108];
    int f108;
    int f10c;
    int f110;
    int f114;
    int f118;
};
extern int lookup_low_id(int);
extern int angle_between_xz(void *, void *);
extern void operation_8c022034(void *, int, int);
void operation_8c1135b4(Object *o, int a1)
{
    int t1;
    int t2;
    if (o->f108 != 2) {
        if (o->f108 == 0 && o->f10c == 1) {
            return;
        }
        t1 = lookup_low_id((int)((unsigned short)a1));
        if (t1 != 0) {
            t2 = angle_between_xz((void *)(t1 + 0x3c), (void *)(((char *)o + 0x3c)));
            operation_8c022034((void *)t1, 0xc, t2);
            o->f114 = (int)(o->f110);
            o->f118 = 1;
        }
    }
}
