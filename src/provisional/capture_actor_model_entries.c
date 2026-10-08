#include "src/include/actor_model_helpers.h"
extern void collect_actor_model_nodes(ActorModelNode *);
int capture_actor_model_entries(ActorModelNode *node,ActorModelNode **entries){ActorModelNode *saved;if(!node)return 0;if(!entries)return 0;saved=node->sibling;node->sibling=0;*(ActorModelNode ***)0x8c46f424=entries;*(int *)0x8c46f428=0;collect_actor_model_nodes(node);node->sibling=saved;**(ActorModelNode ***)0x8c46f424=0;return *(int *)0x8c46f428;}
