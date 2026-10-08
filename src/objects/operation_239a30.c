/* Provisional address-based name; preserve observed calls, guards and offsets. */
#include "src/include/resource_child.h"
#define push_at ((void (*)(void))0x8c38ae68)
#define matrix_at ((void (*)(void *))0x8c033ed8)
#define translate_at ((void (*)(Vector3 *))0x8c382a40)
#define rotate_y_at ((void (*)(int,int))0x8c37df90)
#define rotate_z_at ((void (*)(int,int))0x8c37dd28)
#define mesh_at ((void (*)(void *))0x8c3aa716)
#define pop_at ((void (*)(void))0x8c38ad10)
void operation_239a30(ResourceChild *o){
    if(o->mesh && o->matrix){
        push_at();
        matrix_at(o->matrix);
        translate_at(&o->position);
        rotate_y_at(0,o->angle_y);
        rotate_z_at(0,o->angle_z);
        mesh_at(o->mesh);
        pop_at();
    }
}
