typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xd4];
    unsigned short fd4;
    char unknownd6[0xe];
    int fe4;
    char unknowne8[0x28];
    int f110;
};
extern int lookup_low_id(int);
extern void operation_8c026700(int, int);
void operation_8c0f1574(Object *o, int a1)
{
    int t1;
    if (o->f110 > 0) {
        if ((unsigned short)a1 == *(int *)0x8c418248) {
            t1 = lookup_low_id((int)((unsigned short)a1));
            if (t1 == 0 || o->fe4 != 1) {
                return;
            }
            o->fe4 = 2;
            o->fd4 = a1;
            operation_8c026700(t1, -1);
            return;
        }
        o->fd4 = 0xffff;
    }
}
