typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_7c Arg0_7c;
struct Object {
    char unknown0[0x78];
    int f78;
    Arg0_7c *f7c;
};
extern void call_8c1e220c(void *);
void operation_8c1e0000(Object *o)
{
    if (o->f7c != 0) {
        call_8c1e220c((void *)(o->f7c));
        switch (*(int *)0x8c467188) {
        case 3:
            o->f78 = 0;
            return;
        case 4:
            o->f78 = 1;
            return;
        case 2:
            o->f78 = 2;
            return;
        case 0:
        case 1:
            o->f78 = 3;
        }
    }
}
