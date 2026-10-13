typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1e];
    int f24;
};
extern int call_8c0ed3a0(void);
extern void call_8c01c1a4(int);
void operation_8c0ed428(Object *o)
{
    int t1;
    t1 = call_8c0ed3a0();
    switch (t1) {
    case 1:
        switch (o->f24) {
        case 0:
            call_8c01c1a4(6);
            break;
        case 1:
            call_8c01c1a4(0xa);
            break;
        case 2:
            call_8c01c1a4(8);
        }
        o->f04 |= 1;
        return;
    case 2:
        o->f04 |= 1;
        call_8c01c1a4(2);
    }
}
