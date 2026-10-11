typedef struct Vector3 { float x; float y; float z; } Vector3;
typedef struct Hit { int unknown0; float *values; } Hit;
typedef struct Body { char unknown0[0x3c]; Vector3 position; } Body;
extern Hit *query_vector_8c011290(Vector3 *, int);
extern void raise_on_hit_8c073dec(Body *o)
{
    Vector3 point;
    Hit *hit;
    point.x = o->position.x;
    point.y = o->position.y + 100.0f;
    point.z = o->position.z;
    hit = query_vector_8c011290(&point, 0x41);
    if (hit) o->position.y = hit->values[1] + 6.0f;
}
