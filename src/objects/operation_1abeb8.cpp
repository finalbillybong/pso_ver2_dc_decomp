/* Provisional address-based name; preserve observed guards, offsets and call order. */
#include "src/include/base_child_virtual.h"
#define matrix_at ((void (*)(void *))0x8c033ed8)
#define before_at ((void (*)(void))0x8c391c94)
#define njPushMatrixEx_8c38ae68 ((void (*)(void))0x8c38ae68)
#define translate_current_matrix_v_8c382a40 ((void (*)(Vector3 *))0x8c382a40)
extern "C" void rotate_at(int,int,int,int);
#define mesh_at ((void (*)(void *))0x8c3aa716)
#define njPopMatrixEx_8c38ad10 ((void (*)(void))0x8c38ad10)
#define after_at ((void (*)(void))0x8c391cc4)
extern "C" void TItemShootModel_render_8c1abeb8(BaseChildView *o){
    if(o->mesh){
        matrix_at(o->matrix);
        before_at();
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40(&o->position);
        rotate_at(0,o->angle_x,o->angle_y,o->angle_z);
        mesh_at(o->mesh);
        njPopMatrixEx_8c38ad10();
        after_at();
    }
}
