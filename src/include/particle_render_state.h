#ifndef PSO_PARTICLE_RENDER_STATE_H
#define PSO_PARTICLE_RENDER_STATE_H
/* Provisional accessed layouts; names do not assert original declarations. */
typedef struct ParticleRenderMaterial {unsigned short values[6];} ParticleRenderMaterial;
typedef struct ParticleRenderGeometry {int flags;ParticleRenderMaterial *material;float x,y,z,radius;} ParticleRenderGeometry;
typedef struct ParticleRenderObject {int flags;ParticleRenderGeometry *geometry;float x,y,z;int angle_x,angle_y,angle_z;float scale_x,scale_y,scale_z;void *child,*next;} ParticleRenderObject;
typedef char check_ParticleRenderMaterial_values[(unsigned long)&((ParticleRenderMaterial *)0)->values==0?1:-1];
typedef char check_ParticleRenderMaterial_size[sizeof(ParticleRenderMaterial)==12?1:-1];
typedef char check_ParticleRenderGeometry_flags[(unsigned long)&((ParticleRenderGeometry *)0)->flags==0?1:-1];
typedef char check_ParticleRenderGeometry_material[(unsigned long)&((ParticleRenderGeometry *)0)->material==4?1:-1];
typedef char check_ParticleRenderGeometry_x[(unsigned long)&((ParticleRenderGeometry *)0)->x==8?1:-1];
typedef char check_ParticleRenderGeometry_y[(unsigned long)&((ParticleRenderGeometry *)0)->y==12?1:-1];
typedef char check_ParticleRenderGeometry_z[(unsigned long)&((ParticleRenderGeometry *)0)->z==16?1:-1];
typedef char check_ParticleRenderGeometry_radius[(unsigned long)&((ParticleRenderGeometry *)0)->radius==20?1:-1];
typedef char check_ParticleRenderGeometry_size[sizeof(ParticleRenderGeometry)==24?1:-1];
typedef char check_ParticleRenderObject_flags[(unsigned long)&((ParticleRenderObject *)0)->flags==0?1:-1];
typedef char check_ParticleRenderObject_geometry[(unsigned long)&((ParticleRenderObject *)0)->geometry==4?1:-1];
typedef char check_ParticleRenderObject_x[(unsigned long)&((ParticleRenderObject *)0)->x==8?1:-1];
typedef char check_ParticleRenderObject_y[(unsigned long)&((ParticleRenderObject *)0)->y==12?1:-1];
typedef char check_ParticleRenderObject_z[(unsigned long)&((ParticleRenderObject *)0)->z==16?1:-1];
typedef char check_ParticleRenderObject_angle_x[(unsigned long)&((ParticleRenderObject *)0)->angle_x==20?1:-1];
typedef char check_ParticleRenderObject_angle_y[(unsigned long)&((ParticleRenderObject *)0)->angle_y==24?1:-1];
typedef char check_ParticleRenderObject_angle_z[(unsigned long)&((ParticleRenderObject *)0)->angle_z==28?1:-1];
typedef char check_ParticleRenderObject_scale_x[(unsigned long)&((ParticleRenderObject *)0)->scale_x==32?1:-1];
typedef char check_ParticleRenderObject_scale_y[(unsigned long)&((ParticleRenderObject *)0)->scale_y==36?1:-1];
typedef char check_ParticleRenderObject_scale_z[(unsigned long)&((ParticleRenderObject *)0)->scale_z==40?1:-1];
typedef char check_ParticleRenderObject_child[(unsigned long)&((ParticleRenderObject *)0)->child==44?1:-1];
typedef char check_ParticleRenderObject_next[(unsigned long)&((ParticleRenderObject *)0)->next==48?1:-1];
typedef char check_ParticleRenderObject_size[sizeof(ParticleRenderObject)==52?1:-1];
#endif
