
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TransformedSensorDataExampleImpl.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include <string.h>

#ifndef ndds_c_h
#include "ndds/ndds_c.h"
#endif

#ifndef osapi_type_h
#include "osapi/osapi_type.h"
#endif
#ifndef osapi_heap_h
#include "osapi/osapi_heap.h"
#endif

#ifndef osapi_utility_h
#include "osapi/osapi_utility.h"
#endif

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif

#ifndef cdr_type_object_h
#include "cdr/cdr_typeObject.h"
#endif

#ifndef cdr_encapsulation_h
#include "cdr/cdr_encapsulation.h"
#endif

#ifndef cdr_stream_h
#include "cdr/cdr_stream.h"
#endif

#include "xcdr/xcdr_interpreter.h"
#include "xcdr/xcdr_stream.h"

#ifndef cdr_log_h
#include "cdr/cdr_log.h"
#endif

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#define RTI_CDR_CURRENT_SUBMODULE RTI_CDR_SUBMODULE_MASK_STREAM

#include "TransformedSensorDataExampleImplPlugin.h"

/* ----------------------------------------------------------------------------
*  Type TransformedSensorDataExample_c
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

TransformedSensorDataExample_c*
TransformedSensorDataExample_cPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    TransformedSensorDataExample_c *sample = NULL;

    RTIOsapiHeap_allocateStructure(&(sample),TransformedSensorDataExample_c);
    if (sample == NULL) {
        return NULL;
    }

    if (!TransformedSensorDataExample_c_initialize_w_params(sample,alloc_params)) {
        RTIOsapiHeap_freeStructure(sample);
        sample=NULL;
    }
    return sample;
} 

TransformedSensorDataExample_c *
TransformedSensorDataExample_cPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    TransformedSensorDataExample_c *sample = NULL;

    RTIOsapiHeap_allocateStructure(&(sample),TransformedSensorDataExample_c);

    if(sample == NULL) {
        return NULL;
    }

    if (!TransformedSensorDataExample_c_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        RTIOsapiHeap_freeStructure(sample);
        sample=NULL;
    }

    return sample;
}

TransformedSensorDataExample_c *
TransformedSensorDataExample_cPluginSupport_create_data(void)
{
    return TransformedSensorDataExample_cPluginSupport_create_data_ex(RTI_TRUE);
}

void 
TransformedSensorDataExample_cPluginSupport_destroy_data_w_params(
    TransformedSensorDataExample_c *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    TransformedSensorDataExample_c_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
    sample=NULL;
}

void 
TransformedSensorDataExample_cPluginSupport_destroy_data_ex(
    TransformedSensorDataExample_c *sample,RTIBool deallocate_pointers) {
    TransformedSensorDataExample_c_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
    sample=NULL;
}

void 
TransformedSensorDataExample_cPluginSupport_destroy_data(
    TransformedSensorDataExample_c *sample) {

    TransformedSensorDataExample_cPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
TransformedSensorDataExample_cPluginSupport_copy_data(
    TransformedSensorDataExample_c *dst,
    const TransformedSensorDataExample_c *src)
{
    return TransformedSensorDataExample_c_copy(dst,(const TransformedSensorDataExample_c*) src);
}

void 
TransformedSensorDataExample_cPluginSupport_print_data(
    const TransformedSensorDataExample_c *sample,
    const char *desc,
    unsigned int indent_level)
{

    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
        RTILog_debug("%s:\n", desc);
    } else {
        RTILog_debug("\n");
    }

    if (sample == NULL) {
        RTILog_debug("NULL\n");
        return;
    }

    RTICdrType_printArray(
        sample->ID, ((TRANSFORMED_SENSOR_DATA_ARRAY_SIZE_c)), RTI_CDR_UNSIGNED_LONG_SIZE,
        (RTICdrTypePrintFunction)RTICdrType_printUnsignedLong, 
        "ID", indent_level + 1);        

    RTICdrType_printArray(
        sample->reading, ((TRANSFORMED_SENSOR_DATA_ARRAY_SIZE_c)), RTI_CDR_FLOAT_SIZE,
        (RTICdrTypePrintFunction)RTICdrType_printFloat, 
        "reading", indent_level + 1);        

    RTICdrType_printArray(
        sample->active, ((TRANSFORMED_SENSOR_DATA_ARRAY_SIZE_c)), RTI_CDR_BOOLEAN_SIZE,
        (RTICdrTypePrintFunction)RTICdrType_printBoolean, 
        "active", indent_level + 1);        

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData 
TransformedSensorDataExample_cPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{

    if (registration_data) {} /* To avoid warnings */
    if (participant_info) {} /* To avoid warnings */
    if (top_level_registration) {} /* To avoid warnings */
    if (container_plugin_context) {} /* To avoid warnings */
    if (type_code) {} /* To avoid warnings */
    return PRESTypePluginDefaultParticipantData_new(participant_info);
}

