#include "src/include/timed_hierarchy.h"
#define read_time_at ((unsigned int (*)(void))0x8c36e6f6)
#define elapsed_at ((unsigned int (*)(unsigned int,unsigned int))0x8c36e700)
#define convert_time_at ((unsigned int (*)(unsigned int))0x8c36e706)
#define current_mask (*(unsigned int *)0x8c44bf48)
#define previous_mask (*(unsigned int *)0x8c44bf4c)
extern HierarchyNode root_object;
#define global_root (&root_object)
#define visit_at ((void (*)(HierarchyNode *))0x8c0331e4)
void time_hierarchy_update(TimedHierarchy *node) {
 unsigned int start=read_time_at();
 if(current_mask!=previous_mask) {
  HierarchyNode *child=global_root->child;
  unsigned int mask=1;
  register int clear_mask=~8;
  while(child) {
   if(current_mask&mask) child->flags|=8;
   else child->flags&=clear_mask;
   child=child->link_0c;
   mask<<=1;
  }
  previous_mask=current_mask;
 }
 visit_at(&node->base);
 node->field_1c=convert_time_at(elapsed_at(start,read_time_at()));
}
