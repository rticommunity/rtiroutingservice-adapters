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
/* See SensorDataTransformationPlugin.cpp                                    */
/*                                                                           */
/* ========================================================================= */

#ifndef _sensordatatransformationplugin_h_
#define _sensordatatransformationplugin_h_

#include <rti\routing\transf\TransformationPlugin.hpp>

/* Subclass of transformation */
#include "SensorDataTransformation.h"

/*****************************************************************************/
/* SensorDataTransformationPlugin                                            */
/*                                                                           */
/* This class will be used by Routing Service to create and initialize our   */
/* custom Transformation Subclass. In this example, that class is            */
/* SensorDataTransformation                                                  */
/*                                                                           */
/* This class must use the macro                                             */
/* RTI_TRANSFORMATION_PLUGIN_CREATE_FUNCTION_DECL(classname) in order to     */ 
/* create a C wrapper function that will be the dynamic library entry point  */
/* used by Routing Service.                                                  */
/* Since TransformationPlugin is an abstract class. All sublcasses of        */
/* TransformationPlugin must implement the methods defined here.             */
/*****************************************************************************/

class SensorDataTransformationPlugin :
        public rti::routing::transf::TransformationPlugin {

private:

    /* Pointer to the SensorDataTransformation instance */
    SensorDataTransformation* sensor_data_transformation_instance;

public:

    /* Constructor with rti::routing::PropertySet parameter */
    SensorDataTransformationPlugin(rti::routing::PropertySet properties);

    /* Create and return an instance of SensorDataTransformation subclass */
    rti::routing::transf::Transformation * create_transformation(
            const rti::routing::TypeInfo& input_type_info,
            const rti::routing::TypeInfo& output_type_info,
            const rti::routing::PropertySet& properties);

    /* Free al resources created needed */
    void delete_transformation(
            rti::routing::transf::Transformation *transformation);

    /*
     * Get the version of the Connext DDS used to compile
     * this transformation library
     */
    rti::config::LibraryVersion get_version() const;

    ~SensorDataTransformationPlugin();
};

    /*
     * Crate the declaration of the C wrapper function . this is REQUIRED
     * on all Routing Service transformations
     */
    RTI_TRANSFORMATION_PLUGIN_CREATE_FUNCTION_DECL(SensorDataTransformationPlugin)

#endif