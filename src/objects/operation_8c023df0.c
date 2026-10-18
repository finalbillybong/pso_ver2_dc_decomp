typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x384];
    short f384;
};
extern void call_8c023e44(Object *, int);
extern int current_mode_active(void);
void operation_8c023df0(Object *o, int a1, int a2)
{
    int v1;
    int t1;
    if (a1 != 0) {
        o->f384 = 0;
        v1 = (int)0;
        while (a2 > v1) {
            call_8c023e44(o, a1);
            a1 = (int)(a1 + 0x1c);
            v1 = (int)(v1 + 1);
        }
        t1 = current_mode_active();
        if (t1 == 0) {
            o->f384 = 0;
        }
    }
}
