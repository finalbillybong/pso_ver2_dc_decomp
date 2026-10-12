typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_6c Arg0_6c;
struct Object {
    char unknown0[0x6c];
    Arg0_6c *f6c;
};
extern int call_8c192ec8(void *);
extern void call_8c1d5f4c(Object *);
void operation_8c1d5dd0(Object *o)
{
    int t1;
    t1 = call_8c192ec8(o->f6c);
    if (t1 != 0) {
        call_8c1d5f4c(o);
    }
}
