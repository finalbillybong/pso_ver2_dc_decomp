typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_54 Arg0_54;
typedef struct Arg0_58 Arg0_58;
struct Object {
    char unknown0[0x54];
    Arg0_54 *f54;
    Arg0_58 *f58;
    char unknown5c[0x38];
    int f94;
};
extern int call_8c372d98(void *);
extern void call_8c184918(void);
extern void call_8c011ec0(void *);
void operation_8c22e27c(Object *o)
{
    int t1;
    t1 = call_8c372d98(o->f54);
    if (t1 == 0) {
        call_8c184918();
        if (o->f58 != 0) {
            call_8c011ec0(o->f58);
            o->f58 = (Arg0_58 *)0;
        }
        o->f94 = 0xb;
    }
}
