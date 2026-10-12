typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x3ac];
    int f3ac;
};
extern int call_8c18e768(int, int);
int operation_8c13b3b4(Object *o)
{
    int t1;
    t1 = call_8c18e768((unsigned short)o->f3ac, 0x2aaa);
    return (int)((float)(t1 * 0x3c + 0x78) * 65536.0f / 360.0f);
}
