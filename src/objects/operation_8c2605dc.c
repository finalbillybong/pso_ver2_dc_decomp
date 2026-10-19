typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
};
extern int operation_8c051cf0(void *);
extern void operation_8c260688(void *);
extern void operation_8c260710(void *);
void operation_8c2605dc(Object *o)
{
    int t1;
    t1 = operation_8c051cf0((void *)(o->f30));
    if (t1 != 0) {
        operation_8c260688((void *)o);
        return;
    }
    operation_8c260710((void *)o);
}
