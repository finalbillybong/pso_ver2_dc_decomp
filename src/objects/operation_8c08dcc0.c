typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    Vector3 f20;
    char unknown2c[0x94];
    short fc0;
    char unknownc2[0x2];
    short fc4;
    char unknownc6[0x6];
    Vector3 fcc;
    char unknownd8[0xc];
    float fe4;
    float fe8;
    float fec;
};
extern void call_8c12b880(void *, int, int);
extern int advance_counter_8c01d5fc(int);
void operation_8c08dcc0(Object *o)
{
    int t1;
    call_8c12b880((void *)(&o->fc0), 0, 0x3c);
    o->fc0 = -1;
    t1 = advance_counter_8c01d5fc(0);
    o->fc4 = t1;
    o->fcc = o->f20;
    o->fe4 = 1.0f;
    o->fe8 = 1.0f;
    o->fec = 1.0f;
}
