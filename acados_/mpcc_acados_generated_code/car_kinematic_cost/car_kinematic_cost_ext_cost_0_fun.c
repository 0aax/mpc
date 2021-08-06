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
  #define CASADI_PREFIX(ID) car_kinematic_cost_ext_cost_0_fun_ ## ID
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
static const casadi_int casadi_s1[7] = {3, 1, 0, 3, 0, 1, 2};
static const casadi_int casadi_s2[16] = {12, 1, 0, 12, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
static const casadi_int casadi_s3[5] = {1, 1, 0, 1, 0};

/* car_kinematic_cost_ext_cost_0_fun:(i0[6],i1[3],i2[12])->(o0) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a2, a3, a4, a5, a6, a7, a8, a9;
  a0=arg[2]? arg[2][0] : 0;
  a1=arg[0]? arg[0][5] : 0;
  a2=(a0*a1);
  a3=arg[2]? arg[2][1] : 0;
  a2=(a2+a3);
  a2=(a2*a1);
  a4=arg[2]? arg[2][2] : 0;
  a2=(a2+a4);
  a2=(a2*a1);
  a5=arg[2]? arg[2][3] : 0;
  a2=(a2+a5);
  a2=(a2*a1);
  a6=arg[2]? arg[2][4] : 0;
  a2=(a2+a6);
  a2=(a2*a1);
  a7=arg[2]? arg[2][5] : 0;
  a2=(a2+a7);
  a7=arg[0]? arg[0][0] : 0;
  a2=(a2-a7);
  a7=5.;
  a0=(a7*a0);
  a0=(a0*a1);
  a8=4.;
  a3=(a8*a3);
  a0=(a0+a3);
  a0=(a0*a1);
  a3=3.;
  a4=(a3*a4);
  a0=(a0+a4);
  a0=(a0*a1);
  a4=2.;
  a5=(a4*a5);
  a0=(a0+a5);
  a0=(a0*a1);
  a0=(a0+a6);
  a6=casadi_sq(a0);
  a5=arg[2]? arg[2][6] : 0;
  a7=(a7*a5);
  a7=(a7*a1);
  a9=arg[2]? arg[2][7] : 0;
  a8=(a8*a9);
  a7=(a7+a8);
  a7=(a7*a1);
  a8=arg[2]? arg[2][8] : 0;
  a3=(a3*a8);
  a7=(a7+a3);
  a7=(a7*a1);
  a3=arg[2]? arg[2][9] : 0;
  a4=(a4*a3);
  a7=(a7+a4);
  a7=(a7*a1);
  a4=arg[2]? arg[2][10] : 0;
  a7=(a7+a4);
  a10=casadi_sq(a7);
  a6=(a6+a10);
  a6=sqrt(a6);
  a0=(a0/a6);
  a10=(a2*a0);
  a5=(a5*a1);
  a5=(a5+a9);
  a5=(a5*a1);
  a5=(a5+a8);
  a5=(a5*a1);
  a5=(a5+a3);
  a5=(a5*a1);
  a5=(a5+a4);
  a5=(a5*a1);
  a4=arg[2]? arg[2][11] : 0;
  a5=(a5+a4);
  a4=arg[0]? arg[0][1] : 0;
  a5=(a5-a4);
  a7=(a7/a6);
  a6=(a5*a7);
  a10=(a10+a6);
  a0=(a10*a0);
  a2=(a2-a0);
  a2=casadi_sq(a2);
  a7=(a10*a7);
  a5=(a5-a7);
  a5=casadi_sq(a5);
  a2=(a2+a5);
  a10=fabs(a10);
  a10=casadi_sq(a10);
  a2=(a2+a10);
  a10=1.;
  a1=(a1-a10);
  a1=casadi_sq(a1);
  a2=(a2+a1);
  a1=arg[1]? arg[1][0] : 0;
  a1=casadi_sq(a1);
  a2=(a2+a1);
  a1=arg[1]? arg[1][1] : 0;
  a1=casadi_sq(a1);
  a2=(a2+a1);
  a1=arg[1]? arg[1][2] : 0;
  a1=casadi_sq(a1);
  a2=(a2+a1);
  if (res[0]!=0) res[0][0]=a2;
  return 0;
}

CASADI_SYMBOL_EXPORT int car_kinematic_cost_ext_cost_0_fun(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int car_kinematic_cost_ext_cost_0_fun_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int car_kinematic_cost_ext_cost_0_fun_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void car_kinematic_cost_ext_cost_0_fun_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int car_kinematic_cost_ext_cost_0_fun_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void car_kinematic_cost_ext_cost_0_fun_release(int mem) {
}

CASADI_SYMBOL_EXPORT void car_kinematic_cost_ext_cost_0_fun_incref(void) {
}

CASADI_SYMBOL_EXPORT void car_kinematic_cost_ext_cost_0_fun_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int car_kinematic_cost_ext_cost_0_fun_n_in(void) { return 3;}

CASADI_SYMBOL_EXPORT casadi_int car_kinematic_cost_ext_cost_0_fun_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_real car_kinematic_cost_ext_cost_0_fun_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* car_kinematic_cost_ext_cost_0_fun_name_in(casadi_int i){
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    case 2: return "i2";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* car_kinematic_cost_ext_cost_0_fun_name_out(casadi_int i){
  switch (i) {
    case 0: return "o0";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* car_kinematic_cost_ext_cost_0_fun_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    case 2: return casadi_s2;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* car_kinematic_cost_ext_cost_0_fun_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s3;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int car_kinematic_cost_ext_cost_0_fun_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 3;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
