typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x2e];
    int f50;
};
extern void operation_8c0dc79c(void *);
extern void operation_8c0dc710(void *);
void operation_8c0dd874(Object *o)
{
    char *v22;
    v22 = (char *)o->f50;
    if (v22 != 0) {
        if (((o->f20 & 1)) != 0 || ((o->f20 & 2)) != 0) {
            operation_8c0dc79c((void *)v22);
            return;
        }
        operation_8c0dc710((void *)v22);
    }
}
