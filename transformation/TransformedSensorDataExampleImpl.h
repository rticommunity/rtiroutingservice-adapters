

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TransformedSensorDataExampleImpl.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef TransformedSensorDataExampleImpl_1057072684_h
#define TransformedSensorDataExampleImpl_1057072684_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_c_h
#include "ndds/ndds_c.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#define TRANSFORMED_SENSOR_DATA_ARRAY_SIZE_c (64)

extern const char *TransformedSensorDataExample_cTYPENAME;

typedef struct TransformedSensorDataExample_c {

    DDS_UnsignedLong   ID [(TRANSFORMED_SENSOR_DATA_ARRAY_SIZE_c)];
    DDS_Float   reading [(TRANSFORMED_SENSOR_DATA_ARRAY_SIZE_c)];
    DDS_Boolean   active [(TRANSFORMED_SENSOR_DATA_ARRAY_SIZE_c)];

    TransformedSensorDataExample_c() {}

} TransformedSensorDataExample_c ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* TransformedSensorDataExample_c_get_typecode(void); /* Type code */

DDS_SEQUENCE(TransformedSensorDataExample_cSeq, TransformedSensorDataExample_c);

NDDSUSERDllExport
RTIBool TransformedSensorDataExample_c_initialize(
    TransformedSensorDataExample_c* self);

NDDSUSERDllExport
RTIBool TransformedSensorDataExample_c_initialize_ex(
    TransformedSensorDataExample_c* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool TransformedSensorDataExample_c_initialize_w_params(
    TransformedSensorDataExample_c* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
void TransformedSensorDataExample_c_finalize(
    TransformedSensorDataExample_c* self);

NDDSUSERDllExport
void TransformedSensorDataExample_c_finalize_ex(
    TransformedSensorDataExample_c* self,RTIBool deletePointers);

NDDSUSERDllExport
void TransformedSensorDataExample_c_finalize_w_params(
    TransformedSensorDataExample_c* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void TransformedSensorDataExample_c_finalize_optional_members(
    TransformedSensorDataExample_c* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool TransformedSensorDataExample_c_copy(
    TransformedSensorDataExample_c* dst,
    const TransformedSensorDataExample_c* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* TransformedSensorDataExampleImpl */

