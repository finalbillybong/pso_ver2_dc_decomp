/* Provisional address-based name; preserve observed calls, guards and field accesses. */
#include "src/include/matrix_child.h"
extern void select_at(void *,int);
#define matrix_at ((void (*)(void *))0x8c033ed8)
#define before_at ((void (*)(void))0x8c391c94)
#define push_at ((void (*)(void))0x8c38ae68)
#define translate_at ((void (*)(Vector3 *))0x8c382a40)
extern void rotate_at(int,int,int,int);
#define mesh_at ((void (*)(void *))0x8c3aa716)
#define pop_at ((void (*)(void))0x8c38ad10)
#define after_at ((void (*)(void))0x8c391cc4)
void operation_1ac3e0(MatrixChild *o){
    if(o->base.mesh){
        select_at(((ChildMesh *)o->base.mesh)->link->resource,o->index);
        matrix_at(o->base.matrix);
        before_at();
        push_at();
        translate_at(&o->base.position);
        rotate_at(0,o->base.angle_x,o->base.angle_y,o->base.angle_z);
        mesh_at(o->base.mesh);
        pop_at();
        after_at();
    }
}
