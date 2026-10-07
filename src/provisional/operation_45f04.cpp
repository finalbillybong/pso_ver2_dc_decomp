/* Unresolved: complete512-byte C++ candidate,30 differing bytes.
 * Keep repeated radius squaring and the skipped vector initialization. */
#include "src/include/spatial_virtual.h"
extern "C" {
#define matrix_push_at ((void (*)(void))0x8c38ae68)
#define matrix_identity_at ((void (*)(int))0x8c37b5c4)
extern void matrix_translate_at(int, float, float, float);
#define matrix_translate_vec_at ((void (*)(Vec3 *))0x8c382a40)
#define matrix_rotate_at ((void (*)(int, int))0x8c37df90)
extern void matrix_transform_at(int, Vec3 *, Vec3 *);
#define vector_sub_at ((void (*)(Vec3 *, Vec3 *))0x8c37f6f0)
#define angle_at ((float (*)(float, float))0x8c130334)
#define angle_difference_at ((int (*)(int, int))0x8c0c52f4)
#define matrix_pop_at ((void (*)(void))0x8c38ad10)

int operation_45f04(SpatialObject *o, SpatialObject *other, float value)
{
    Vec3 relative;
    int found = -1;
    if (other) {
        if (o->contacts) {
            int i;
            register unsigned int mask;
            register int limit_offset;
            matrix_push_at();
            matrix_identity_at(0);
            matrix_translate_at(0, -other->position.x, -other->position.y, -other->position.z);
            matrix_translate_vec_at(&o->position);
            matrix_rotate_at(0, o->angle);
            mask = 0x04000000;
            limit_offset = 0x33c;
            for (i = 0; i < o->contact_count; i++) {
                int offset = i * sizeof(ContactEntry);
                float distance, radius;
                int angle;
                register unsigned char *flag_base = (unsigned char *)o->contacts + 0x18;
                if (!(*(unsigned int *)(flag_base + offset) & mask)) {
                    relative = ((ContactEntry *)((unsigned char *)o->contacts + offset))->position;
                    matrix_transform_at(0, &relative, &relative);
                }
                {
                    register float *limit_radius = &(*(ContactLimits **)((unsigned char *)other + limit_offset))->radius;
                    distance = relative.x * relative.x + relative.z * relative.z;
                    radius = *limit_radius;
                    {
                        register unsigned char *entry_radius = (unsigned char *)o->contacts + 12;
                        register float entry_value = *(float *)(entry_radius + offset);
                        radius = radius + entry_value;
                    }
                }
                radius *= radius;
                {
                    register float scaled_angle = angle_at(relative.x, relative.z) * 65536.0f;
                    register int orientation = other->angle;
                    angle = angle_difference_at(orientation, (int)(scaled_angle / 6.283184051513671875f));
                }
                if (radius > distance && (*(ContactLimits **)((unsigned char *)other + limit_offset))->angle_limit > angle) {
                    found = i;
                    break;
                }
            }
            matrix_pop_at();
            if (found == -1) return 0;
        } else {
            float distance, radius;
            int angle;
            relative = o->position;
            vector_sub_at(&relative, &other->position);
            distance = relative.x * relative.x + relative.z * relative.z;
            radius = (*(ContactLimits **)((unsigned char *)other + 0x33c))->radius;
            radius *= radius;
            radius *= radius;
            {
                register float scaled_angle = angle_at(relative.x, relative.z) * 65536.0f;
                register int orientation = other->angle;
                angle = angle_difference_at(orientation, (int)(scaled_angle / 6.283184051513671875f));
            }
            if (distance > radius || angle > (*(ContactLimits **)((unsigned char *)other + 0x33c))->angle_limit) return 0;
        }
        if (o->contact(other, found, value)) return 1;
    }
    return 0;
}

}
