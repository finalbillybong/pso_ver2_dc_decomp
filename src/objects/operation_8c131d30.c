typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x70];
    float f70;
    char unknown74[0x70];
    int fe4;
    char unknowne8[0x1c];
    int f104;
};
extern int call_8c0eea7c(Object *, float);
extern int call_8c131e3c(Object *, float);
extern int call_8c12b944(void);
void operation_8c131d30(Object *o)
{
    int *pf1;
    int t1;
    int t2;
    int t3;
    int t4;
    pf1 = (int *)((char *)o + 0x104);
    if ((float)((*pf1)++) > 30.0f) {
        t1 = call_8c0eea7c(o, 1225.0f);
        if (t1 == 1) {
            t2 = call_8c131e3c(o, o->f70 + 30.0f);
            if (t2 != 1) {
                return;
            }
            o->fe4 = 3;
            o->f104 = 0;
            return;
        }
        t3 = call_8c12b944();
        t4 = call_8c131e3c(o, o->f70 * ((float)t3 / 32768.0f * 2.0f - 1.0f));
        if (t4 == 1) {
            o->fe4 = 1;
            o->f104 = 0;
        }
    }
}
