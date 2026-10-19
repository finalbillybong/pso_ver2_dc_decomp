typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_2b4 Arg0_2b4;
struct Object {
    char unknown0[0x2b0];
    float f2b0;
    Arg0_2b4 *f2b4;
};
extern int g_8c4689f0;
extern void call_8c37e02c(int, void *);
extern void call_8c3829bc(int, float, float, float);
extern void operation_8c074ce4(void);
void operation_8c17a9b0(Object *o)
{
    switch (g_8c4689f0) {
    case 2:
        call_8c37e02c(0, (void *)(o->f2b4));
        return;
    case 5:
        call_8c37e02c(0, (void *)(-(int)(o->f2b4)));
        return;
    case 1:
        call_8c3829bc(0, 0.0f, o->f2b0 * -1.0f, 0.0f);
        return;
    case 3:
    case 4:
    case 6:
        operation_8c074ce4();
        return;
    }
}
