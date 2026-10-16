typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x62];
    unsigned short f68;
    char unknown6a[0x2];
    int f6c;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern "C" int lookup_object_by_id(unsigned short);
extern "C" int operation_8c0fca30(void *);
extern "C" void operation_8c0fc5ac(int, void *);
extern "C" int call_8c18e6fc(void *);
extern "C" void operation_8c0fc508(Object *o, int a1)
{
    int v1;
    int t1;
    int t2;
    int t3;
    if ((unsigned short)a1 == 0xffff) {
        o->f04 |= 1;
        return;
    }
    t1 = lookup_object_by_id((unsigned short)a1);
    t2 = operation_8c0fca30((void *)t1);
    if (t2 != 0) {
        if (o->f68 == (unsigned short)a1) {
            o->f6c = 0x5a;
            return;
        }
        if (!((float)o->f6c > 90.0f)) {
            o->f68 = a1;
            v1 = (int)0x5a;
            o->f6c = (int)v1;
            operation_8c0fc5ac((int)o, (void *)t1);
            t3 = call_8c18e6fc((void *)(((char *)o + 0x70)));
            if (t3 != 0) {
                (((PmfObj *)(o))->*(*(PMF_0 *)(((char *)o + 0x70))))();
            }
        }
    }
}
