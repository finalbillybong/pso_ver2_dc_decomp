typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
struct Object {
    char unknown0[0x24];
    Arg0_24 *f24;
};
extern int lookup_low_id(int);
extern int operation_8c1cdc80(void *);
extern int operation_8c1a2da0(void *);
extern void call_8c02452c(int, int, int);
void operation_8c1a3d00(Object *o)
{
    int t1;
    int t2;
    int t3;
    t1 = lookup_low_id((int)*(S_g8c418248 **)0x8c418248);
    if (t1 != 0) {
        t2 = operation_8c1cdc80(o->f24);
        t3 = operation_8c1a2da0(o->f24);
        call_8c02452c(t1, t2, t3);
    }
}
