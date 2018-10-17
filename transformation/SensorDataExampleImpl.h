

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SensorDataExampleImpl.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef SensorDataExampleImpl_229212648_h
#define SensorDataExampleImpl_229212648_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_c_h
#include "ndds/ndds_c.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#define SENSOR_DATA_ARRAY_SIZE_c (64)

extern const char *SensorData_cTYPENAME;

typedef struct SensorData_c {

    DDS_UnsignedLong   ID ;
    DDS_Float   reading ;
    DDS_Boolean   active ;

    SensorData_c() {}

} SensorData_c ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* SensorData_c_get_typecode(void); /* Type code */

DDS_SEQUENCE(SensorData_cSeq, SensorData_c);

NDDSUSERDllExport
RTIBool SensorData_c_initialize(
    SensorData_c* self);

NDDSUSERDllExport
RTIBool SensorData_c_initialize_ex(
    SensorData_c* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool SensorData_c_initialize_w_params(
    SensorData_c* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
void SensorData_c_finalize(
    SensorData_c* self);

NDDSUSERDllExport
void SensorData_c_finalize_ex(
    SensorData_c* self,RTIBool deletePointers);

NDDSUSERDllExport
void SensorData_c_finalize_w_params(
    SensorData_c* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void SensorData_c_finalize_optional_members(
    SensorData_c* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool SensorData_c_copy(
    SensorData_c* dst,
    const SensorData_c* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern const char *SensorDataExample_cTYPENAME;

typedef struct SensorDataExample_c {

    SensorData_c   sensors [(SENSOR_DATA_ARRAY_SIZE_c)];

    SensorDataExample_c() {}

} SensorDataExample_c ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* SensorDataExample_c_get_typecode(void); /* Type code */

DDS_SEQUENCE(SensorDataExample_cSeq, SensorDataExample_c);

NDDSUSERDllExport
RTIBool SensorDataExample_c_initialize(
    SensorDataExample_c* self);

NDDSUSERDllExport
RTIBool SensorDataExample_c_initialize_ex(
    SensorDataExample_c* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool SensorDataExample_c_initialize_w_params(
    SensorDataExample_c* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
void SensorDataExample_c_finalize(
    SensorDataExample_c* self);

NDDSUSERDllExport
void SensorDataExample_c_finalize_ex(
    SensorDataExample_c* self,RTIBool deletePointers);

NDDSUSERDllExport
void SensorDataExample_c_finalize_w_params(
    SensorDataExample_c* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void SensorDataExample_c_finalize_optional_members(
    SensorDataExample_c* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool SensorDataExample_c_copy(
    SensorDataExample_c* dst,
    const SensorDataExample_c* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* SensorDataExampleImpl */

