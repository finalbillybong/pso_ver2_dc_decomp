#include "src/include/spatial.h"
/* Provisional name/layout: observed angle field at 0x64.
 * This caller supplies a relative vector; the first callee's name is provisional.
 */
#define vector_angle_at ((float (*)(float, float))0x8c130334)
#define adjust_angle_at ((int (*)(int, int, int))0x8c0c4f90)
extern int angle_difference(int orientation, int converted);

int operation_43fb4(SpatialObject *o, int step, Vec3 *relative)
{
    int desired = (int)(vector_angle_at(relative->x, relative->z)
                        * 65536.0f / 6.283184051513671875f);
    o->angle = adjust_angle_at(o->angle, desired, step);
    return angle_difference(o->angle, desired);
}
