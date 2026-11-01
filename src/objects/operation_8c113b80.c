typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xe8];
    float fe8;
    char unknownec[0x34];
    float f120;
};
extern void TOKey_v19_8c113130(void *);
void TLazerFenceSw_v19_8c113b80(Object *o)
{
    TOKey_v19_8c113130((void *)o);
    o->fe8 = 0.0f;
    o->f120 = 0.0f;
}
