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
  #define CASADI_PREFIX(ID) car_kinematic_cost_ext_cost_fun_jac_ ## ID
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
#define casadi_sign CASADI_PREFIX(sign)
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

casadi_real casadi_sign(casadi_real x) { return x<0 ? -1 : x>0 ? 1 : x;}

static const casadi_int casadi_s0[10] = {6, 1, 0, 6, 0, 1, 2, 3, 4, 5};
static const casadi_int casadi_s1[7] = {3, 1, 0, 3, 0, 1, 2};
static const casadi_int casadi_s2[16] = {12, 1, 0, 12, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
static const casadi_int casadi_s3[5] = {1, 1, 0, 1, 0};
static const casadi_int casadi_s4[13] = {9, 1, 0, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8};

/* car_kinematic_cost_ext_cost_fun_jac:(i0[6],i1[3],i2[12])->(o0,o1[9]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a4, a5, a6, a7, a8, a9;
  a0=arg[2]? arg[2][0] : 0;
  a1=arg[0]? arg[0][5] : 0;
  a2=(a0*a1);
  a3=arg[2]? arg[2][1] : 0;
  a2=(a2+a3);
  a4=(a2*a1);
  a5=arg[2]? arg[2][2] : 0;
  a4=(a4+a5);
  a6=(a4*a1);
  a7=arg[2]? arg[2][3] : 0;
  a6=(a6+a7);
  a8=(a6*a1);
  a9=arg[2]? arg[2][4] : 0;
  a8=(a8+a9);
  a10=(a8*a1);
  a11=arg[2]? arg[2][5] : 0;
  a10=(a10+a11);
  a11=arg[0]? arg[0][0] : 0;
  a10=(a10-a11);
  a11=5.;
  a12=(a11*a0);
  a13=(a12*a1);
  a14=4.;
  a3=(a14*a3);
  a13=(a13+a3);
  a3=(a13*a1);
  a15=3.;
  a5=(a15*a5);
  a3=(a3+a5);
  a5=(a3*a1);
  a16=2.;
  a7=(a16*a7);
  a5=(a5+a7);
  a7=(a5*a1);
  a7=(a7+a9);
  a9=casadi_sq(a7);
  a17=arg[2]? arg[2][6] : 0;
  a11=(a11*a17);
  a18=(a11*a1);
  a19=arg[2]? arg[2][7] : 0;
  a14=(a14*a19);
  a18=(a18+a14);
  a14=(a18*a1);
  a20=arg[2]? arg[2][8] : 0;
  a15=(a15*a20);
  a14=(a14+a15);
  a15=(a14*a1);
  a21=arg[2]? arg[2][9] : 0;
  a16=(a16*a21);
  a15=(a15+a16);
  a16=(a15*a1);
  a22=arg[2]? arg[2][10] : 0;
  a16=(a16+a22);
  a23=casadi_sq(a16);
  a9=(a9+a23);
  a9=sqrt(a9);
  a23=(a7/a9);
  a24=(a10*a23);
  a25=(a17*a1);
  a25=(a25+a19);
  a19=(a25*a1);
  a19=(a19+a20);
  a20=(a19*a1);
  a20=(a20+a21);
  a21=(a20*a1);
  a21=(a21+a22);
  a22=(a21*a1);
  a26=arg[2]? arg[2][11] : 0;
  a22=(a22+a26);
  a26=arg[0]? arg[0][1] : 0;
  a22=(a22-a26);
  a26=(a16/a9);
  a27=(a22*a26);
  a24=(a24+a27);
  a27=(a24*a23);
  a27=(a10-a27);
  a28=casadi_sq(a27);
  a29=(a24*a26);
  a29=(a22-a29);
  a30=casadi_sq(a29);
  a28=(a28+a30);
  a30=fabs(a24);
  a31=casadi_sq(a30);
  a28=(a28+a31);
  a31=1.;
  a31=(a1-a31);
  a32=casadi_sq(a31);
  a28=(a28+a32);
  a32=arg[1]? arg[1][0] : 0;
  a33=casadi_sq(a32);
  a28=(a28+a33);
  a33=arg[1]? arg[1][1] : 0;
  a34=casadi_sq(a33);
  a28=(a28+a34);
  a34=arg[1]? arg[1][2] : 0;
  a35=casadi_sq(a34);
  a28=(a28+a35);
  if (res[0]!=0) res[0][0]=a28;
  a32=(a32+a32);
  if (res[1]!=0) res[1][0]=a32;
  a33=(a33+a33);
  if (res[1]!=0) res[1][1]=a33;
  a34=(a34+a34);
  if (res[1]!=0) res[1][2]=a34;
  a27=(a27+a27);
  a34=casadi_sign(a24);
  a30=(a30+a30);
  a34=(a34*a30);
  a29=(a29+a29);
  a30=(a26*a29);
  a34=(a34-a30);
  a30=(a23*a27);
  a34=(a34-a30);
  a30=(a23*a34);
  a30=(a27+a30);
  a33=(-a30);
  if (res[1]!=0) res[1][3]=a33;
  a33=(a26*a34);
  a33=(a29+a33);
  a32=(-a33);
  if (res[1]!=0) res[1][4]=a32;
  a32=0.;
  if (res[1]!=0) res[1][5]=a32;
  if (res[1]!=0) res[1][6]=a32;
  if (res[1]!=0) res[1][7]=a32;
  a31=(a31+a31);
  a21=(a21*a33);
  a31=(a31+a21);
  a33=(a1*a33);
  a20=(a20*a33);
  a31=(a31+a20);
  a33=(a1*a33);
  a19=(a19*a33);
  a31=(a31+a19);
  a33=(a1*a33);
  a25=(a25*a33);
  a31=(a31+a25);
  a33=(a1*a33);
  a17=(a17*a33);
  a31=(a31+a17);
  a22=(a22*a34);
  a29=(a24*a29);
  a22=(a22-a29);
  a29=(a22/a9);
  a16=(a16+a16);
  a26=(a26/a9);
  a26=(a26*a22);
  a23=(a23/a9);
  a10=(a10*a34);
  a24=(a24*a27);
  a10=(a10-a24);
  a23=(a23*a10);
  a26=(a26+a23);
  a23=(a9+a9);
  a26=(a26/a23);
  a16=(a16*a26);
  a29=(a29-a16);
  a15=(a15*a29);
  a31=(a31+a15);
  a29=(a1*a29);
  a14=(a14*a29);
  a31=(a31+a14);
  a29=(a1*a29);
  a18=(a18*a29);
  a31=(a31+a18);
  a29=(a1*a29);
  a11=(a11*a29);
  a31=(a31+a11);
  a10=(a10/a9);
  a7=(a7+a7);
  a7=(a7*a26);
  a10=(a10-a7);
  a5=(a5*a10);
  a31=(a31+a5);
  a10=(a1*a10);
  a3=(a3*a10);
  a31=(a31+a3);
  a10=(a1*a10);
  a13=(a13*a10);
  a31=(a31+a13);
  a10=(a1*a10);
  a12=(a12*a10);
  a31=(a31+a12);
  a8=(a8*a30);
  a31=(a31+a8);
  a30=(a1*a30);
  a6=(a6*a30);
  a31=(a31+a6);
  a30=(a1*a30);
  a4=(a4*a30);
  a31=(a31+a4);
  a30=(a1*a30);
  a2=(a2*a30);
  a31=(a31+a2);
  a1=(a1*a30);
  a0=(a0*a1);
  a31=(a31+a0);
  if (res[1]!=0) res[1][8]=a31;
  return 0;
}

CASADI_SYMBOL_EXPORT int car_kinematic_cost_ext_cost_fun_jac(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int car_kinematic_cost_ext_cost_fun_jac_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int car_kinematic_cost_ext_cost_fun_jac_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void car_kinematic_cost_ext_cost_fun_jac_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int car_kinematic_cost_ext_cost_fun_jac_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void car_kinematic_cost_ext_cost_fun_jac_release(int mem) {
}

CASADI_SYMBOL_EXPORT void car_kinematic_cost_ext_cost_fun_jac_incref(void) {
}

CASADI_SYMBOL_EXPORT void car_kinematic_cost_ext_cost_fun_jac_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int car_kinematic_cost_ext_cost_fun_jac_n_in(void) { return 3;}

CASADI_SYMBOL_EXPORT casadi_int car_kinematic_cost_ext_cost_fun_jac_n_out(void) { return 2;}

CASADI_SYMBOL_EXPORT casadi_real car_kinematic_cost_ext_cost_fun_jac_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* car_kinematic_cost_ext_cost_fun_jac_name_in(casadi_int i){
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    case 2: return "i2";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* car_kinematic_cost_ext_cost_fun_jac_name_out(casadi_int i){
  switch (i) {
    case 0: return "o0";
    case 1: return "o1";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* car_kinematic_cost_ext_cost_fun_jac_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    case 2: return casadi_s2;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* car_kinematic_cost_ext_cost_fun_jac_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s3;
    case 1: return casadi_s4;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int car_kinematic_cost_ext_cost_fun_jac_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 3;
  if (sz_res) *sz_res = 2;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
