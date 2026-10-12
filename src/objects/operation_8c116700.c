typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x540];
    int f540;
};
extern int call_8c1181ec(Object *, void *);
extern void set_fields_8c117e20(void *);
void operation_8c116700(Object *o)
{
    int t1;
    if (o->f540 == 6) {
        t1 = call_8c1181ec(o, ((char *)o + 0x5a4));
        if (t1 != 0) {
            set_fields_8c117e20((void *)o);
        }
    }
}
