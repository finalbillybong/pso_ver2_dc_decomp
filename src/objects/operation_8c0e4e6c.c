typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xf0];
    short ff0;
    char unknownf2[0x218];
    short f30a;
};
extern void call_8c012630(Object *);
extern void operation_8c05428c(void *, int, int);
extern void refresh_follow_effect_8c0129f4(void *);
extern void operation_8c09e6d0(void *);
void operation_8c0e4e6c(Object *o)
{
    if (o->f30a != 8) {
        o->f30a = 8;
        o->ff0 = 8;
        call_8c012630(o);
        operation_8c05428c((void *)o, 0, 1);
        refresh_follow_effect_8c0129f4((void *)o);
        operation_8c09e6d0((void *)o);
    }
}
