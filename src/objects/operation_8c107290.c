typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x24];
    int f24;
};
extern int operation_8c220ce0(void);
extern int operation_8c106760(Object *);
extern int operation_8c106798(Object *);
extern void call_8c220b80(int, int);
void operation_8c107290(Object *o)
{
    int t1;
    int t2;
    int t3;
    t1 = operation_8c220ce0();
    if (t1 != 0) {
        t2 = operation_8c106760(o);
        if (t2 == 0) {
            t3 = operation_8c106798(o);
            if (t3 == 0) {
                return;
            }
        }
        call_8c220b80(0xb, 1);
        o->f24 = 5;
    }
}
