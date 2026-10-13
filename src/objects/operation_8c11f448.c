typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
extern int lookup_object_by_id(unsigned short);
extern float squared_distance_xz(void *, void *);
int operation_8c11f448(int a0, float f0)
{
    int t1;
    float t2;
    t1 = lookup_object_by_id((unsigned short)(*(S_g8c418248 **)0x8c418248));
    if (t1 != 0) {
        t2 = squared_distance_xz((void *)(a0 + 0x3c), (void *)(t1 + 0x3c));
        if (f0 > t2) {
            return 1;
        }
    }
    return 0;
}