void 
TransformedSensorDataExample_cPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{  		
    if (participant_data != NULL) {
        PRESTypePluginDefaultParticipantData_delete(participant_data);
    }
}

PRESTypePluginEndpointData
TransformedSensorDataExample_cPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;
    unsigned int serializedSampleMaxSize;

    if (top_level_registration) {} /* To avoid warnings */
    if (containerPluginContext) {} /* To avoid warnings */

    epd = PRESTypePluginDefaultEndpointData_new(
        participant_data,
        endpoint_info,
        (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
        TransformedSensorDataExample_cPluginSupport_create_data,
        (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
        TransformedSensorDataExample_cPluginSupport_destroy_data,
        NULL , NULL );

    if (epd == NULL) {
        return NULL;
    } 

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = TransformedSensorDataExample_cPlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
            epd,
            endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            TransformedSensorDataExample_cPlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            TransformedSensorDataExample_cPlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }

    return epd;    
}

void 
TransformedSensorDataExample_cPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{
    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void    
TransformedSensorDataExample_cPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TransformedSensorDataExample_c *sample,
    void *handle)
{
    TransformedSensorDataExample_c_finalize_optional_members(sample, RTI_TRUE);

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool 
TransformedSensorDataExample_cPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TransformedSensorDataExample_c *dst,
    const TransformedSensorDataExample_c *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return TransformedSensorDataExample_cPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
TransformedSensorDataExample_cPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool 
TransformedSensorDataExample_cPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TransformedSensorDataExample_c *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;
    RTIBool retval = RTI_TRUE;

    if (endpoint_data) {}
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_sample) {

        if (!RTICdrStream_serializePrimitiveArray(
            stream, (void*) sample->ID, ((TRANSFORMED_SENSOR_DATA_ARRAY_SIZE_c)), RTI_CDR_UNSIGNED_LONG_TYPE)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializePrimitiveArray(
            stream, (void*) sample->reading, ((TRANSFORMED_SENSOR_DATA_ARRAY_SIZE_c)), RTI_CDR_FLOAT_TYPE)) {
            return RTI_FALSE;
        }

        if (!RTICdrStream_serializePrimitiveArray(
            stream, (void*) sample->active, ((TRANSFORMED_SENSOR_DATA_ARRAY_SIZE_c)), RTI_CDR_BOOLEAN_TYPE)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return retval;
}

RTIBool 
TransformedSensorDataExample_cPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TransformedSensorDataExample_c *sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if (deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if(deserialize_sample) {

        TransformedSensorDataExample_c_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

        if (!RTICdrStream_deserializePrimitiveArray(
            stream, (void*) sample->ID, ((TRANSFORMED_SENSOR_DATA_ARRAY_SIZE_c)), RTI_CDR_UNSIGNED_LONG_TYPE)) {
            goto fin; 
        }

        if (!RTICdrStream_deserializePrimitiveArray(
            stream, (void*) sample->reading, ((TRANSFORMED_SENSOR_DATA_ARRAY_SIZE_c)), RTI_CDR_FLOAT_TYPE)) {
            goto fin; 
        }

        if (!RTICdrStream_deserializePrimitiveArray(
            stream, (void*) sample->active, ((TRANSFORMED_SENSOR_DATA_ARRAY_SIZE_c)), RTI_CDR_BOOLEAN_TYPE)) {
            goto fin; 
        }

    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;

}

RTIBool
TransformedSensorDataExample_cPlugin_serialize_to_cdr_buffer_ex(
    char *buffer,
    unsigned int *length,
    const TransformedSensorDataExample_c *sample,
    DDS_DataRepresentationId_t representation)
{
    RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    RTIBool result;

    if (length == NULL) {
        return RTI_FALSE;
    }

    encapsulationId = DDS_DataRepresentationQosPolicy_getNativeEncapsulation(
        representation);
    if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
        return RTI_FALSE;
    }

    epd._maxSizeSerializedSample =
    TransformedSensorDataExample_cPlugin_get_serialized_sample_max_size(
        (PRESTypePluginEndpointData)&epd, 
        RTI_TRUE, 
        encapsulationId,
        0);

    if (buffer == NULL) {
        *length = 
        TransformedSensorDataExample_cPlugin_get_serialized_sample_size(
            (PRESTypePluginEndpointData)&epd,
            RTI_TRUE,
            encapsulationId,
            0,
            sample);

        if (*length == 0) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }    

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, *length);

    result = TransformedSensorDataExample_cPlugin_serialize(
        (PRESTypePluginEndpointData)&epd,
        sample,
        &stream,
        RTI_TRUE,
        encapsulationId,
        RTI_TRUE,
        NULL);

    *length = RTICdrStream_getCurrentPositionOffset(&stream);
    return result;
}

