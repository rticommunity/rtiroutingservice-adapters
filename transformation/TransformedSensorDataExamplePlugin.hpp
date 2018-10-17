

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TransformedSensorDataExample.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef TransformedSensorDataExamplePlugin_1057072684_h
#define TransformedSensorDataExamplePlugin_1057072684_h

#include "TransformedSensorDataExample.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#define TransformedSensorDataExamplePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define TransformedSensorDataExamplePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TransformedSensorDataExamplePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define TransformedSensorDataExamplePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TransformedSensorDataExamplePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TransformedSensorDataExample*
TransformedSensorDataExamplePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TransformedSensorDataExample*
TransformedSensorDataExamplePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TransformedSensorDataExample*
TransformedSensorDataExamplePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TransformedSensorDataExamplePluginSupport_copy_data(
    TransformedSensorDataExample *out,
    const TransformedSensorDataExample *in);

NDDSUSERDllExport extern void 
TransformedSensorDataExamplePluginSupport_destroy_data_w_params(
    TransformedSensorDataExample *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TransformedSensorDataExamplePluginSupport_destroy_data_ex(
    TransformedSensorDataExample *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TransformedSensorDataExamplePluginSupport_destroy_data(
    TransformedSensorDataExample *sample);

NDDSUSERDllExport extern void 
TransformedSensorDataExamplePluginSupport_print_data(
    const TransformedSensorDataExample *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TransformedSensorDataExamplePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TransformedSensorDataExamplePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
TransformedSensorDataExamplePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TransformedSensorDataExamplePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
TransformedSensorDataExamplePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TransformedSensorDataExample *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
TransformedSensorDataExamplePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TransformedSensorDataExample *out,
    const TransformedSensorDataExample *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TransformedSensorDataExamplePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TransformedSensorDataExample *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TransformedSensorDataExamplePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TransformedSensorDataExample *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
TransformedSensorDataExamplePlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const TransformedSensorDataExample *sample,
    dds::core::policy::DataRepresentationId representation
    = dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
TransformedSensorDataExamplePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TransformedSensorDataExample **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
TransformedSensorDataExamplePlugin_deserialize_from_cdr_buffer(
    TransformedSensorDataExample *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern RTIBool
TransformedSensorDataExamplePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TransformedSensorDataExamplePlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);   

NDDSUSERDllExport extern unsigned int 
TransformedSensorDataExamplePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TransformedSensorDataExamplePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TransformedSensorDataExamplePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TransformedSensorDataExample * sample);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
TransformedSensorDataExamplePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TransformedSensorDataExamplePlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TransformedSensorDataExamplePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TransformedSensorDataExamplePlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TransformedSensorDataExamplePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TransformedSensorDataExample *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TransformedSensorDataExamplePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TransformedSensorDataExample * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TransformedSensorDataExamplePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TransformedSensorDataExample ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
TransformedSensorDataExamplePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TransformedSensorDataExample *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TransformedSensorDataExamplePlugin_new(void);

NDDSUSERDllExport extern void
TransformedSensorDataExamplePlugin_delete(struct PRESTypePlugin *);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* TransformedSensorDataExamplePlugin_1057072684_h */

