#include "src/include/object_state.h"

#define vector_sub_in_place_8c37f6f0 ((void (*)(Vector3 *, Vector3 *))0x8c37f6f0)
#define angle_at ((float (*)(float, float))0x8c130334)
extern void njPushMatrix_8c38ade4(void *);
#define njRotateY_8c37df90 ((void (*)(int, int))0x8c37df90)
#define transform_at ((void (*)(int, Vector3 *, Vector3 *))0x8c3be38c)
#define njPopMatrix_8c38accc ((void (*)(int))0x8c38accc)
#define add_at ((void (*)(Vector3 *, Vector3 *))0x8c3bdf60)
#define query_at ((int (*)(Vector3 *, Vector3 *))0x8c0113bc)

int query_capped_segment(ObjectStateView *object, Vector3 *target) {
    Vector3 point = *target;
    vector_sub_in_place_8c37f6f0(&point, &object->center);
    if (point.x * point.x + point.z * point.z > 90000.0f) {
        int angle = (int)(angle_at(point.x, point.z) * 65536.0f / 6.283184051513671875f);
        point.x = 0.0f;
        point.y = 0.0f;
        point.z = 300.0f;
        njPushMatrix_8c38ade4((void *)0x8c400500);
        njRotateY_8c37df90(0, angle);
        transform_at(0, &point, &point);
        njPopMatrix_8c38accc(1);
        add_at(&point, &object->center);
    } else {
        point = *target;
    }
    if (query_at(&object->center, &point)) return 1;
    return 0;
}
