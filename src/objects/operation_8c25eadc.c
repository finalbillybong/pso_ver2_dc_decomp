typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x26];
    int f2c;
};
extern void operation_8c25eb84(void);
extern void call_8c238ec0(void);
extern void operation_8c25ec50(Object *);
extern void call_8c25ed88(Object *);
extern void call_8c25ee08(Object *);
void operation_8c25eadc(Object *o)
{
    operation_8c25eb84();
    if (!(--o->f2c > 0)) {
        call_8c238ec0();
        operation_8c25ec50(o);
        call_8c25ed88(o);
        call_8c25ee08(o);
        o->f04 |= 1;
    }
}
