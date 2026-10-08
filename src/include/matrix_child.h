#ifndef PSO_MATRIX_CHILD_H
#define PSO_MATRIX_CHILD_H
#include "src/include/base_child.h"
/* Provisional 108-byte view and observed mesh-resource chain prefixes. */
typedef struct MatrixChild { BaseChild base; int rotation, index; } MatrixChild;
typedef struct ChildMeshLink { int unknown00; void *resource; } ChildMeshLink;
typedef struct ChildMesh { int unknown00; ChildMeshLink *link; } ChildMesh;
typedef char check_MatrixChild_base[(unsigned long)&((MatrixChild *)0)->base == 0 ? 1 : -1];
typedef char check_MatrixChild_rotation[(unsigned long)&((MatrixChild *)0)->rotation == 100 ? 1 : -1];
typedef char check_MatrixChild_index[(unsigned long)&((MatrixChild *)0)->index == 104 ? 1 : -1];
typedef char check_MatrixChild_prefix[sizeof(MatrixChild) == 108 ? 1 : -1];
typedef char check_ChildMeshLink_resource[(unsigned long)&((ChildMeshLink *)0)->resource == 4 ? 1 : -1];
typedef char check_ChildMeshLink_prefix[sizeof(ChildMeshLink) == 8 ? 1 : -1];
typedef char check_ChildMesh_link[(unsigned long)&((ChildMesh *)0)->link == 4 ? 1 : -1];
typedef char check_ChildMesh_prefix[sizeof(ChildMesh) == 8 ? 1 : -1];
#endif
