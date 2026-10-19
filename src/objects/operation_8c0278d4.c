typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x2];
    short f02;
};
extern void call_8c027910(int);
void operation_8c0278d4(Object *o)
{
    int v3;
    int v6;
    if ((unsigned short)o->f02 == 0xffff) {
        v6 = (int)0;
    } else {
        if ((int)(unsigned short)o->f02 >= 0xc) {
            v3 = (int)0;
        } else {
            v3 = (int)*(int *)((char *)0x8c41ce2c + ((unsigned short)o->f02 << 2));
        }
        v6 = (int)v3;
    }
    if (v6 != 0) {
        call_8c027910(v6);
    }
}
