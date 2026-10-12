typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x13c];
    int f13c;
};
extern int call_8c1aaabc(int);
extern void operation_8c077224(void *);
void operation_8c241658(Object *o)
{
    int t1;
    if (o->f13c != 0) {
        t1 = call_8c1aaabc((int)(o->f13c + 0x754));
        if ((short)t1 == 2) {
            operation_8c077224((void *)o);
        }
    }
}
