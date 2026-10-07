#include "src/include/hierarchy_description.h"
extern const char format_base[];
extern unsigned int length_at(const char *);
extern void output_at(const char *,...);
#define recur_at ((void (*)(DescribeNode *))0x8c033330)
#define indentation ((const char *)0x8c2e8a00)
#define depth (*(int *)0x8c44beb0)
static inline void describe_one(DescribeNode *node) {
 unsigned int length=length_at(indentation);
 const char *prefix=indentation+(length-((unsigned int)depth<<1));
 output_at(format_base+100,node->field_1c,node->field_1e,prefix,node->field_00);
}
void describe_hierarchy_node(DescribeNode *node) {
 DescribeNode *child;
 describe_one(node);
 ++depth;
 child=node->child;
 while(child) {
  DescribeNode *grandchild;
  describe_one(child);
  ++depth;
  grandchild=child->child;
  while(grandchild) {
   recur_at(grandchild);
   grandchild=grandchild->link_0c;
  }
  --depth;
  child=child->link_0c;
 }
 --depth;
}
