#include "src/include/particle_render_state.h"
extern ParticleRenderMaterial particle_material;
extern ParticleRenderGeometry particle_geometry;
extern ParticleRenderObject particle_object;
void initialize_particle_render_state(void){unsigned short *p=particle_material.values;*p++=0x2514;*p++=2;*p++=0;*p++=0xaff;*p++=0xff;*p++=0xff;particle_geometry.flags=0;particle_geometry.material=&particle_material;particle_geometry.x=0.0f;particle_geometry.y=0.0f;particle_geometry.z=0.0f;particle_geometry.radius=0.0f;particle_object.flags=87;particle_object.geometry=&particle_geometry;particle_object.x=0.0f;particle_object.y=0.0f;particle_object.z=0.0f;particle_object.angle_x=0;particle_object.angle_y=0;particle_object.angle_z=0;particle_object.scale_x=0.0f;particle_object.scale_y=0.0f;particle_object.scale_z=0.0f;particle_object.child=0;particle_object.next=0;}
