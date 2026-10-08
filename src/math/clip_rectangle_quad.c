/* Provisional rectangle context with reviewed scalar field offsets. */
typedef struct Context { float x; float y; float width; float height; float left; float top; float right; float bottom; float center_x; float center_y; float scale_x; float scale_y; unsigned int flags; float depth; float clip_left; float clip_top; float clip_right; float clip_bottom; } Context;
typedef char check_x[(unsigned long)&((Context *)0)->x==0?1:-1];
typedef char check_y[(unsigned long)&((Context *)0)->y==4?1:-1];
typedef char check_width[(unsigned long)&((Context *)0)->width==8?1:-1];
typedef char check_height[(unsigned long)&((Context *)0)->height==12?1:-1];
typedef char check_left[(unsigned long)&((Context *)0)->left==16?1:-1];
typedef char check_top[(unsigned long)&((Context *)0)->top==20?1:-1];
typedef char check_right[(unsigned long)&((Context *)0)->right==24?1:-1];
typedef char check_bottom[(unsigned long)&((Context *)0)->bottom==28?1:-1];
typedef char check_center_x[(unsigned long)&((Context *)0)->center_x==32?1:-1];
typedef char check_center_y[(unsigned long)&((Context *)0)->center_y==36?1:-1];
typedef char check_scale_x[(unsigned long)&((Context *)0)->scale_x==40?1:-1];
typedef char check_scale_y[(unsigned long)&((Context *)0)->scale_y==44?1:-1];
typedef char check_flags[(unsigned long)&((Context *)0)->flags==48?1:-1];
typedef char check_depth[(unsigned long)&((Context *)0)->depth==52?1:-1];
typedef char check_clip_left[(unsigned long)&((Context *)0)->clip_left==56?1:-1];
typedef char check_clip_top[(unsigned long)&((Context *)0)->clip_top==60?1:-1];
typedef char check_clip_right[(unsigned long)&((Context *)0)->clip_right==64?1:-1];
typedef char check_clip_bottom[(unsigned long)&((Context *)0)->clip_bottom==68?1:-1];
typedef char check_context[sizeof(Context)==72?1:-1];
typedef struct Pair { float x,y; } Pair;
typedef struct Quad { float left,top,right,bottom,u_left,v_top,u_right,v_bottom; } Quad;
typedef char check_pair_y[(unsigned long)&((Pair *)0)->y==4?1:-1];
typedef char check_pair[sizeof(Pair)==8?1:-1];
typedef char check_quad_u[(unsigned long)&((Quad *)0)->u_left==16?1:-1];
typedef char check_quad_v[(unsigned long)&((Quad *)0)->v_bottom==28?1:-1];
typedef char check_quad[sizeof(Quad)==32?1:-1];
int clip_rectangle_quad(const Context *o,Quad *q) {
 float du,dv,delta;
 if(q->right<o->clip_left || q->bottom<o->clip_top || q->left>o->clip_right || q->top>o->clip_bottom) return 0;
 du=(q->u_right-q->u_left)/(q->right-q->left);
 dv=(q->v_bottom-q->v_top)/(q->bottom-q->top);
 delta=o->clip_left-q->left;
 if(delta>0.0f) { q->left=o->clip_left; q->u_left+=delta*du; }
 delta=o->clip_top-q->top;
 if(delta>0.0f) { q->top=o->clip_top; q->v_top+=delta*dv; }
 { float bound=o->clip_right;
 delta=q->right-bound;
 if(delta>0.0f) { q->right=bound; q->u_right-=delta*du; } }
 { float bound=o->clip_bottom;
 delta=q->bottom-bound;
 if(delta>0.0f) { q->bottom=bound; q->v_bottom-=delta*dv; } }
 return 1;
}
