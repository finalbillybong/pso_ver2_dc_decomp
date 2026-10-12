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
extern int call_8c220ce0(void);
extern int call_8c106760(int);
extern int call_8c106798(int);
void operation_8c187e9c(Object *o)
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
        o->f24 = 3;
    }
}
