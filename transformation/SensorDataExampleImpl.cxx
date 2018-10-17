

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SensorDataExampleImpl.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_c_h
#include "ndds/ndds_c.h"
#endif
#ifndef dds_c_log_infrastructure_h                      
#include "dds_c/dds_c_infrastructure_impl.h"       
#endif 

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "SensorDataExampleImpl.h"

#ifndef NDDS_STANDALONE_TYPE
#include "SensorDataExampleImplPlugin.h"
#endif

/* ========================================================================= */
const char *SensorData_cTYPENAME = "SensorData";

DDS_TypeCode* SensorData_c_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member SensorData_c_g_tc_members[3]=
    {

        {
            (char *)"ID",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"reading",/* Member name */
            {
                1,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"active",/* Member name */
            {
                2,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode SensorData_c_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"SensorData", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            3, /* Number of members */
            SensorData_c_g_tc_members, /* Members */
            DDS_VM_NONE , /* Ignored */         DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for SensorData_c*/

    if (is_initialized) {
        return &SensorData_c_g_tc;
    }

    SensorData_c_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    SensorData_c_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    SensorData_c_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

    SensorData_c_g_tc._data._sampleAccessInfo = NULL;
    SensorData_c_g_tc._data._typePlugin = NULL;

    is_initialized = RTI_TRUE;

    return &SensorData_c_g_tc;
}

RTIBool SensorData_c_initialize(
    SensorData_c* sample) {
    return SensorData_c_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool SensorData_c_initialize_ex(
    SensorData_c* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return SensorData_c_initialize_w_params(
        sample,&allocParams);

}

RTIBool SensorData_c_initialize_w_params(
    SensorData_c* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initUnsignedLong(&sample->ID)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initFloat(&sample->reading)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initBoolean(&sample->active)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

void SensorData_c_finalize(
    SensorData_c* sample)
{

    SensorData_c_finalize_ex(sample,RTI_TRUE);
}

void SensorData_c_finalize_ex(
    SensorData_c* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    SensorData_c_finalize_w_params(
        sample,&deallocParams);
}

void SensorData_c_finalize_w_params(
    SensorData_c* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void SensorData_c_finalize_optional_members(
    SensorData_c* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool SensorData_c_copy(
    SensorData_c* dst,
    const SensorData_c* src)
{

    if (dst == NULL || src == NULL) {
        return RTI_FALSE;
    }

    if (!RTICdrType_copyUnsignedLong (
        &dst->ID, &src->ID)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyFloat (
        &dst->reading, &src->reading)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyBoolean (
        &dst->active, &src->active)) { 
        return RTI_FALSE;
    }

    return RTI_TRUE;

}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'SensorData_c' sequence class.
*/
#define T SensorData_c
#define TSeq SensorData_cSeq

#define T_initialize_w_params SensorData_c_initialize_w_params

#define T_finalize_w_params   SensorData_c_finalize_w_params
#define T_copy       SensorData_c_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */
const char *SensorDataExample_cTYPENAME = "SensorDataExample";

DDS_TypeCode* SensorDataExample_c_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode SensorDataExample_c_g_tc_sensors_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,(SENSOR_DATA_ARRAY_SIZE_c), NULL,NULL);
    static DDS_TypeCode_Member SensorDataExample_c_g_tc_members[1]=
    {

        {
            (char *)"sensors",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode SensorDataExample_c_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"SensorDataExample", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            1, /* Number of members */
            SensorDataExample_c_g_tc_members, /* Members */
            DDS_VM_NONE , /* Ignored */         DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for SensorDataExample_c*/

    if (is_initialized) {
        return &SensorDataExample_c_g_tc;
    }

    SensorDataExample_c_g_tc_sensors_array._data._typeCode =(RTICdrTypeCode *)SensorData_c_get_typecode();
    SensorDataExample_c_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& SensorDataExample_c_g_tc_sensors_array;

    SensorDataExample_c_g_tc._data._sampleAccessInfo = NULL;
    SensorDataExample_c_g_tc._data._typePlugin = NULL;

    is_initialized = RTI_TRUE;

    return &SensorDataExample_c_g_tc;
}

RTIBool SensorDataExample_c_initialize(
    SensorDataExample_c* sample) {
    return SensorDataExample_c_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool SensorDataExample_c_initialize_ex(
    SensorDataExample_c* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return SensorDataExample_c_initialize_w_params(
        sample,&allocParams);

}

RTIBool SensorDataExample_c_initialize_w_params(
    SensorDataExample_c* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    {
        int i = 0;
        SensorData_c* elem =
        (SensorData_c*) &sample->sensors[0];

        for (i = 0; i < (int) (((SENSOR_DATA_ARRAY_SIZE_c))); ++i, ++elem) {
            if (!SensorData_c_initialize_w_params(elem,allocParams)) {
                return RTI_FALSE;
            }
        }
    }
    return RTI_TRUE;
}

void SensorDataExample_c_finalize(
    SensorDataExample_c* sample)
{

    SensorDataExample_c_finalize_ex(sample,RTI_TRUE);
}

void SensorDataExample_c_finalize_ex(
    SensorDataExample_c* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    SensorDataExample_c_finalize_w_params(
        sample,&deallocParams);
}

void SensorDataExample_c_finalize_w_params(
    SensorDataExample_c* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    {
        int i = 0;
        SensorData_c* elem =
        (SensorData_c*) &sample->sensors[0];

        for (i = 0; i < (int) (((SENSOR_DATA_ARRAY_SIZE_c))); ++i, ++elem) {
            SensorData_c_finalize_w_params(elem,deallocParams);
        }
    }

}

void SensorDataExample_c_finalize_optional_members(
    SensorDataExample_c* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    {
        int i = 0;
        SensorData_c* elem =
        (SensorData_c*) &sample->sensors[0];

        for (i = 0; i < (int) (((SENSOR_DATA_ARRAY_SIZE_c))); ++i, ++elem) {
            SensorData_c_finalize_optional_members(elem, deallocParams->delete_pointers);
        }
    }
}

RTIBool SensorDataExample_c_copy(
    SensorDataExample_c* dst,
    const SensorDataExample_c* src)
{

    if (dst == NULL || src == NULL) {
        return RTI_FALSE;
    }

    {
        int i = 0;
        SensorData_c* elemOut = (SensorData_c*) &dst->sensors[0];
        const SensorData_c* elemIn = (const SensorData_c*) &src->sensors[0];
        for (i = 0; i < (int) (((SENSOR_DATA_ARRAY_SIZE_c)));++i, ++elemOut, ++elemIn) {
            if (!SensorData_c_copy (elemOut,(const SensorData_c*)elemIn)) {
                return RTI_FALSE;
            }
        }
    }

    return RTI_TRUE;

}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'SensorDataExample_c' sequence class.
*/
#define T SensorDataExample_c
#define TSeq SensorDataExample_cSeq

#define T_initialize_w_params SensorDataExample_c_initialize_w_params

#define T_finalize_w_params   SensorDataExample_c_finalize_w_params
#define T_copy       SensorDataExample_c_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

