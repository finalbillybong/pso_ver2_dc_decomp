/* Provisional scalar transform and four-coordinate views. */
typedef struct Transform { char unknown0[32]; float center_x,center_y,scale_x,scale_y; } Transform;
typedef struct Rectangle { float left,top,right,bottom; } Rectangle;
typedef char check_center_x[(unsigned long)&((Transform *)0)->center_x==32?1:-1];
typedef char check_center_y[(unsigned long)&((Transform *)0)->center_y==36?1:-1];
typedef char check_scale_x[(unsigned long)&((Transform *)0)->scale_x==40?1:-1];
typedef char check_scale_y[(unsigned long)&((Transform *)0)->scale_y==44?1:-1];
typedef char check_transform[sizeof(Transform)==48?1:-1];
typedef char check_top[(unsigned long)&((Rectangle *)0)->top==4?1:-1];
typedef char check_right[(unsigned long)&((Rectangle *)0)->right==8?1:-1];
typedef char check_bottom[(unsigned long)&((Rectangle *)0)->bottom==12?1:-1];
typedef char check_rectangle[sizeof(Rectangle)==16?1:-1];
void scale_rectangle_fields(const Transform *o,Rectangle *r) {
 if(o->scale_x!=1.0f) {
  { float center=o->center_x; r->left=(r->left-center)*o->scale_x+center; }
  { float center=o->center_x; r->right=(r->right-center)*o->scale_x+center; }
 }
 if(o->scale_y!=1.0f) {
  { float center=o->center_y; r->top=(r->top-center)*o->scale_y+center; }
  { float center=o->center_y; r->bottom=(r->bottom-center)*o->scale_y+center; }
 }
}