RTIBool
TransformedSensorDataExample_cPlugin_serialize_to_cdr_buffer(
    char *buffer,
    unsigned int *length,
    const TransformedSensorDataExample_c *sample)
{
    return TransformedSensorDataExample_cPlugin_serialize_to_cdr_buffer_ex(
        buffer,
        length,
        sample,
        DDS_XCDR_DATA_REPRESENTATION); /* TODO CODEGENII-899: use XCDR2 */
}

RTIBool
TransformedSensorDataExample_cPlugin_deserialize_from_cdr_buffer(
    TransformedSensorDataExample_c *sample,
    const char * buffer,
    unsigned int length)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;

    epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
    epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    TransformedSensorDataExample_c_finalize_optional_members(sample, RTI_TRUE);
    return TransformedSensorDataExample_cPlugin_deserialize_sample( 
        (PRESTypePluginEndpointData)&epd, sample,
        &stream, RTI_TRUE, RTI_TRUE, 
        NULL);
}

DDS_ReturnCode_t
TransformedSensorDataExample_cPlugin_data_to_string(
    const TransformedSensorDataExample_c *sample,
    char *str,
    DDS_UnsignedLong *str_size, 
    const struct DDS_PrintFormatProperty *property)
{
    DDS_DynamicData *data = NULL;
    char *buffer = NULL;
    unsigned int length = 0;
    struct DDS_PrintFormat printFormat;
    DDS_ReturnCode_t retCode = DDS_RETCODE_ERROR;

    if (sample == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (str_size == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (property == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (!TransformedSensorDataExample_cPlugin_serialize_to_cdr_buffer(
        NULL, 
        &length, 
        sample)) {
        return DDS_RETCODE_ERROR;
    }

    RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
    if (buffer == NULL) {
        return DDS_RETCODE_ERROR;
    }

    if (!TransformedSensorDataExample_cPlugin_serialize_to_cdr_buffer(
        buffer, 
        &length, 
        sample)) {
        RTIOsapiHeap_freeBuffer(buffer);
        return DDS_RETCODE_ERROR;
    }

    data = DDS_DynamicData_new(
        TransformedSensorDataExample_c_get_typecode(), 
        &DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
    if (data == NULL) {
        RTIOsapiHeap_freeBuffer(buffer);
        return DDS_RETCODE_ERROR;
    }

    retCode = DDS_DynamicData_from_cdr_buffer(data, buffer, length);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    retCode = DDS_PrintFormatProperty_to_print_format(
        property, 
        &printFormat);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    retCode = DDS_DynamicDataFormatter_to_string_w_format(
        data, 
        str,
        str_size, 
        &printFormat);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    RTIOsapiHeap_freeBuffer(buffer);
    DDS_DynamicData_delete(data);
    return DDS_RETCODE_OK;
}

RTIBool 
TransformedSensorDataExample_cPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TransformedSensorDataExample_c **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{
    RTIBool result = RTI_FALSE;
    const char *METHOD_NAME = "TransformedSensorDataExample_cPlugin_deserialize";
    if (drop_sample) {} /* To avoid warnings */

    stream->_xTypesState.unassignable = RTI_FALSE;

    result = TransformedSensorDataExample_cPlugin_deserialize_sample( 
        endpoint_data, (sample != NULL)?*sample:NULL,
        stream, deserialize_encapsulation, deserialize_sample, 
        endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }
    if (!result && stream->_xTypesState.unassignable ) {

        RTICdrLog_exception(
            METHOD_NAME, 
            &RTI_CDR_LOG_UNASSIGNABLE_SAMPLE_OF_TYPE_s, 
            "TransformedSensorDataExample_c");

    }

    return result;

}

RTIBool TransformedSensorDataExample_cPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if (skip_sample) {

        if (!RTICdrStream_skipPrimitiveArray(
            stream, ((TRANSFORMED_SENSOR_DATA_ARRAY_SIZE_c)), RTI_CDR_UNSIGNED_LONG_TYPE)) {
            goto fin; 
        }      
        if (!RTICdrStream_skipPrimitiveArray(
            stream, ((TRANSFORMED_SENSOR_DATA_ARRAY_SIZE_c)), RTI_CDR_FLOAT_TYPE)) {
            goto fin; 
        }      
        if (!RTICdrStream_skipPrimitiveArray(
            stream, ((TRANSFORMED_SENSOR_DATA_ARRAY_SIZE_c)), RTI_CDR_BOOLEAN_TYPE)) {
            goto fin; 
        }      
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(skip_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

unsigned int 
TransformedSensorDataExample_cPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 
    if (overflow) {} /* To avoid warnings */

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, ((TRANSFORMED_SENSOR_DATA_ARRAY_SIZE_c)),  RTI_CDR_UNSIGNED_LONG_TYPE);

    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, ((TRANSFORMED_SENSOR_DATA_ARRAY_SIZE_c)),  RTI_CDR_FLOAT_TYPE);

    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, ((TRANSFORMED_SENSOR_DATA_ARRAY_SIZE_c)),  RTI_CDR_BOOLEAN_TYPE);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

unsigned int 
TransformedSensorDataExample_cPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = TransformedSensorDataExample_cPlugin_get_serialized_sample_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

unsigned int 
TransformedSensorDataExample_cPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, ((TRANSFORMED_SENSOR_DATA_ARRAY_SIZE_c)), RTI_CDR_UNSIGNED_LONG_TYPE);
    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, ((TRANSFORMED_SENSOR_DATA_ARRAY_SIZE_c)), RTI_CDR_FLOAT_TYPE);
    current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, ((TRANSFORMED_SENSOR_DATA_ARRAY_SIZE_c)), RTI_CDR_BOOLEAN_TYPE);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

