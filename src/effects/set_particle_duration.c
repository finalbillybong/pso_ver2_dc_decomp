#include "src/include/particle_duration.h"
void set_particle_duration(ParticleDurationView *effect,int count,float step){effect->duration=step*(float)count+1.0f;}
