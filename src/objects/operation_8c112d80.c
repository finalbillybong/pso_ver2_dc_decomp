typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
};
extern int call_8c220ce0(void);
extern int call_8c106760(int);
extern int call_8c106798(int);
extern void call_8c1066c0(int);
extern void call_8c10664c(int);
void operation_8c112d80(Object *o)
{
    int t1;
    int t2;
    int t3;
    t1 = call_8c220ce0();
    if (t1 != 0) {
        t2 = call_8c106760((int)o);
        if (t2 == 0) {
            t3 = call_8c106798((int)o);
            if (t3 == 0) {
                return;
            }
        }
        call_8c1066c0((int)o);
        call_8c10664c((int)o);
        o->f04 |= 1;
    }
}
