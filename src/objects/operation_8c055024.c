typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x30a];
    short f30a;
};
extern int operation_8c05a188(void *);
extern void operation_8c059ea4(void *, int);
void operation_8c055024(Object *o)
{
    int t1;
    if (o->f30a != 8 && o->f30a != 9 && o->f30a != 7) {
        t1 = operation_8c05a188((void *)o);
        if (t1 != 0) {
            operation_8c059ea4((void *)o, 7);
            return;
        }
        operation_8c059ea4((void *)o, 8);
    }
}
