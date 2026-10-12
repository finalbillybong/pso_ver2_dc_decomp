typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c339ca0 S_L8c339ca0;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
struct Object {
    char unknown0[0x70];
    int f70;
};
struct S_L8c339ca0 {
    char unknown0[0x38];
    int f38;
};
extern S_g8c418248 *g_8c418248;
extern S_L8c339ca0 g_8c339ca0;
extern int lookup_low_id(int);
extern int operation_8c0298b0(void *);
extern void call_8c23803c(Object *);
extern void call_8c2489c0(void *);
extern void call_8c248664(void);
void operation_8c237ed0(Object *o)
{
    int t1;
    int t2;
    t1 = lookup_low_id((int)g_8c418248);
    if (t1 == 0) {
        o->f70 = 0;
        return;
    }
    t2 = operation_8c0298b0((void *)t1);
    if (t2 != 0) {
        if (o->f70 != 0 && (&g_8c339ca0)->f38 == 0) {
            call_8c23803c(o);
            call_8c2489c0(g_8c418248);
            call_8c248664();
        }
        o->f70 = 0;
    }
}
