typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x40];
    int f40;
    char unknown44[0x4fc];
    int f540;
};
extern int call_8c1181ec(Object *, void *);
extern void set_fields_8c117e20(void *);
void operation_8c116678(Object *o)
{
    int t1;
    if (o->f540 == 4) {
        t1 = call_8c1181ec(o, ((char *)o + 0x55c));
        if (t1 != 0) {
            o->f40 &= 0xffffff;
            set_fields_8c117e20((void *)o);
        }
    }
}
