/* 0x8c03f0a0: squared distance using components at offsets 0 and 8. */
typedef struct Vec3 {
    float x, y, z;
} Vec3;

float distance_xz(const Vec3 *a, const Vec3 *b)
{
    float dx = a->x - b->x;
    float dz = a->z - b->z;
    return dx * dx + dz * dz;
}
