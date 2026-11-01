/* Provisional address-based name; preserve observed calls, guards and offsets. */
#include "src/include/resource_child.h"
#define njPushMatrixEx_8c38ae68 ((void (*)(void))0x8c38ae68)
#define matrix_at ((void (*)(void *))0x8c033ed8)
#define translate_current_matrix_v_8c382a40 ((void (*)(Vector3 *))0x8c382a40)
#define njRotateY_8c37df90 ((void (*)(int,int))0x8c37df90)
#define njRotateX_8c37dd28 ((void (*)(int,int))0x8c37dd28)
#define mesh_at ((void (*)(void *))0x8c3aa716)
#define njPopMatrixEx_8c38ad10 ((void (*)(void))0x8c38ad10)
void TItemShootWindCane_render_8c239a30(ResourceChild *o){
    if(o->mesh && o->matrix){
        njPushMatrixEx_8c38ae68();
        matrix_at(o->matrix);
        translate_current_matrix_v_8c382a40(&o->position);
        njRotateY_8c37df90(0,o->angle_y);
        njRotateX_8c37dd28(0,o->angle_z);
        mesh_at(o->mesh);
        njPopMatrixEx_8c38ad10();
    }
}
