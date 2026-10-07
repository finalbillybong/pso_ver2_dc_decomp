#include "src/include/hierarchy.h"
extern HierarchyNode *group_1;
extern HierarchyNode *group_2;
extern HierarchyNode *group_3;
extern HierarchyNode *group_4;
extern HierarchyNode *group_5;
extern HierarchyNode *group_6;
extern HierarchyNode *group_7;
extern HierarchyNode *group_8;
extern HierarchyNode *group_9;
void toggle_group_flag_08(void) {
 group_1->flags^=8;
 group_2->flags^=8;
 group_3->flags^=8;
 group_4->flags^=8;
 group_5->flags^=8;
 group_6->flags^=8;
 group_7->flags^=8;
 group_8->flags^=8;
 group_9->flags^=8;
}
