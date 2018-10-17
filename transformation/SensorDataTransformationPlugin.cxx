/*****************************************************************************/
/*         (c) Copyright, Real-Time Innovations, All rights reserved.        */
/*                                                                           */
/*         Permission to modify and use for internal purposes granted.       */
/* This software is provided "as is", without warranty, express or implied.  */
/*                                                                           */
/*****************************************************************************/

/* ========================================================================= */
/* RTI Routing Service transformation Example                                */
/* ========================================================================= */
/*                                                                           */
/* See SensorDataTransformationPlugin.h                                      */
/*                                                                           */
/* ========================================================================= */

#include "SensorDataTransformationPlugin.h"

SensorDataTransformationPlugin::SensorDataTransformationPlugin(
        rti::routing::PropertySet properties):
        rti::routing::transf::TransformationPlugin() {

}

/* Creates the instance of SensorDataTransformation*/
rti::routing::transf::Transformation *
        SensorDataTransformationPlugin::create_transformation(
            const rti::routing::TypeInfo & input_type_info,
            const rti::routing::TypeInfo & output_type_info,
            const rti::routing::PropertySet & properties) {
    sensor_data_transformation_instance = new SensorDataTransformation();
    return sensor_data_transformation_instance;
}

/* Deletes the instance of SensorDataTransformation*/
void SensorDataTransformationPlugin::delete_transformation(
        rti::routing::transf::Transformation * transformation) {
    if (sensor_data_transformation_instance != nullptr) {
        delete sensor_data_transformation_instance;
        sensor_data_transformation_instance = nullptr;
    }
}

rti::config::LibraryVersion
        SensorDataTransformationPlugin::get_version() const {
    return rti::config::LibraryVersion();
}

SensorDataTransformationPlugin::~SensorDataTransformationPlugin() {

}

/*
 * Crate the definition of the C wrapper function . this is REQUIRED
 * on all Routing Service transformations
 */
RTI_TRANSFORMATION_PLUGIN_CREATE_FUNCTION_DEF(SensorDataTransformationPlugin);