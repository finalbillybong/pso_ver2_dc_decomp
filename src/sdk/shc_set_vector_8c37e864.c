/* Stores a vector, normalises it and copies the result (Hitachi SHC). */
typedef struct Vector {
    float x;
    float y;
    float z;
} Vector;

typedef struct Object {
    char unknown0[0x4c];
    Vector dir;
    char unknown58[0x9c - 0x58];
    Vector copy;
} Object;

extern void normalize_8c37b630(Vector *);

void set_vector_8c37e864(Object *o, float x, float y, float z)
{
    o->dir.x = x;
    o->dir.y = y;
    o->dir.z = z;
    normalize_8c37b630(&o->dir);
    o->copy = o->dir;
}
