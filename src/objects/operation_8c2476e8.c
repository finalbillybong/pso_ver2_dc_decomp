typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char tag;
};
void operation_8c2476e8(Object *o, char a1)
{
    int v2;
    char t;
    t = o->tag;
    if (a1 > t) {
        a1 = t;
    }
    v2 = 0;
    while (0x13 > v2) {
        *(char *)((char *)((char *)o + 0x48) + ((short)v2)) = a1;
        v2 = v2 + 1;
    }
}
