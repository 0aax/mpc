/* This file was automatically generated by CasADi.
   The CasADi copyright holders make no ownership claim of its contents. */
#ifdef __cplusplus
extern "C" {
#endif

/* How to prefix internal symbols */
#ifdef CASADI_CODEGEN_PREFIX
  #define CASADI_NAMESPACE_CONCAT(NS, ID) _CASADI_NAMESPACE_CONCAT(NS, ID)
  #define _CASADI_NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) CASADI_NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) car_kinematic_expl_vde_forw_ ## ID
#endif

#include <math.h>

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int int
#endif

/* Add prefix to internal symbols */
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_s0 CASADI_PREFIX(s0)
#define casadi_s1 CASADI_PREFIX(s1)
#define casadi_s2 CASADI_PREFIX(s2)
#define casadi_s3 CASADI_PREFIX(s3)
#define casadi_s4 CASADI_PREFIX(s4)
#define casadi_sq CASADI_PREFIX(sq)

/* Symbol visibility in DLLs */
#ifndef CASADI_SYMBOL_EXPORT
  #if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
    #if defined(STATIC_LINKED)
      #define CASADI_SYMBOL_EXPORT
    #else
      #define CASADI_SYMBOL_EXPORT __declspec(dllexport)
    #endif
  #elif defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
    #define CASADI_SYMBOL_EXPORT __attribute__ ((visibility ("default")))
  #else
    #define CASADI_SYMBOL_EXPORT
  #endif
#endif

casadi_real casadi_sq(casadi_real x) { return x*x;}

static const casadi_int casadi_s0[10] = {6, 1, 0, 6, 0, 1, 2, 3, 4, 5};
static const casadi_int casadi_s1[45] = {6, 6, 0, 6, 12, 18, 24, 30, 36, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5};
static const casadi_int casadi_s2[24] = {6, 3, 0, 6, 12, 18, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5};
static const casadi_int casadi_s3[7] = {3, 1, 0, 3, 0, 1, 2};
static const casadi_int casadi_s4[16] = {12, 1, 0, 12, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

/* car_kinematic_expl_vde_forw:(i0[6],i1[6x6],i2[6x3],i3[3],i4[12])->(o0[6],o1[6x6],o2[6x3]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a2, a3, a4, a5, a6, a7, a8, a9;
  a0=arg[0]? arg[0][4] : 0;
  a1=arg[0]? arg[0][2] : 0;
  a2=cos(a1);
  a3=(a0*a2);
  if (res[0]!=0) res[0][0]=a3;
  a3=sin(a1);
  a4=(a0*a3);
  if (res[0]!=0) res[0][1]=a4;
  a4=5.0000000000000000e-01;
  a4=(a0/a4);
  a5=arg[0]? arg[0][3] : 0;
  a5=tanh(a5);
  a6=(a4*a5);
  if (res[0]!=0) res[0][2]=a6;
  a6=arg[3]? arg[3][1] : 0;
  if (res[0]!=0) res[0][3]=a6;
  a6=arg[3]? arg[3][0] : 0;
  if (res[0]!=0) res[0][4]=a6;
  a6=arg[3]? arg[3][2] : 0;
  a7=(a0*a6);
  if (res[0]!=0) res[0][5]=a7;
  a7=arg[1]? arg[1][4] : 0;
  a8=(a2*a7);
  a9=sin(a1);
  a10=arg[1]? arg[1][2] : 0;
  a11=(a9*a10);
  a11=(a0*a11);
  a8=(a8-a11);
  if (res[1]!=0) res[1][0]=a8;
  a8=(a3*a7);
  a11=cos(a1);
  a10=(a11*a10);
  a10=(a0*a10);
  a8=(a8+a10);
  if (res[1]!=0) res[1][1]=a8;
  a8=2.;
  a10=(a8*a7);
  a10=(a5*a10);
  a12=1.;
  a13=casadi_sq(a5);
  a13=(a12-a13);
  a14=arg[1]? arg[1][3] : 0;
  a14=(a13*a14);
  a14=(a4*a14);
  a10=(a10+a14);
  if (res[1]!=0) res[1][2]=a10;
  a10=0.;
  if (res[1]!=0) res[1][3]=a10;
  if (res[1]!=0) res[1][4]=a10;
  a7=(a6*a7);
  if (res[1]!=0) res[1][5]=a7;
  a7=arg[1]? arg[1][10] : 0;
  a14=(a2*a7);
  a15=arg[1]? arg[1][8] : 0;
  a16=(a9*a15);
  a16=(a0*a16);
  a14=(a14-a16);
  if (res[1]!=0) res[1][6]=a14;
  a14=(a3*a7);
  a15=(a11*a15);
  a15=(a0*a15);
  a14=(a14+a15);
  if (res[1]!=0) res[1][7]=a14;
  a14=(a8*a7);
  a14=(a5*a14);
  a15=arg[1]? arg[1][9] : 0;
  a15=(a13*a15);
  a15=(a4*a15);
  a14=(a14+a15);
  if (res[1]!=0) res[1][8]=a14;
  if (res[1]!=0) res[1][9]=a10;
  if (res[1]!=0) res[1][10]=a10;
  a7=(a6*a7);
  if (res[1]!=0) res[1][11]=a7;
  a7=arg[1]? arg[1][16] : 0;
  a14=(a2*a7);
  a15=arg[1]? arg[1][14] : 0;
  a16=(a9*a15);
  a16=(a0*a16);
  a14=(a14-a16);
  if (res[1]!=0) res[1][12]=a14;
  a14=(a3*a7);
  a15=(a11*a15);
  a15=(a0*a15);
  a14=(a14+a15);
  if (res[1]!=0) res[1][13]=a14;
  a14=(a8*a7);
  a14=(a5*a14);
  a15=arg[1]? arg[1][15] : 0;
  a15=(a13*a15);
  a15=(a4*a15);
  a14=(a14+a15);
  if (res[1]!=0) res[1][14]=a14;
  if (res[1]!=0) res[1][15]=a10;
  if (res[1]!=0) res[1][16]=a10;
  a7=(a6*a7);
  if (res[1]!=0) res[1][17]=a7;
  a7=arg[1]? arg[1][22] : 0;
  a14=(a2*a7);
  a15=arg[1]? arg[1][20] : 0;
  a16=(a9*a15);
  a16=(a0*a16);
  a14=(a14-a16);
  if (res[1]!=0) res[1][18]=a14;
  a14=(a3*a7);
  a15=(a11*a15);
  a15=(a0*a15);
  a14=(a14+a15);
  if (res[1]!=0) res[1][19]=a14;
  a14=(a8*a7);
  a14=(a5*a14);
  a15=arg[1]? arg[1][21] : 0;
  a15=(a13*a15);
  a15=(a4*a15);
  a14=(a14+a15);
  if (res[1]!=0) res[1][20]=a14;
  if (res[1]!=0) res[1][21]=a10;
  if (res[1]!=0) res[1][22]=a10;
  a7=(a6*a7);
  if (res[1]!=0) res[1][23]=a7;
  a7=arg[1]? arg[1][28] : 0;
  a14=(a2*a7);
  a15=arg[1]? arg[1][26] : 0;
  a16=(a9*a15);
  a16=(a0*a16);
  a14=(a14-a16);
  if (res[1]!=0) res[1][24]=a14;
  a14=(a3*a7);
  a15=(a11*a15);
  a15=(a0*a15);
  a14=(a14+a15);
  if (res[1]!=0) res[1][25]=a14;
  a14=(a8*a7);
  a14=(a5*a14);
  a15=arg[1]? arg[1][27] : 0;
  a15=(a13*a15);
  a15=(a4*a15);
  a14=(a14+a15);
  if (res[1]!=0) res[1][26]=a14;
  if (res[1]!=0) res[1][27]=a10;
  if (res[1]!=0) res[1][28]=a10;
  a7=(a6*a7);
  if (res[1]!=0) res[1][29]=a7;
  a7=arg[1]? arg[1][34] : 0;
  a14=(a2*a7);
  a15=arg[1]? arg[1][32] : 0;
  a9=(a9*a15);
  a9=(a0*a9);
  a14=(a14-a9);
  if (res[1]!=0) res[1][30]=a14;
  a14=(a3*a7);
  a11=(a11*a15);
  a11=(a0*a11);
  a14=(a14+a11);
  if (res[1]!=0) res[1][31]=a14;
  a14=(a8*a7);
  a14=(a5*a14);
  a11=arg[1]? arg[1][33] : 0;
  a13=(a13*a11);
  a13=(a4*a13);
  a14=(a14+a13);
  if (res[1]!=0) res[1][32]=a14;
  if (res[1]!=0) res[1][33]=a10;
  if (res[1]!=0) res[1][34]=a10;
  a7=(a6*a7);
  if (res[1]!=0) res[1][35]=a7;
  a7=arg[2]? arg[2][4] : 0;
  a14=(a2*a7);
  a13=sin(a1);
  a11=arg[2]? arg[2][2] : 0;
  a15=(a13*a11);
  a15=(a0*a15);
  a14=(a14-a15);
  if (res[2]!=0) res[2][0]=a14;
  a14=(a3*a7);
  a1=cos(a1);
  a11=(a1*a11);
  a11=(a0*a11);
  a14=(a14+a11);
  if (res[2]!=0) res[2][1]=a14;
  a14=(a8*a7);
  a14=(a5*a14);
  a11=casadi_sq(a5);
  a11=(a12-a11);
  a15=arg[2]? arg[2][3] : 0;
  a15=(a11*a15);
  a15=(a4*a15);
  a14=(a14+a15);
  if (res[2]!=0) res[2][2]=a14;
  if (res[2]!=0) res[2][3]=a10;
  if (res[2]!=0) res[2][4]=a12;
  a7=(a6*a7);
  if (res[2]!=0) res[2][5]=a7;
  a7=arg[2]? arg[2][10] : 0;
  a14=(a2*a7);
  a15=arg[2]? arg[2][8] : 0;
  a9=(a13*a15);
  a9=(a0*a9);
  a14=(a14-a9);
  if (res[2]!=0) res[2][6]=a14;
  a14=(a3*a7);
  a15=(a1*a15);
  a15=(a0*a15);
  a14=(a14+a15);
  if (res[2]!=0) res[2][7]=a14;
  a14=(a8*a7);
  a14=(a5*a14);
  a15=arg[2]? arg[2][9] : 0;
  a15=(a11*a15);
  a15=(a4*a15);
  a14=(a14+a15);
  if (res[2]!=0) res[2][8]=a14;
  if (res[2]!=0) res[2][9]=a12;
  if (res[2]!=0) res[2][10]=a10;
  a7=(a6*a7);
  if (res[2]!=0) res[2][11]=a7;
  a7=arg[2]? arg[2][16] : 0;
  a2=(a2*a7);
  a12=arg[2]? arg[2][14] : 0;
  a13=(a13*a12);
  a13=(a0*a13);
  a2=(a2-a13);
  if (res[2]!=0) res[2][12]=a2;
  a3=(a3*a7);
  a1=(a1*a12);
  a1=(a0*a1);
  a3=(a3+a1);
  if (res[2]!=0) res[2][13]=a3;
  a8=(a8*a7);
  a5=(a5*a8);
  a8=arg[2]? arg[2][15] : 0;
  a11=(a11*a8);
  a4=(a4*a11);
  a5=(a5+a4);
  if (res[2]!=0) res[2][14]=a5;
  if (res[2]!=0) res[2][15]=a10;
  if (res[2]!=0) res[2][16]=a10;
  a6=(a6*a7);
  a0=(a0+a6);
  if (res[2]!=0) res[2][17]=a0;
  return 0;
}

CASADI_SYMBOL_EXPORT int car_kinematic_expl_vde_forw(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int car_kinematic_expl_vde_forw_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int car_kinematic_expl_vde_forw_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void car_kinematic_expl_vde_forw_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int car_kinematic_expl_vde_forw_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void car_kinematic_expl_vde_forw_release(int mem) {
}

CASADI_SYMBOL_EXPORT void car_kinematic_expl_vde_forw_incref(void) {
}

CASADI_SYMBOL_EXPORT void car_kinematic_expl_vde_forw_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int car_kinematic_expl_vde_forw_n_in(void) { return 5;}

CASADI_SYMBOL_EXPORT casadi_int car_kinematic_expl_vde_forw_n_out(void) { return 3;}

CASADI_SYMBOL_EXPORT casadi_real car_kinematic_expl_vde_forw_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* car_kinematic_expl_vde_forw_name_in(casadi_int i){
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    case 2: return "i2";
    case 3: return "i3";
    case 4: return "i4";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* car_kinematic_expl_vde_forw_name_out(casadi_int i){
  switch (i) {
    case 0: return "o0";
    case 1: return "o1";
    case 2: return "o2";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* car_kinematic_expl_vde_forw_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    case 2: return casadi_s2;
    case 3: return casadi_s3;
    case 4: return casadi_s4;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* car_kinematic_expl_vde_forw_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    case 2: return casadi_s2;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int car_kinematic_expl_vde_forw_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 5;
  if (sz_res) *sz_res = 3;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
