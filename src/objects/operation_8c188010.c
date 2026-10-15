typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    short f20;
    char unknown22[0x66];
    int f88;
    char unknown8c[0x58];
    float fe4;
    char unknowne8[0x4];
    int fec;
};
struct Frame {
    char f00;
    char f01;
    short f02;
    int f04;
    int f08;
    int f0c;
};
extern int g_8c418248;
extern int g_8c44be04;
extern int call_8c18821c(Object *, float);
extern void operation_8c0368a8(void *);
extern void operation_8c09e710(void *, int);
void operation_8c188010(Object *o)
{
    Frame frame;
    int t1;
    if (!(--o->fec > 0)) {
        t1 = call_8c18821c(o, o->fe4 * o->fe4);
        if (t1 == 1) {
            (&frame)->f00 = 0x67;
            (&frame)->f01 = 4;
            (&frame)->f02 = o->f20;
            (&frame)->f04 = (int)(g_8c44be04);
            (&frame)->f08 = (int)(o->f88);
            (&frame)->f0c = (int)(g_8c418248);
            operation_8c0368a8((void *)(&frame));
            operation_8c09e710((void *)o, 8);
            o->f04 |= 1;
        }
    }
}
