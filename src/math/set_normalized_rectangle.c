/* Provisional rectangle fields; retain division by256, not multiplication. */
typedef struct View { char unknown0[16]; float width,height; char unknown24[4]; float left,top,right,bottom; } View;
typedef char check_width[(unsigned long)&((View *)0)->width==16?1:-1];
typedef char check_height[(unsigned long)&((View *)0)->height==20?1:-1];
typedef char check_left[(unsigned long)&((View *)0)->left==28?1:-1];
typedef char check_top[(unsigned long)&((View *)0)->top==32?1:-1];
typedef char check_right[(unsigned long)&((View *)0)->right==36?1:-1];
typedef char check_bottom[(unsigned long)&((View *)0)->bottom==40?1:-1];
typedef char check_prefix[sizeof(View)==44?1:-1];
void set_normalized_rectangle(View *o,float left,float top,float right,float bottom) { o->left=left; o->top=top; o->right=right; o->bottom=bottom; }
