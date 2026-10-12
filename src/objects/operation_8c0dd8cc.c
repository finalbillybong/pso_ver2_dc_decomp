typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_4c Arg0_4c;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x2a];
    Arg0_4c *f4c;
};
extern void call_8c0dc79c(void *);
extern void call_8c0dc710(void *);
void operation_8c0dd8cc(Object *o)
{
    if (o->f4c != 0) {
        if (((o->f20 & 1)) != 0) {
            call_8c0dc79c(o->f4c);
            return;
        }
        call_8c0dc710(o->f4c);
    }
}
