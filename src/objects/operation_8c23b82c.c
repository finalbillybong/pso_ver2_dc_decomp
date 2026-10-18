typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_23c Arg0_23c;
struct Object {
    char unknown0[0x23c];
    Arg0_23c *f23c;
};
extern int g_8c4689f0;
extern void call_8c37df90(int, void *);
extern void operation_8c074ce4(void);
void operation_8c23b82c(Object *o)
{
    switch (g_8c4689f0) {
    case 1:
        call_8c37df90(0, (void *)(o->f23c));
        return;
    case 2:
        operation_8c074ce4();
        return;
    case 3:
        call_8c37df90(0, (void *)(-(int)(o->f23c)));
        return;
    case 4:
        operation_8c074ce4();
        return;
    case 6:
        operation_8c074ce4();
        return;
    case 0:
    case 5:
        break;
    }
}
