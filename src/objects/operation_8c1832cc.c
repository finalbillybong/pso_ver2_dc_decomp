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
extern int g_8c4dbaec;
extern void operation_8c17e194(void);
void operation_8c1832cc(Object *o)
{
    operation_8c17e194();
    if (g_8c4dbaec == 0) {
        o->f04 |= 1;
    }
}
