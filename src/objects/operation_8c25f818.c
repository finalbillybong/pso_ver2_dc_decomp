typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0x8];
    int f30;
};
extern void operation_8c25f860(void);
extern void operation_8c25f874(void);
void operation_8c25f818(Object *o)
{
    char *v1;
    v1 = (char *)o->f24;
    o->f24 += 1;
    if ((float)(int)v1 > 4.5f) {
        if (o->f30 != 0) {
            if (o->f30 != 1) {
                return;
            }
        } else {
            operation_8c25f860();
            return;
        }
        operation_8c25f874();
    }
}
