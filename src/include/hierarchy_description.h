#ifndef PSO_HIERARCHY_DESCRIPTION_H
#define PSO_HIERARCHY_DESCRIPTION_H
/* Provisional view for observed description arguments and child traversal. */
typedef struct DescribeNode {
 const char *field_00;
 unsigned short field_04,field_06;
 struct DescribeNode *link_08,*link_0c,*parent,*child;
 void *dispatch;
 unsigned short field_1c,field_1e;
} DescribeNode;
typedef char check_describe_field_00[((unsigned long)&((DescribeNode *)0)->field_00)==0?1:-1];
typedef char check_describe_link_0c[((unsigned long)&((DescribeNode *)0)->link_0c)==12?1:-1];
typedef char check_describe_child[((unsigned long)&((DescribeNode *)0)->child)==20?1:-1];
typedef char check_describe_field_1c[((unsigned long)&((DescribeNode *)0)->field_1c)==28?1:-1];
typedef char check_describe_field_1e[((unsigned long)&((DescribeNode *)0)->field_1e)==30?1:-1];
#endif
