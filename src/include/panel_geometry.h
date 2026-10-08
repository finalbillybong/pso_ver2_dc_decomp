#ifndef PSO_PANEL_GEOMETRY_H
#define PSO_PANEL_GEOMETRY_H
#include "src/include/widget_draw.h"
/* Accessed owner prefix only; allocation extent and identity remain provisional. */
typedef struct PanelGeometryOwner {char unknown00[48];float amount;} PanelGeometryOwner;
typedef char check_PanelGeometryOwner_amount[(unsigned long)&((PanelGeometryOwner *)0)->amount == 48 ? 1 : -1];
typedef char check_PanelGeometryOwner_size[sizeof(PanelGeometryOwner) == 52 ? 1 : -1];
#endif
