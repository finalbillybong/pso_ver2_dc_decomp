typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x70];
    int f70;
    int f74;
    char unknown78[0x4];
    int f7c;
    int f80;
};
extern int call_8c18e768(int, int);
int operation_8c216410(Object *o, int a1)
{
    int v2;
    int v1;
    int v3;
    int v4;
    int v5;
    int t1;
    v1 = (int)o->f7c;
    v2 = (int)o->f80;
    v3 = (int)(v1 > v2);
    if (v3 == 0) {
        return 0;
    }
    t1 = call_8c18e768(v2, 2);
    if (a1 > 0) {
        if (t1 > o->f74) {
            return 0;
        }
        v4 = (int)(v1 > (v2 - (int)o->f74 + (int)o->f70));
        return (int)(v4);
    }
    if (o->f74 >= t1) {
        return 0;
    }
    v5 = (int)(((int)o->f70 - ((int)o->f74 + 1)) >= 0);
    return (int)(v5);
}
