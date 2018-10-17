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
/* See SensorDataTransformation.cpp                                          */
/*                                                                           */
/* ========================================================================= */

#ifndef _sensordatatransformation_h_
#define _sensordatatransformation_h_

#include <rti\routing\transf\Transformation.hpp>

/* Header of the input/output types */
#include "SensorDataExample.hpp"
#include "TransformedSensorDataExample.hpp"

/*****************************************************************************/
/* SensorDataTransformation                                                  */
/*                                                                           */
/* This class will do the transformation. As a sublass of abstract class     */
/* Transformation, it requires to implement the methods declared here.       */
/*                                                                           */
/* This example preforms a transformation from type SensorDataExample to     */
/* TransformedSensorDataExample. See SensorDataExample.idl and               */
/* TransformedSensorDataExample.idl files included in this example for more  */
/* information.                                                              */
/*****************************************************************************/

 class SensorDataTransformation : public rti::routing::transf::Transformation {

 public:

    typedef void* SamplePtr;
    typedef void* InfoPtr;

    /* Here is where the transformation takes place */
    void transform(
            std::vector<SamplePtr>& output_sample_seq,
            std::vector<InfoPtr>& output_info_seq,
            const std::vector<SamplePtr>& input_sample_seq,
            const std::vector<InfoPtr>& input_info_seq);

    /* Free resources after every transform call */
    void return_loan(
            std::vector<SamplePtr>& sample_seq,
            std::vector<InfoPtr>& info_seq);

    virtual ~SensorDataTransformation();
};

#endif