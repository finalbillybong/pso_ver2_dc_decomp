typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d7b48 S_g8c4d7b48;
typedef struct Object Object;
struct Object {
    char unknown0[0x24];
    int f24;
};
extern int call_8c220ce0(void);
extern int call_8c106760(int);
extern int call_8c106798(int);
extern void call_8c220b80(void *, int);
void operation_8c1064c4(Object *o)
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
        call_8c220b80(*(S_g8c4d7b48 **)0x8c4d7b48, 1);
        o->f24 = *(int *)0x8c4d7b4c;
    }
}