/* Returns the size of the sample in its serialized form (in bytes).
* It can also be an estimation in excess of the real buffer needed 
* during a call to the serialize() function.
* The value reported does not have to include the space for the
* encapsulation flags.
*/
unsigned int
TransformedSensorDataExample_cPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TransformedSensorDataExample_c * sample) 
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;
    struct PRESTypePluginDefaultEndpointData epd;   

    if (sample==NULL) {
        return 0;
    }
    if (endpoint_data == NULL) {
        endpoint_data = (PRESTypePluginEndpointData) &epd;
        PRESTypePluginDefaultEndpointData_setBaseAlignment(
            endpoint_data,
            current_alignment);        
    }

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
        PRESTypePluginDefaultEndpointData_setBaseAlignment(
            endpoint_data,
            current_alignment);
    }

    current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment), 
            ((TRANSFORMED_SENSOR_DATA_ARRAY_SIZE_c)), RTI_CDR_UNSIGNED_LONG_TYPE);  

    current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment), 
            ((TRANSFORMED_SENSOR_DATA_ARRAY_SIZE_c)), RTI_CDR_FLOAT_TYPE);  

    current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        PRESTypePluginDefaultEndpointData_getAlignment(
            endpoint_data, current_alignment), 
            ((TRANSFORMED_SENSOR_DATA_ARRAY_SIZE_c)), RTI_CDR_BOOLEAN_TYPE);  

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
TransformedSensorDataExample_cPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool 
TransformedSensorDataExample_cPlugin_serialize_key_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    const TransformedSensorDataExample_c *sample, 
    struct RTICdrStream *stream,    
    RTIEncapsulationId encapsulation_id,
    void *endpoint_plugin_qos)
{
    return TransformedSensorDataExample_cPlugin_serialize_key(endpoint_data,
    sample, 
    stream,    
    RTI_FALSE,
    encapsulation_id,
    RTI_TRUE,
    endpoint_plugin_qos);
}

