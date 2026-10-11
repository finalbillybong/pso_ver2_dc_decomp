typedef struct Vector3 { float x; float y; float z; } Vector3;
typedef struct Aim {
    char unknown0[0x3c];
    Vector3 position;
    char unknown48[0x368];
    Vector3 target;
    Vector3 direction;
    float length;
} Aim;
extern float normalize_xz_checked(Vector3 *);
void aim_direction_8c05bdd4(Aim *o)
{
    o->direction.x = o->target.x - o->position.x;
    o->direction.y = 0.0f;
    o->direction.z = o->target.z - o->position.z;
    o->length = normalize_xz_checked(&o->direction);
}
