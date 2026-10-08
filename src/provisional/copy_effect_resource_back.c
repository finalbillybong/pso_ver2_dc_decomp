#include "src/include/effect_resource_views.h"
void copy_effect_resource_back(ResourcePair *pair) {
 *(unsigned int *)((char *)&(*pair->first)->third+pair->first_index*12)=*(unsigned int *)((char *)&(*pair->second)->third+pair->second_index*12);
 *(unsigned int *)((char *)&(*pair->first)->second+pair->first_index*12)=*(unsigned int *)((char *)&(*pair->second)->second+pair->second_index*12);
 *(unsigned int *)((char *)&(*pair->first)->first+pair->first_index*12)=*(unsigned int *)((char *)&(*pair->second)->first+pair->second_index*12);
}
