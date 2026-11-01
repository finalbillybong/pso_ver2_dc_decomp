#include "src/include/particle_entries.h"
#define operator_delete_8c18de08 ((void (*)(void *))0x8c18de08)
#define TObject_dtor_8c03311c ((void (*)(ParticleDestroyView *,int))0x8c03311c)
#define free_at ((void (*)(void *,void *))0x8c122774)
ParticleDestroyView *TBreakUpMdl_dtor_8c0c7410(ParticleDestroyView *effect,short release){if(effect){effect->dispatch=(void *)0x8c2668a4;operator_delete_8c18de08(effect->entries);effect->entries=0;TObject_dtor_8c03311c(effect,0);if(release>0)free_at(*(void **)0x8c4d97e0,effect);}return effect;}
