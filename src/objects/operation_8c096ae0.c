typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x7c];
    int f7c;
    int f80;
};
extern int g_8c460900;
extern int g_8c469e50;
extern float operation_8c0352d4(void *);
extern void call_8c096e70(Object *, int, int, float, float);
void operation_8c096ae0(Object *o, int a1)
{
    int v2;
    int v1;
    int v28;
    float t1;
    v1 = (int)a1;
    switch (g_8c469e50) {
    case 0:
    case 1:
    case 2:
    case 4:
        v1 = (int)0;
        break;
    case 6:
    case 8:
        v1 = (int)1;
        break;
    case 3:
    case 5:
    case 7:
    default:
        v1 = (int)2;
        break;
    }
    v2 = (int)o->f7c;
    if (v2 == v1) {
        o->f80 = 0;
    } else {
        if (++o->f80 > 0x1e) {
            o->f7c = (int)(v1);
            o->f80 = 0;
        }
    }
    v28 = (int)g_8c460900;
    if (v28 != 0) {
        t1 = operation_8c0352d4((void *)v28);
        switch (o->f7c) {
        case 0:
            call_8c096e70(o, 0, 0, t1 * 0.5f, t1 * 0.91f);
            return;
        case 1:
            call_8c096e70(o, 0, 0, 25.0f, 11.0f);
            return;
        case 2:
            call_8c096e70(o, 0, 0, t1 * 1.25f, t1 * 0.55f);
        }
    }
}
