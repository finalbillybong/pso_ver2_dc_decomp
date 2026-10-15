typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x136];
    unsigned char f136;
};
extern int call_8c07ef4c(Object *);
extern void call_8c07fd18(Object *, int);
void operation_8c07e998(Object *o)
{
    int t1;
    t1 = call_8c07ef4c(o);
    switch (o->f136) {
    case 1:
        if (((t1 & 0x108)) != 0) {
            call_8c07fd18(o, 0xe);
            return;
        }
        if (((t1 & 0x10)) != 0) {
            call_8c07fd18(o, 0xf);
            return;
        }
        if (((t1 & 0x20)) == 0) {
            return;
        }
        call_8c07fd18(o, 4);
        return;
    case 13:
        if (((t1 & 0x110)) != 0) {
            call_8c07fd18(o, 2);
            return;
        }
        if (((t1 & 8)) != 0) {
            call_8c07fd18(o, 3);
            return;
        }
        if (((t1 & 0x20)) == 0) {
            return;
        }
        call_8c07fd18(o, 0xb);
        return;
    case 25:
        if (((t1 & 0x120)) != 0) {
            call_8c07fd18(o, 0x1a);
            return;
        }
        if (((t1 & 8)) != 0) {
            call_8c07fd18(o, 0x1b);
            return;
        }
        if (((t1 & 0x10)) != 0) {
            call_8c07fd18(o, 0x14);
        }
    }
}
