typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    int f20;
    int f24;
    int f28;
};
extern int g_8c41bd10;
extern void operation_8c2425e0(void *);
void operation_8c24259c(Object *o)
{
    if (g_8c41bd10 == 0) {
        if (o->f20 != o->f28) {
            if (o->f24 != -1) {
                o->f24 = -1;
                operation_8c2425e0((void *)o);
            }
            o->f20 = (int)(o->f28);
            o->f24 = 0;
        }
        operation_8c2425e0((void *)o);
    }
}