RTIBool 
TransformedSensorDataExample_cPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TransformedSensorDataExample_c *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_key) {

        if (!TransformedSensorDataExample_cPlugin_serialize(
            endpoint_data,
            sample,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool TransformedSensorDataExample_cPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TransformedSensorDataExample_c *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{

    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if (deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if (deserialize_key) {

        if (!TransformedSensorDataExample_cPlugin_deserialize_sample(
            endpoint_data, sample, stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;

}

RTIBool TransformedSensorDataExample_cPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TransformedSensorDataExample_c **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    stream->_xTypesState.unassignable = RTI_FALSE;
    result= TransformedSensorDataExample_cPlugin_deserialize_key_sample(
        endpoint_data, (sample != NULL)?*sample:NULL, stream,
        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }

    return result;    

}

unsigned int
TransformedSensorDataExample_cPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */
    if (overflow) {} /* To avoid warnings */

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment += TransformedSensorDataExample_cPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow,RTI_FALSE, encapsulation_id, current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

unsigned int
TransformedSensorDataExample_cPlugin_get_serialized_key_max_size_for_keyhash_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    return TransformedSensorDataExample_cPlugin_get_serialized_key_max_size_ex(
        endpoint_data,
        overflow,
        RTI_FALSE,
        encapsulation_id,
        current_alignment);
}

unsigned int
TransformedSensorDataExample_cPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = TransformedSensorDataExample_cPlugin_get_serialized_key_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

unsigned int
TransformedSensorDataExample_cPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = TransformedSensorDataExample_cPlugin_get_serialized_key_max_size_for_keyhash_ex(
        endpoint_data,
        &overflow,
        encapsulation_id,
        current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

RTIBool 
TransformedSensorDataExample_cPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TransformedSensorDataExample_c *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    RTIBool error = RTI_FALSE;

    if (stream == NULL) {
        error = RTI_TRUE;
        goto fin;
    }
    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }
        position = RTICdrStream_resetAlignment(stream);
    }

    if (deserialize_key) {

        if (!TransformedSensorDataExample_cPlugin_deserialize_sample(
            endpoint_data, sample, stream, RTI_FALSE, 
            RTI_TRUE, endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    done = RTI_TRUE;
  fin:
    if(!error) {
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
    } else {
        return RTI_FALSE;
    }       

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */
struct PRESTypePlugin *TransformedSensorDataExample_cPlugin_new(void) 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
    PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);

    if (plugin == NULL) {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
    (PRESTypePluginOnParticipantAttachedCallback)
    TransformedSensorDataExample_cPlugin_on_participant_attached;
    plugin->onParticipantDetached =
    (PRESTypePluginOnParticipantDetachedCallback)
    TransformedSensorDataExample_cPlugin_on_participant_detached;
    plugin->onEndpointAttached =
    (PRESTypePluginOnEndpointAttachedCallback)
    TransformedSensorDataExample_cPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
    (PRESTypePluginOnEndpointDetachedCallback)
    TransformedSensorDataExample_cPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
    (PRESTypePluginCopySampleFunction)
    TransformedSensorDataExample_cPlugin_copy_sample;
    plugin->createSampleFnc =
    (PRESTypePluginCreateSampleFunction)
    TransformedSensorDataExample_cPlugin_create_sample;
    plugin->destroySampleFnc =
    (PRESTypePluginDestroySampleFunction)
    TransformedSensorDataExample_cPlugin_destroy_sample;
    plugin->finalizeOptionalMembersFnc =
    (PRESTypePluginFinalizeOptionalMembersFunction)
    TransformedSensorDataExample_c_finalize_optional_members;

    plugin->serializeFnc = 
    (PRESTypePluginSerializeFunction) TransformedSensorDataExample_cPlugin_serialize;
    plugin->deserializeFnc =
    (PRESTypePluginDeserializeFunction) TransformedSensorDataExample_cPlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
    TransformedSensorDataExample_cPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
    (PRESTypePluginGetSerializedSampleMinSizeFunction)
    TransformedSensorDataExample_cPlugin_get_serialized_sample_min_size;

    plugin->getSampleFnc =
    (PRESTypePluginGetSampleFunction)
    TransformedSensorDataExample_cPlugin_get_sample;
    plugin->returnSampleFnc =
    (PRESTypePluginReturnSampleFunction)
    TransformedSensorDataExample_cPlugin_return_sample;
    plugin->getKeyKindFnc =
    (PRESTypePluginGetKeyKindFunction)
    TransformedSensorDataExample_cPlugin_get_key_kind;

    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL ;    
    plugin->deserializeKeyFnc = NULL;  
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;    
    plugin->typeCode =  (struct RTICdrTypeCode *)TransformedSensorDataExample_c_get_typecode();
    plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

    /* Serialized buffer */
    plugin->getBuffer = 
    (PRESTypePluginGetBufferFunction)
    TransformedSensorDataExample_cPlugin_get_buffer;
    plugin->returnBuffer = 
    (PRESTypePluginReturnBufferFunction)
    TransformedSensorDataExample_cPlugin_return_buffer;
    plugin->getBufferWithParams = NULL;
    plugin->returnBufferWithParams = NULL;  
    plugin->getSerializedSampleSizeFnc =
    (PRESTypePluginGetSerializedSampleSizeFunction)
    TransformedSensorDataExample_cPlugin_get_serialized_sample_size;

    plugin->endpointTypeName = TransformedSensorDataExample_cTYPENAME;
    plugin->isMetpType = RTI_FALSE;
    return plugin;
}

void
TransformedSensorDataExample_cPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 
#undef RTI_CDR_CURRENT_SUBMODULE 
