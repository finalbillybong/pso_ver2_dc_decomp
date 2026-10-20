typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Row16 {
    int f00;
    Vector3 v;
} Row16;
typedef struct Tab {
    int f00;
    int f04[9];
    Row16 rows[1];
} Tab;
typedef struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    char f20;
    char unknown21[0x27];
    Vector3 f48;
    char unknown54[0x4];
    Tab *f58;
} Object;
extern int call_8c16b5d8(Object *);
void operation_8c16b8f0(Object *o)
{
    switch (call_8c16b5d8(o)) {
    case 0:
        return;
    case 1:
        *(int *)((char *)o->f58 + (o->f20 << 2) + 4) = 2;
        *(Vector3 *)((char *)(Row16 *)((char *)o->f58 + (o->f20 << 4) + 0x28) + 4) = o->f48;
        break;
    case 2:
        *(int *)((char *)o->f58 + (o->f20 << 2) + 4) = 3;
        break;
    }
    o->f04 |= 1;
}
